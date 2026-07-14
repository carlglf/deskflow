/****************************************************************************
** Meta object code from reading C++ file 'IpcServer.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/lib/deskflow/ipc/IpcServer.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IpcServer.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8deskflow4core3ipc9IpcServerE_t {};
} // unnamed namespace

template <> constexpr inline auto deskflow::core::ipc::IpcServer::qt_create_metaobjectdata<qt_meta_tag_ZN8deskflow4core3ipc9IpcServerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "deskflow::core::ipc::IpcServer",
        "logLevelChanged",
        "",
        "logLevel",
        "configFileChanged",
        "configFile",
        "startProcessRequested",
        "stopProcessRequested",
        "clearSettingsRequested"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'logLevelChanged'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'configFileChanged'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'startProcessRequested'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'stopProcessRequested'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'clearSettingsRequested'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<IpcServer, qt_meta_tag_ZN8deskflow4core3ipc9IpcServerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject deskflow::core::ipc::IpcServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8deskflow4core3ipc9IpcServerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8deskflow4core3ipc9IpcServerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8deskflow4core3ipc9IpcServerE_t>.metaTypes,
    nullptr
} };

void deskflow::core::ipc::IpcServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IpcServer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->logLevelChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->configFileChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->startProcessRequested(); break;
        case 3: _t->stopProcessRequested(); break;
        case 4: _t->clearSettingsRequested(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (IpcServer::*)(const QString & )>(_a, &IpcServer::logLevelChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (IpcServer::*)(const QString & )>(_a, &IpcServer::configFileChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (IpcServer::*)()>(_a, &IpcServer::startProcessRequested, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (IpcServer::*)()>(_a, &IpcServer::stopProcessRequested, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (IpcServer::*)()>(_a, &IpcServer::clearSettingsRequested, 4))
            return;
    }
}

const QMetaObject *deskflow::core::ipc::IpcServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *deskflow::core::ipc::IpcServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8deskflow4core3ipc9IpcServerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int deskflow::core::ipc::IpcServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void deskflow::core::ipc::IpcServer::logLevelChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void deskflow::core::ipc::IpcServer::configFileChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void deskflow::core::ipc::IpcServer::startProcessRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void deskflow::core::ipc::IpcServer::stopProcessRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void deskflow::core::ipc::IpcServer::clearSettingsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
