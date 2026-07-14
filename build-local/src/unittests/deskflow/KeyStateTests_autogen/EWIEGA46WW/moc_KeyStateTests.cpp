/****************************************************************************
** Meta object code from reading C++ file 'KeyStateTests.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/unittests/deskflow/KeyStateTests.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KeyStateTests.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN13KeyStateTestsE_t {};
} // unnamed namespace

template <> constexpr inline auto KeyStateTests::qt_create_metaobjectdata<qt_meta_tag_ZN13KeyStateTestsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KeyStateTests",
        "initTestCase",
        "",
        "keyDown",
        "keyUp",
        "invalidKey",
        "onKey_aKeyDown_keyStateOne",
        "onKey_aKeyUp_keyStateZero",
        "onKey_invalidKey_keyStateZero",
        "updateKeyState_pollDoesNothing_keyNotSet",
        "updateKeyState_activeModifiers_maskNotSet",
        "fakeKeyRepeat_invalidKey_returnsFalse",
        "fakeKeyUp_buttonNotDown_returnsFalse",
        "isKeyDown_noKeysDown_returnsFalse",
        "isKeyDown_keyDown_retrunsTrue",
        "updateKeyState_pollInsertsSingleKey_keyIsDown"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'initTestCase'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'keyDown'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'keyUp'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'invalidKey'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onKey_aKeyDown_keyStateOne'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onKey_aKeyUp_keyStateZero'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onKey_invalidKey_keyStateZero'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateKeyState_pollDoesNothing_keyNotSet'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateKeyState_activeModifiers_maskNotSet'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'fakeKeyRepeat_invalidKey_returnsFalse'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'fakeKeyUp_buttonNotDown_returnsFalse'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'isKeyDown_noKeysDown_returnsFalse'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'isKeyDown_keyDown_retrunsTrue'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateKeyState_pollInsertsSingleKey_keyIsDown'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<KeyStateTests, qt_meta_tag_ZN13KeyStateTestsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KeyStateTests::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13KeyStateTestsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13KeyStateTestsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13KeyStateTestsE_t>.metaTypes,
    nullptr
} };

void KeyStateTests::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KeyStateTests *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->keyDown(); break;
        case 2: _t->keyUp(); break;
        case 3: _t->invalidKey(); break;
        case 4: _t->onKey_aKeyDown_keyStateOne(); break;
        case 5: _t->onKey_aKeyUp_keyStateZero(); break;
        case 6: _t->onKey_invalidKey_keyStateZero(); break;
        case 7: _t->updateKeyState_pollDoesNothing_keyNotSet(); break;
        case 8: _t->updateKeyState_activeModifiers_maskNotSet(); break;
        case 9: _t->fakeKeyRepeat_invalidKey_returnsFalse(); break;
        case 10: _t->fakeKeyUp_buttonNotDown_returnsFalse(); break;
        case 11: _t->isKeyDown_noKeysDown_returnsFalse(); break;
        case 12: _t->isKeyDown_keyDown_retrunsTrue(); break;
        case 13: _t->updateKeyState_pollInsertsSingleKey_keyIsDown(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *KeyStateTests::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeyStateTests::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13KeyStateTestsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KeyStateTests::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
