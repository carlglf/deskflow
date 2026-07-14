/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2012 Synergy App Ltd
 * SPDX-FileCopyrightText: (C) 2008 Volker Lanz <vl@fidra.de>
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#include "ScreenSettingsDialog.h"
#include "ui_ScreenSettingsDialog.h"

#include "gui/config/Screen.h"
#include "validators/AliasValidator.h"
#include "validators/ScreenNameValidator.h"
#include "validators/ValidationError.h"

#include <QComboBox>
#include <QDialogButtonBox>
#include <QFormLayout>
#include <QMessageBox>
#include <QVector>

using enum ScreenConfig::Modifier;
using enum ScreenConfig::SwitchCorner;
using enum ScreenConfig::Fix;

ScreenSettingsDialog::~ScreenSettingsDialog() = default;

ScreenSettingsDialog::ScreenSettingsDialog(QWidget *parent, Screen *screen, const ScreenList *screens)
    : QDialog(parent, Qt::WindowTitleHint | Qt::WindowSystemMenuHint),
      ui{std::make_unique<Ui::ScreenSettingsDialog>()},
      m_screen(screen),
      m_modifierKeys(screen->modifierKeys())
{

  ui->setupUi(this);
  ui->buttonBox->button(QDialogButtonBox::Cancel)->setFocus();

  ui->lineNameEdit->setText(m_screen->name());

  const auto valNameError = new validators::ValidationError(this, ui->lblNameError);
  const auto valName = new validators::ScreenNameValidator(ui->lineNameEdit, valNameError, screens);
  ui->lineNameEdit->setValidator(valName);

  const auto valAliasError = new validators::ValidationError(this, ui->lblAliasError);
  const auto valAlias = new validators::AliasValidator(ui->lineAddAlias, valAliasError);
  ui->lineAddAlias->setValidator(valAlias);

  for (int i = 0; i < m_screen->aliases().count(); i++)
    new QListWidgetItem(m_screen->aliases()[i], ui->listAliases);

  ui->comboShift->setCurrentIndex(m_screen->modifier(static_cast<int>(Shift)));
  ui->comboCtrl->setCurrentIndex(m_screen->modifier(static_cast<int>(Ctrl)));
  ui->comboAlt->setCurrentIndex(m_screen->modifier(static_cast<int>(Alt)));
  ui->comboMeta->setCurrentIndex(m_screen->modifier(static_cast<int>(Meta)));
  ui->comboSuper->setCurrentIndex(m_screen->modifier(static_cast<int>(Super)));
  ui->comboAltGr->setCurrentIndex(m_screen->modifier(static_cast<int>(AltGr)));

  ui->chkDeadTopLeft->setChecked(m_screen->switchCorner(static_cast<int>(TopLeft)));
  ui->chkDeadTopRight->setChecked(m_screen->switchCorner(static_cast<int>(TopRight)));
  ui->chkDeadBottomLeft->setChecked(m_screen->switchCorner(static_cast<int>(BottomLeft)));
  ui->chkDeadBottomRight->setChecked(m_screen->switchCorner(static_cast<int>(BottomRight)));
  ui->sbSwitchCornerSize->setValue(m_screen->switchCornerSize());

  ui->chkFixCapsLock->setChecked(m_screen->fix(CapsLock));
  ui->chkFixNumLock->setChecked(m_screen->fix(NumLock));
  ui->chkFixScrollLock->setChecked(m_screen->fix(ScrollLock));
  ui->chkFixXTest->setChecked(m_screen->fix(XTest));

  connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &ScreenSettingsDialog::accept);
  connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &ScreenSettingsDialog::reject);
  connect(ui->btnAddAlias, &QPushButton::clicked, this, &ScreenSettingsDialog::addAlias);
  connect(ui->btnRemoveAlias, &QPushButton::clicked, this, &ScreenSettingsDialog::removeAlias);
  connect(ui->lineAddAlias, &QLineEdit::textChanged, this, &ScreenSettingsDialog::checkNewAliasName);
  connect(ui->listAliases, &QListWidget::itemSelectionChanged, this, &ScreenSettingsDialog::aliasSelected);
  connect(ui->btnModifierKeys, &QPushButton::clicked, this, &ScreenSettingsDialog::editModifierKeys);
}

void ScreenSettingsDialog::accept()
{
  if (ui->lineNameEdit->text().isEmpty()) {
    QMessageBox::warning(
        this, tr("Screen name is empty"),
        tr("The screen name cannot be empty. "
           "Please either fill in a name or cancel the dialog.")
    );
    return;
  }
  if (!ui->lblNameError->text().isEmpty()) {
    return;
  }

  m_screen->setName(ui->lineNameEdit->text());

  m_screen->aliases().clear();

  for (int i = 0; i < ui->listAliases->count(); i++) {
    QString alias(ui->listAliases->item(i)->text());
    if (alias == ui->lineNameEdit->text()) {
      QMessageBox::warning(
          this, tr("Screen name matches alias"),
          tr("The screen name cannot be the same as an alias. "
             "Please either remove the alias or change the screen name.")
      );
      return;
    }
    if (!m_screen->aliases().contains(alias))
      m_screen->addAlias(alias);
  }

  m_screen->setModifier(Shift, ui->comboShift->currentIndex());
  m_screen->setModifier(Ctrl, ui->comboCtrl->currentIndex());
  m_screen->setModifier(Alt, ui->comboAlt->currentIndex());
  m_screen->setModifier(Meta, ui->comboMeta->currentIndex());
  m_screen->setModifier(Super, ui->comboSuper->currentIndex());
  m_screen->setModifier(AltGr, ui->comboAltGr->currentIndex());
  m_screen->modifierKeys() = m_modifierKeys;

  m_screen->setSwitchCorner(TopLeft, ui->chkDeadTopLeft->isChecked());
  m_screen->setSwitchCorner(TopRight, ui->chkDeadTopRight->isChecked());
  m_screen->setSwitchCorner(BottomLeft, ui->chkDeadBottomLeft->isChecked());
  m_screen->setSwitchCorner(BottomRight, ui->chkDeadBottomRight->isChecked());
  m_screen->setSwitchCornerSize(ui->sbSwitchCornerSize->value());

  m_screen->setFix(CapsLock, ui->chkFixCapsLock->isChecked());
  m_screen->setFix(NumLock, ui->chkFixNumLock->isChecked());
  m_screen->setFix(ScrollLock, ui->chkFixScrollLock->isChecked());
  m_screen->setFix(XTest, ui->chkFixXTest->isChecked());

  QDialog::accept();
}

void ScreenSettingsDialog::addAlias()
{
  if (!ui->lineAddAlias->text().isEmpty() &&
      ui->listAliases->findItems(ui->lineAddAlias->text(), Qt::MatchFixedString).isEmpty()) {
    new QListWidgetItem(ui->lineAddAlias->text(), ui->listAliases);
    ui->lineAddAlias->clear();
  }
}

void ScreenSettingsDialog::removeAlias() const
{
  QList<QListWidgetItem *> items = ui->listAliases->selectedItems();
  qDeleteAll(items);
}

void ScreenSettingsDialog::checkNewAliasName(const QString &text)
{
  ui->btnAddAlias->setEnabled(!text.isEmpty() && ui->lblAliasError->text().isEmpty());
}

void ScreenSettingsDialog::aliasSelected()
{
  ui->btnRemoveAlias->setEnabled(!ui->listAliases->selectedItems().isEmpty());
}

void ScreenSettingsDialog::editModifierKeys()
{
  QDialog dialog(this);
  dialog.setWindowTitle(tr("Left and right modifier keys"));

  auto *layout = new QFormLayout(&dialog);
  QVector<QComboBox *> combos;
  combos.reserve(ScreenConfig::modifierKeyCount());

  for (int source = 0; source < ScreenConfig::modifierKeyCount(); ++source) {
    auto *combo = new QComboBox(&dialog);
    combo->addItem(tr("Use general mapping"), static_cast<int>(ScreenConfig::ModifierKey::DefaultKey));
    for (int target = 0; target <= static_cast<int>(ScreenConfig::ModifierKey::None); ++target) {
      combo->addItem(modifierKeyLabel(target), target);
    }
    const auto currentIndex = combo->findData(m_modifierKeys[source]);
    combo->setCurrentIndex(currentIndex >= 0 ? currentIndex : 0);
    layout->addRow(modifierKeyLabel(source), combo);
    combos.append(combo);
  }

  auto *buttons = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, &dialog);
  connect(buttons, &QDialogButtonBox::accepted, &dialog, &QDialog::accept);
  connect(buttons, &QDialogButtonBox::rejected, &dialog, &QDialog::reject);
  layout->addRow(buttons);

  if (dialog.exec() != QDialog::Accepted) {
    return;
  }

  for (int source = 0; source < combos.size(); ++source) {
    m_modifierKeys[source] = combos[source]->currentData().toInt();
  }
}

QString ScreenSettingsDialog::modifierKeyLabel(int key) const
{
  using enum ScreenConfig::ModifierKey;
  switch (static_cast<ScreenConfig::ModifierKey>(key)) {
  case ShiftL:
    return tr("Left Shift");
  case ShiftR:
    return tr("Right Shift");
  case CtrlL:
    return tr("Left Ctrl");
  case CtrlR:
    return tr("Right Ctrl");
  case AltL:
    return tr("Left Alt");
  case AltR:
    return tr("Right Alt (non-AltGr)");
  case MetaL:
    return tr("Left Meta");
  case MetaR:
    return tr("Right Meta");
  case SuperL:
    return tr("Left Super / Win");
  case SuperR:
    return tr("Right Super / Win");
  case AltGr:
    return tr("AltGr / Windows right Alt");
  case None:
    return tr("None");
  default:
    return {};
  }
}
