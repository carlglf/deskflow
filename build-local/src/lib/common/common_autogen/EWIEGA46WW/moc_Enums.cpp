/****************************************************************************
** Meta object code from reading C++ file 'Enums.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/lib/common/Enums.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Enums.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8deskflow6clientE_t {};
} // unnamed namespace

template <> constexpr inline auto deskflow::client::qt_create_metaobjectdata<qt_meta_tag_ZN8deskflow6clientE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "deskflow::client",
        "ErrorType",
        "NoError",
        "AlreadyConnected",
        "HostnameError",
        "GenericError"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ErrorType'
        QtMocHelpers::EnumData<ErrorType>(1, 1, QMC::EnumIsScoped).add({
            {    2, ErrorType::NoError },
            {    3, ErrorType::AlreadyConnected },
            {    4, ErrorType::HostnameError },
            {    5, ErrorType::GenericError },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN8deskflow6clientE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN8deskflow6clientE =
    deskflow::client::qt_create_metaobjectdata<qt_meta_tag_ZN8deskflow6clientE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN8deskflow6clientE =
    qt_staticMetaObjectContent_ZN8deskflow6clientE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN8deskflow6clientE =
    qt_staticMetaObjectContent_ZN8deskflow6clientE.relocatingData;

Q_CONSTINIT const QMetaObject deskflow::client::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN8deskflow6clientE.stringdata,
    qt_staticMetaObjectStaticContent_ZN8deskflow6clientE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN8deskflow6clientE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN8deskflow4coreE_t {};
} // unnamed namespace

template <> constexpr inline auto deskflow::core::qt_create_metaobjectdata<qt_meta_tag_ZN8deskflow4coreE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "deskflow::core",
        "ProcessState",
        "Starting",
        "Started",
        "Stopping",
        "Stopped",
        "RetryPending",
        "ConnectionState",
        "Disconnected",
        "Connecting",
        "Connected",
        "Listening",
        "ConnectionRefusal",
        "IncompatibleVersion",
        "AlreadyConnected",
        "UnknownClient",
        "ProtocolError"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ProcessState'
        QtMocHelpers::EnumData<ProcessState>(1, 1, QMC::EnumIsScoped).add({
            {    2, ProcessState::Starting },
            {    3, ProcessState::Started },
            {    4, ProcessState::Stopping },
            {    5, ProcessState::Stopped },
            {    6, ProcessState::RetryPending },
        }),
        // enum 'ConnectionState'
        QtMocHelpers::EnumData<ConnectionState>(7, 7, QMC::EnumIsScoped).add({
            {    8, ConnectionState::Disconnected },
            {    9, ConnectionState::Connecting },
            {   10, ConnectionState::Connected },
            {   11, ConnectionState::Listening },
        }),
        // enum 'ConnectionRefusal'
        QtMocHelpers::EnumData<ConnectionRefusal>(12, 12, QMC::EnumIsScoped).add({
            {   13, ConnectionRefusal::IncompatibleVersion },
            {   14, ConnectionRefusal::AlreadyConnected },
            {   15, ConnectionRefusal::UnknownClient },
            {   16, ConnectionRefusal::ProtocolError },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN8deskflow4coreE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN8deskflow4coreE =
    deskflow::core::qt_create_metaobjectdata<qt_meta_tag_ZN8deskflow4coreE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN8deskflow4coreE =
    qt_staticMetaObjectContent_ZN8deskflow4coreE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN8deskflow4coreE =
    qt_staticMetaObjectContent_ZN8deskflow4coreE.relocatingData;

Q_CONSTINIT const QMetaObject deskflow::core::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN8deskflow4coreE.stringdata,
    qt_staticMetaObjectStaticContent_ZN8deskflow4coreE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN8deskflow4coreE.metaTypes,
    nullptr
} };

QT_WARNING_POP
