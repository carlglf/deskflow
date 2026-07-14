/****************************************************************************
** Meta object code from reading C++ file 'IpcClient.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/lib/gui/ipc/IpcClient.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IpcClient.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8deskflow3gui3ipc9IpcClientE_t {};
} // unnamed namespace

template <> constexpr inline auto deskflow::gui::ipc::IpcClient::qt_create_metaobjectdata<qt_meta_tag_ZN8deskflow3gui3ipc9IpcClientE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "deskflow::gui::ipc::IpcClient",
        "connected",
        "",
        "connectionFailed",
        "serverShutdown",
        "versionMismatch",
        "handleDisconnected",
        "handleErrorOccurred",
        "handleReadyRead"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'connected'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'connectionFailed'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'serverShutdown'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'versionMismatch'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'handleDisconnected'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'handleErrorOccurred'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'handleReadyRead'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<IpcClient, qt_meta_tag_ZN8deskflow3gui3ipc9IpcClientE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject deskflow::gui::ipc::IpcClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8deskflow3gui3ipc9IpcClientE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8deskflow3gui3ipc9IpcClientE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8deskflow3gui3ipc9IpcClientE_t>.metaTypes,
    nullptr
} };

void deskflow::gui::ipc::IpcClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IpcClient *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->connectionFailed(); break;
        case 2: _t->serverShutdown(); break;
        case 3: _t->versionMismatch(); break;
        case 4: _t->handleDisconnected(); break;
        case 5: _t->handleErrorOccurred(); break;
        case 6: _t->handleReadyRead(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (IpcClient::*)()>(_a, &IpcClient::connected, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (IpcClient::*)()>(_a, &IpcClient::connectionFailed, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (IpcClient::*)()>(_a, &IpcClient::serverShutdown, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (IpcClient::*)()>(_a, &IpcClient::versionMismatch, 3))
            return;
    }
}

const QMetaObject *deskflow::gui::ipc::IpcClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *deskflow::gui::ipc::IpcClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8deskflow3gui3ipc9IpcClientE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int deskflow::gui::ipc::IpcClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void deskflow::gui::ipc::IpcClient::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void deskflow::gui::ipc::IpcClient::connectionFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void deskflow::gui::ipc::IpcClient::serverShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void deskflow::gui::ipc::IpcClient::versionMismatch()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
