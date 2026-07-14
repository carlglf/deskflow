/****************************************************************************
** Meta object code from reading C++ file 'ServerConfigTests.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/unittests/server/ServerConfigTests.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ServerConfigTests.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17ServerConfigTestsE_t {};
} // unnamed namespace

template <> constexpr inline auto ServerConfigTests::qt_create_metaobjectdata<qt_meta_tag_ZN17ServerConfigTestsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ServerConfigTests",
        "exactModifierMappingsRoundTrip",
        "",
        "equalityCheck",
        "equalityCheck_diff_options",
        "equalityCheck_diff_alias",
        "equalityCheck_diff_filters",
        "equalityCheck_diff_neighbours1",
        "equalityCheck_diff_neighbours2",
        "equalityCheck_diff_neighbours3"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'exactModifierMappingsRoundTrip'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'equalityCheck'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'equalityCheck_diff_options'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'equalityCheck_diff_alias'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'equalityCheck_diff_filters'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'equalityCheck_diff_neighbours1'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'equalityCheck_diff_neighbours2'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'equalityCheck_diff_neighbours3'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ServerConfigTests, qt_meta_tag_ZN17ServerConfigTestsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ServerConfigTests::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ServerConfigTestsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ServerConfigTestsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17ServerConfigTestsE_t>.metaTypes,
    nullptr
} };

void ServerConfigTests::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ServerConfigTests *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->exactModifierMappingsRoundTrip(); break;
        case 1: _t->equalityCheck(); break;
        case 2: _t->equalityCheck_diff_options(); break;
        case 3: _t->equalityCheck_diff_alias(); break;
        case 4: _t->equalityCheck_diff_filters(); break;
        case 5: _t->equalityCheck_diff_neighbours1(); break;
        case 6: _t->equalityCheck_diff_neighbours2(); break;
        case 7: _t->equalityCheck_diff_neighbours3(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ServerConfigTests::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerConfigTests::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ServerConfigTestsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ServerConfigTests::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
