/****************************************************************************
** Meta object code from reading C++ file 'frmmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "frmmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_frmMain_t {
    QByteArrayData data[106];
    char stringdata0[2419];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_frmMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_frmMain_t qt_meta_stringdata_frmMain = {
    {
QT_MOC_LITERAL(0, 0, 7), // "frmMain"
QT_MOC_LITERAL(1, 8, 34), // "updateHeightMapInterpolationD..."
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "reset"
QT_MOC_LITERAL(4, 50, 22), // "placeVisualizerButtons"
QT_MOC_LITERAL(5, 73, 21), // "onSerialPortReadyRead"
QT_MOC_LITERAL(6, 95, 17), // "onSerialPortError"
QT_MOC_LITERAL(7, 113, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(8, 142, 17), // "onTimerConnection"
QT_MOC_LITERAL(9, 160, 17), // "onTimerStateQuery"
QT_MOC_LITERAL(10, 178, 29), // "onVisualizatorRotationChanged"
QT_MOC_LITERAL(11, 208, 17), // "onScroolBarAction"
QT_MOC_LITERAL(12, 226, 6), // "action"
QT_MOC_LITERAL(13, 233, 10), // "onJogTimer"
QT_MOC_LITERAL(14, 244, 17), // "onTableInsertLine"
QT_MOC_LITERAL(15, 262, 18), // "onTableDeleteLines"
QT_MOC_LITERAL(16, 281, 24), // "onActRecentFileTriggered"
QT_MOC_LITERAL(17, 306, 25), // "onCboCommandReturnPressed"
QT_MOC_LITERAL(18, 332, 21), // "onTableCurrentChanged"
QT_MOC_LITERAL(19, 354, 11), // "QModelIndex"
QT_MOC_LITERAL(20, 366, 4), // "idx1"
QT_MOC_LITERAL(21, 371, 4), // "idx2"
QT_MOC_LITERAL(22, 376, 16), // "onConsoleResized"
QT_MOC_LITERAL(23, 393, 4), // "size"
QT_MOC_LITERAL(24, 398, 19), // "onPanelsSizeChanged"
QT_MOC_LITERAL(25, 418, 16), // "onCmdUserClicked"
QT_MOC_LITERAL(26, 435, 7), // "checked"
QT_MOC_LITERAL(27, 443, 19), // "onOverridingToggled"
QT_MOC_LITERAL(28, 463, 26), // "onActSendFromLineTriggered"
QT_MOC_LITERAL(29, 490, 24), // "on_actFileExit_triggered"
QT_MOC_LITERAL(30, 515, 22), // "on_cmdFileOpen_clicked"
QT_MOC_LITERAL(31, 538, 17), // "on_cmdFit_clicked"
QT_MOC_LITERAL(32, 556, 22), // "on_cmdFileSend_clicked"
QT_MOC_LITERAL(33, 579, 18), // "onTableCellChanged"
QT_MOC_LITERAL(34, 598, 2), // "i1"
QT_MOC_LITERAL(35, 601, 2), // "i2"
QT_MOC_LITERAL(36, 604, 31), // "on_actServiceSettings_triggered"
QT_MOC_LITERAL(37, 636, 24), // "on_actFileOpen_triggered"
QT_MOC_LITERAL(38, 661, 25), // "on_cmdCommandSend_clicked"
QT_MOC_LITERAL(39, 687, 18), // "on_cmdHome_clicked"
QT_MOC_LITERAL(40, 706, 19), // "on_cmdTouch_clicked"
QT_MOC_LITERAL(41, 726, 20), // "on_cmdZeroXY_clicked"
QT_MOC_LITERAL(42, 747, 19), // "on_cmdZeroZ_clicked"
QT_MOC_LITERAL(43, 767, 27), // "on_cmdRestoreOrigin_clicked"
QT_MOC_LITERAL(44, 795, 19), // "on_cmdReset_clicked"
QT_MOC_LITERAL(45, 815, 20), // "on_cmdUnlock_clicked"
QT_MOC_LITERAL(46, 836, 26), // "on_cmdSafePosition_clicked"
QT_MOC_LITERAL(47, 863, 21), // "on_cmdSpindle_toggled"
QT_MOC_LITERAL(48, 885, 22), // "on_chkTestMode_clicked"
QT_MOC_LITERAL(49, 908, 23), // "on_cmdFilePause_clicked"
QT_MOC_LITERAL(50, 932, 23), // "on_cmdFileReset_clicked"
QT_MOC_LITERAL(51, 956, 23), // "on_actFileNew_triggered"
QT_MOC_LITERAL(52, 980, 26), // "on_cmdClearConsole_clicked"
QT_MOC_LITERAL(53, 1007, 26), // "on_actFileSaveAs_triggered"
QT_MOC_LITERAL(54, 1034, 24), // "on_actFileSave_triggered"
QT_MOC_LITERAL(55, 1059, 37), // "on_actFileSaveTransformedAs_t..."
QT_MOC_LITERAL(56, 1097, 17), // "on_cmdTop_clicked"
QT_MOC_LITERAL(57, 1115, 19), // "on_cmdFront_clicked"
QT_MOC_LITERAL(58, 1135, 18), // "on_cmdLeft_clicked"
QT_MOC_LITERAL(59, 1154, 23), // "on_cmdIsometric_clicked"
QT_MOC_LITERAL(60, 1178, 21), // "on_actAbout_triggered"
QT_MOC_LITERAL(61, 1200, 24), // "on_grpOverriding_toggled"
QT_MOC_LITERAL(62, 1225, 21), // "on_grpSpindle_toggled"
QT_MOC_LITERAL(63, 1247, 17), // "on_grpJog_toggled"
QT_MOC_LITERAL(64, 1265, 26), // "on_grpUserCommands_toggled"
QT_MOC_LITERAL(65, 1292, 29), // "on_chkKeyboardControl_toggled"
QT_MOC_LITERAL(66, 1322, 40), // "on_tblProgram_customContextMe..."
QT_MOC_LITERAL(67, 1363, 3), // "pos"
QT_MOC_LITERAL(68, 1367, 25), // "on_splitter_splitterMoved"
QT_MOC_LITERAL(69, 1393, 5), // "index"
QT_MOC_LITERAL(70, 1399, 27), // "on_actRecentClear_triggered"
QT_MOC_LITERAL(71, 1427, 23), // "on_grpHeightMap_toggled"
QT_MOC_LITERAL(72, 1451, 4), // "arg1"
QT_MOC_LITERAL(73, 1456, 33), // "on_chkHeightMapBorderShow_tog..."
QT_MOC_LITERAL(74, 1490, 35), // "on_txtHeightMapBorderX_valueC..."
QT_MOC_LITERAL(75, 1526, 39), // "on_txtHeightMapBorderWidth_va..."
QT_MOC_LITERAL(76, 1566, 35), // "on_txtHeightMapBorderY_valueC..."
QT_MOC_LITERAL(77, 1602, 40), // "on_txtHeightMapBorderHeight_v..."
QT_MOC_LITERAL(78, 1643, 31), // "on_chkHeightMapGridShow_toggled"
QT_MOC_LITERAL(79, 1675, 33), // "on_txtHeightMapGridX_valueCha..."
QT_MOC_LITERAL(80, 1709, 33), // "on_txtHeightMapGridY_valueCha..."
QT_MOC_LITERAL(81, 1743, 39), // "on_txtHeightMapGridZBottom_va..."
QT_MOC_LITERAL(82, 1783, 36), // "on_txtHeightMapGridZTop_value..."
QT_MOC_LITERAL(83, 1820, 27), // "on_cmdHeightMapMode_toggled"
QT_MOC_LITERAL(84, 1848, 40), // "on_chkHeightMapInterpolationS..."
QT_MOC_LITERAL(85, 1889, 27), // "on_cmdHeightMapLoad_clicked"
QT_MOC_LITERAL(86, 1917, 46), // "on_txtHeightMapInterpolationS..."
QT_MOC_LITERAL(87, 1964, 46), // "on_txtHeightMapInterpolationS..."
QT_MOC_LITERAL(88, 2011, 26), // "on_chkHeightMapUse_clicked"
QT_MOC_LITERAL(89, 2038, 29), // "on_cmdHeightMapCreate_clicked"
QT_MOC_LITERAL(90, 2068, 33), // "on_cmdHeightMapBorderAuto_cli..."
QT_MOC_LITERAL(91, 2102, 23), // "on_cmdFileAbort_clicked"
QT_MOC_LITERAL(92, 2126, 21), // "on_cmdSpindle_clicked"
QT_MOC_LITERAL(93, 2148, 19), // "on_cmdYPlus_pressed"
QT_MOC_LITERAL(94, 2168, 20), // "on_cmdYPlus_released"
QT_MOC_LITERAL(95, 2189, 20), // "on_cmdYMinus_pressed"
QT_MOC_LITERAL(96, 2210, 21), // "on_cmdYMinus_released"
QT_MOC_LITERAL(97, 2232, 19), // "on_cmdXPlus_pressed"
QT_MOC_LITERAL(98, 2252, 20), // "on_cmdXPlus_released"
QT_MOC_LITERAL(99, 2273, 20), // "on_cmdXMinus_pressed"
QT_MOC_LITERAL(100, 2294, 21), // "on_cmdXMinus_released"
QT_MOC_LITERAL(101, 2316, 19), // "on_cmdZPlus_pressed"
QT_MOC_LITERAL(102, 2336, 20), // "on_cmdZPlus_released"
QT_MOC_LITERAL(103, 2357, 20), // "on_cmdZMinus_pressed"
QT_MOC_LITERAL(104, 2378, 21), // "on_cmdZMinus_released"
QT_MOC_LITERAL(105, 2400, 18) // "on_cmdStop_clicked"

    },
    "frmMain\0updateHeightMapInterpolationDrawer\0"
    "\0reset\0placeVisualizerButtons\0"
    "onSerialPortReadyRead\0onSerialPortError\0"
    "QSerialPort::SerialPortError\0"
    "onTimerConnection\0onTimerStateQuery\0"
    "onVisualizatorRotationChanged\0"
    "onScroolBarAction\0action\0onJogTimer\0"
    "onTableInsertLine\0onTableDeleteLines\0"
    "onActRecentFileTriggered\0"
    "onCboCommandReturnPressed\0"
    "onTableCurrentChanged\0QModelIndex\0"
    "idx1\0idx2\0onConsoleResized\0size\0"
    "onPanelsSizeChanged\0onCmdUserClicked\0"
    "checked\0onOverridingToggled\0"
    "onActSendFromLineTriggered\0"
    "on_actFileExit_triggered\0"
    "on_cmdFileOpen_clicked\0on_cmdFit_clicked\0"
    "on_cmdFileSend_clicked\0onTableCellChanged\0"
    "i1\0i2\0on_actServiceSettings_triggered\0"
    "on_actFileOpen_triggered\0"
    "on_cmdCommandSend_clicked\0on_cmdHome_clicked\0"
    "on_cmdTouch_clicked\0on_cmdZeroXY_clicked\0"
    "on_cmdZeroZ_clicked\0on_cmdRestoreOrigin_clicked\0"
    "on_cmdReset_clicked\0on_cmdUnlock_clicked\0"
    "on_cmdSafePosition_clicked\0"
    "on_cmdSpindle_toggled\0on_chkTestMode_clicked\0"
    "on_cmdFilePause_clicked\0on_cmdFileReset_clicked\0"
    "on_actFileNew_triggered\0"
    "on_cmdClearConsole_clicked\0"
    "on_actFileSaveAs_triggered\0"
    "on_actFileSave_triggered\0"
    "on_actFileSaveTransformedAs_triggered\0"
    "on_cmdTop_clicked\0on_cmdFront_clicked\0"
    "on_cmdLeft_clicked\0on_cmdIsometric_clicked\0"
    "on_actAbout_triggered\0on_grpOverriding_toggled\0"
    "on_grpSpindle_toggled\0on_grpJog_toggled\0"
    "on_grpUserCommands_toggled\0"
    "on_chkKeyboardControl_toggled\0"
    "on_tblProgram_customContextMenuRequested\0"
    "pos\0on_splitter_splitterMoved\0index\0"
    "on_actRecentClear_triggered\0"
    "on_grpHeightMap_toggled\0arg1\0"
    "on_chkHeightMapBorderShow_toggled\0"
    "on_txtHeightMapBorderX_valueChanged\0"
    "on_txtHeightMapBorderWidth_valueChanged\0"
    "on_txtHeightMapBorderY_valueChanged\0"
    "on_txtHeightMapBorderHeight_valueChanged\0"
    "on_chkHeightMapGridShow_toggled\0"
    "on_txtHeightMapGridX_valueChanged\0"
    "on_txtHeightMapGridY_valueChanged\0"
    "on_txtHeightMapGridZBottom_valueChanged\0"
    "on_txtHeightMapGridZTop_valueChanged\0"
    "on_cmdHeightMapMode_toggled\0"
    "on_chkHeightMapInterpolationShow_toggled\0"
    "on_cmdHeightMapLoad_clicked\0"
    "on_txtHeightMapInterpolationStepX_valueChanged\0"
    "on_txtHeightMapInterpolationStepY_valueChanged\0"
    "on_chkHeightMapUse_clicked\0"
    "on_cmdHeightMapCreate_clicked\0"
    "on_cmdHeightMapBorderAuto_clicked\0"
    "on_cmdFileAbort_clicked\0on_cmdSpindle_clicked\0"
    "on_cmdYPlus_pressed\0on_cmdYPlus_released\0"
    "on_cmdYMinus_pressed\0on_cmdYMinus_released\0"
    "on_cmdXPlus_pressed\0on_cmdXPlus_released\0"
    "on_cmdXMinus_pressed\0on_cmdXMinus_released\0"
    "on_cmdZPlus_pressed\0on_cmdZPlus_released\0"
    "on_cmdZMinus_pressed\0on_cmdZMinus_released\0"
    "on_cmdStop_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frmMain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      92,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  474,    2, 0x08 /* Private */,
       1,    0,  477,    2, 0x28 /* Private | MethodCloned */,
       4,    0,  478,    2, 0x08 /* Private */,
       5,    0,  479,    2, 0x08 /* Private */,
       6,    1,  480,    2, 0x08 /* Private */,
       8,    0,  483,    2, 0x08 /* Private */,
       9,    0,  484,    2, 0x08 /* Private */,
      10,    0,  485,    2, 0x08 /* Private */,
      11,    1,  486,    2, 0x08 /* Private */,
      13,    0,  489,    2, 0x08 /* Private */,
      14,    0,  490,    2, 0x08 /* Private */,
      15,    0,  491,    2, 0x08 /* Private */,
      16,    0,  492,    2, 0x08 /* Private */,
      17,    0,  493,    2, 0x08 /* Private */,
      18,    2,  494,    2, 0x08 /* Private */,
      22,    1,  499,    2, 0x08 /* Private */,
      24,    1,  502,    2, 0x08 /* Private */,
      25,    1,  505,    2, 0x08 /* Private */,
      27,    1,  508,    2, 0x08 /* Private */,
      28,    0,  511,    2, 0x08 /* Private */,
      29,    0,  512,    2, 0x08 /* Private */,
      30,    0,  513,    2, 0x08 /* Private */,
      31,    0,  514,    2, 0x08 /* Private */,
      32,    0,  515,    2, 0x08 /* Private */,
      33,    2,  516,    2, 0x08 /* Private */,
      36,    0,  521,    2, 0x08 /* Private */,
      37,    0,  522,    2, 0x08 /* Private */,
      38,    0,  523,    2, 0x08 /* Private */,
      39,    0,  524,    2, 0x08 /* Private */,
      40,    0,  525,    2, 0x08 /* Private */,
      41,    0,  526,    2, 0x08 /* Private */,
      42,    0,  527,    2, 0x08 /* Private */,
      43,    0,  528,    2, 0x08 /* Private */,
      44,    0,  529,    2, 0x08 /* Private */,
      45,    0,  530,    2, 0x08 /* Private */,
      46,    0,  531,    2, 0x08 /* Private */,
      47,    1,  532,    2, 0x08 /* Private */,
      48,    1,  535,    2, 0x08 /* Private */,
      49,    1,  538,    2, 0x08 /* Private */,
      50,    0,  541,    2, 0x08 /* Private */,
      51,    0,  542,    2, 0x08 /* Private */,
      52,    0,  543,    2, 0x08 /* Private */,
      53,    0,  544,    2, 0x08 /* Private */,
      54,    0,  545,    2, 0x08 /* Private */,
      55,    0,  546,    2, 0x08 /* Private */,
      56,    0,  547,    2, 0x08 /* Private */,
      57,    0,  548,    2, 0x08 /* Private */,
      58,    0,  549,    2, 0x08 /* Private */,
      59,    0,  550,    2, 0x08 /* Private */,
      60,    0,  551,    2, 0x08 /* Private */,
      61,    1,  552,    2, 0x08 /* Private */,
      62,    1,  555,    2, 0x08 /* Private */,
      63,    1,  558,    2, 0x08 /* Private */,
      64,    1,  561,    2, 0x08 /* Private */,
      65,    1,  564,    2, 0x08 /* Private */,
      66,    1,  567,    2, 0x08 /* Private */,
      68,    2,  570,    2, 0x08 /* Private */,
      70,    0,  575,    2, 0x08 /* Private */,
      71,    1,  576,    2, 0x08 /* Private */,
      73,    1,  579,    2, 0x08 /* Private */,
      74,    1,  582,    2, 0x08 /* Private */,
      75,    1,  585,    2, 0x08 /* Private */,
      76,    1,  588,    2, 0x08 /* Private */,
      77,    1,  591,    2, 0x08 /* Private */,
      78,    1,  594,    2, 0x08 /* Private */,
      79,    1,  597,    2, 0x08 /* Private */,
      80,    1,  600,    2, 0x08 /* Private */,
      81,    1,  603,    2, 0x08 /* Private */,
      82,    1,  606,    2, 0x08 /* Private */,
      83,    1,  609,    2, 0x08 /* Private */,
      84,    1,  612,    2, 0x08 /* Private */,
      85,    0,  615,    2, 0x08 /* Private */,
      86,    1,  616,    2, 0x08 /* Private */,
      87,    1,  619,    2, 0x08 /* Private */,
      88,    1,  622,    2, 0x08 /* Private */,
      89,    0,  625,    2, 0x08 /* Private */,
      90,    0,  626,    2, 0x08 /* Private */,
      91,    0,  627,    2, 0x08 /* Private */,
      92,    1,  628,    2, 0x08 /* Private */,
      93,    0,  631,    2, 0x08 /* Private */,
      94,    0,  632,    2, 0x08 /* Private */,
      95,    0,  633,    2, 0x08 /* Private */,
      96,    0,  634,    2, 0x08 /* Private */,
      97,    0,  635,    2, 0x08 /* Private */,
      98,    0,  636,    2, 0x08 /* Private */,
      99,    0,  637,    2, 0x08 /* Private */,
     100,    0,  638,    2, 0x08 /* Private */,
     101,    0,  639,    2, 0x08 /* Private */,
     102,    0,  640,    2, 0x08 /* Private */,
     103,    0,  641,    2, 0x08 /* Private */,
     104,    0,  642,    2, 0x08 /* Private */,
     105,    0,  643,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 19,   20,   21,
    QMetaType::Void, QMetaType::QSize,   23,
    QMetaType::Void, QMetaType::QSize,   23,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 19,   34,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::QPoint,   67,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   67,   69,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Double,   72,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void frmMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<frmMain *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateHeightMapInterpolationDrawer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateHeightMapInterpolationDrawer(); break;
        case 2: _t->placeVisualizerButtons(); break;
        case 3: _t->onSerialPortReadyRead(); break;
        case 4: _t->onSerialPortError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 5: _t->onTimerConnection(); break;
        case 6: _t->onTimerStateQuery(); break;
        case 7: _t->onVisualizatorRotationChanged(); break;
        case 8: _t->onScroolBarAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onJogTimer(); break;
        case 10: _t->onTableInsertLine(); break;
        case 11: _t->onTableDeleteLines(); break;
        case 12: _t->onActRecentFileTriggered(); break;
        case 13: _t->onCboCommandReturnPressed(); break;
        case 14: _t->onTableCurrentChanged((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 15: _t->onConsoleResized((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 16: _t->onPanelsSizeChanged((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 17: _t->onCmdUserClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->onOverridingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->onActSendFromLineTriggered(); break;
        case 20: _t->on_actFileExit_triggered(); break;
        case 21: _t->on_cmdFileOpen_clicked(); break;
        case 22: _t->on_cmdFit_clicked(); break;
        case 23: _t->on_cmdFileSend_clicked(); break;
        case 24: _t->onTableCellChanged((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 25: _t->on_actServiceSettings_triggered(); break;
        case 26: _t->on_actFileOpen_triggered(); break;
        case 27: _t->on_cmdCommandSend_clicked(); break;
        case 28: _t->on_cmdHome_clicked(); break;
        case 29: _t->on_cmdTouch_clicked(); break;
        case 30: _t->on_cmdZeroXY_clicked(); break;
        case 31: _t->on_cmdZeroZ_clicked(); break;
        case 32: _t->on_cmdRestoreOrigin_clicked(); break;
        case 33: _t->on_cmdReset_clicked(); break;
        case 34: _t->on_cmdUnlock_clicked(); break;
        case 35: _t->on_cmdSafePosition_clicked(); break;
        case 36: _t->on_cmdSpindle_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->on_chkTestMode_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->on_cmdFilePause_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->on_cmdFileReset_clicked(); break;
        case 40: _t->on_actFileNew_triggered(); break;
        case 41: _t->on_cmdClearConsole_clicked(); break;
        case 42: _t->on_actFileSaveAs_triggered(); break;
        case 43: _t->on_actFileSave_triggered(); break;
        case 44: _t->on_actFileSaveTransformedAs_triggered(); break;
        case 45: _t->on_cmdTop_clicked(); break;
        case 46: _t->on_cmdFront_clicked(); break;
        case 47: _t->on_cmdLeft_clicked(); break;
        case 48: _t->on_cmdIsometric_clicked(); break;
        case 49: _t->on_actAbout_triggered(); break;
        case 50: _t->on_grpOverriding_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->on_grpSpindle_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->on_grpJog_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->on_grpUserCommands_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->on_chkKeyboardControl_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->on_tblProgram_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 56: _t->on_splitter_splitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 57: _t->on_actRecentClear_triggered(); break;
        case 58: _t->on_grpHeightMap_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->on_chkHeightMapBorderShow_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: _t->on_txtHeightMapBorderX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 61: _t->on_txtHeightMapBorderWidth_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 62: _t->on_txtHeightMapBorderY_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 63: _t->on_txtHeightMapBorderHeight_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 64: _t->on_chkHeightMapGridShow_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: _t->on_txtHeightMapGridX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 66: _t->on_txtHeightMapGridY_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 67: _t->on_txtHeightMapGridZBottom_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 68: _t->on_txtHeightMapGridZTop_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 69: _t->on_cmdHeightMapMode_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 70: _t->on_chkHeightMapInterpolationShow_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: _t->on_cmdHeightMapLoad_clicked(); break;
        case 72: _t->on_txtHeightMapInterpolationStepX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 73: _t->on_txtHeightMapInterpolationStepY_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 74: _t->on_chkHeightMapUse_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 75: _t->on_cmdHeightMapCreate_clicked(); break;
        case 76: _t->on_cmdHeightMapBorderAuto_clicked(); break;
        case 77: _t->on_cmdFileAbort_clicked(); break;
        case 78: _t->on_cmdSpindle_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 79: _t->on_cmdYPlus_pressed(); break;
        case 80: _t->on_cmdYPlus_released(); break;
        case 81: _t->on_cmdYMinus_pressed(); break;
        case 82: _t->on_cmdYMinus_released(); break;
        case 83: _t->on_cmdXPlus_pressed(); break;
        case 84: _t->on_cmdXPlus_released(); break;
        case 85: _t->on_cmdXMinus_pressed(); break;
        case 86: _t->on_cmdXMinus_released(); break;
        case 87: _t->on_cmdZPlus_pressed(); break;
        case 88: _t->on_cmdZPlus_released(); break;
        case 89: _t->on_cmdZMinus_pressed(); break;
        case 90: _t->on_cmdZMinus_released(); break;
        case 91: _t->on_cmdStop_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject frmMain::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_frmMain.data,
    qt_meta_data_frmMain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *frmMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frmMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_frmMain.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int frmMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 92)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 92;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 92)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 92;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
