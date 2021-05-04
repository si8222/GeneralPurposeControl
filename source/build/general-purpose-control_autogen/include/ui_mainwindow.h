/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSerial_Console;
    QAction *actionopen_settings;
    QAction *actionselect_output_file;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *devicesGroupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *deviceConfigHorizontalLayout;
    QVBoxLayout *addButtonLayout_2;
    QPushButton *addDeviceButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QGroupBox *scanValueGroupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *scanValuesHorizontalLayout;
    QVBoxLayout *addButtonLayout;
    QPushButton *addAdjustValueButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QFrame *line_2;
    QGroupBox *timeSelectionGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *intervalLabel;
    QSpinBox *intervalspinbox;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QSpinBox *cyclesspinbox;
    QPushButton *startMeasurementButton;
    QLabel *fileStatusLabel;
    QCheckBox *autoFileCheckbox;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *noLimitCheck;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QMenu *menuSettings;
    QMenu *menuTools;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1011, 939);
        actionSerial_Console = new QAction(MainWindow);
        actionSerial_Console->setObjectName(QString::fromUtf8("actionSerial_Console"));
        actionopen_settings = new QAction(MainWindow);
        actionopen_settings->setObjectName(QString::fromUtf8("actionopen_settings"));
        actionselect_output_file = new QAction(MainWindow);
        actionselect_output_file->setObjectName(QString::fromUtf8("actionselect_output_file"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(0, 600));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        devicesGroupBox = new QGroupBox(centralwidget);
        devicesGroupBox->setObjectName(QString::fromUtf8("devicesGroupBox"));
        devicesGroupBox->setBaseSize(QSize(0, 400));
        gridLayout_2 = new QGridLayout(devicesGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        deviceConfigHorizontalLayout = new QHBoxLayout();
        deviceConfigHorizontalLayout->setObjectName(QString::fromUtf8("deviceConfigHorizontalLayout"));
        deviceConfigHorizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        addButtonLayout_2 = new QVBoxLayout();
        addButtonLayout_2->setObjectName(QString::fromUtf8("addButtonLayout_2"));
        addDeviceButton = new QPushButton(devicesGroupBox);
        addDeviceButton->setObjectName(QString::fromUtf8("addDeviceButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addDeviceButton->sizePolicy().hasHeightForWidth());
        addDeviceButton->setSizePolicy(sizePolicy1);
        addDeviceButton->setMinimumSize(QSize(25, 25));
        addDeviceButton->setMaximumSize(QSize(25, 25));
        addDeviceButton->setBaseSize(QSize(25, 25));

        addButtonLayout_2->addWidget(addDeviceButton);

        verticalSpacer_2 = new QSpacerItem(20, 400, QSizePolicy::Minimum, QSizePolicy::Expanding);

        addButtonLayout_2->addItem(verticalSpacer_2);


        deviceConfigHorizontalLayout->addLayout(addButtonLayout_2);

        horizontalSpacer_2 = new QSpacerItem(669, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        deviceConfigHorizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(deviceConfigHorizontalLayout, 1, 0, 1, 1);


        verticalLayout->addWidget(devicesGroupBox);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        scanValueGroupBox = new QGroupBox(centralwidget);
        scanValueGroupBox->setObjectName(QString::fromUtf8("scanValueGroupBox"));
        scanValueGroupBox->setBaseSize(QSize(0, 400));
        gridLayout = new QGridLayout(scanValueGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scanValuesHorizontalLayout = new QHBoxLayout();
        scanValuesHorizontalLayout->setObjectName(QString::fromUtf8("scanValuesHorizontalLayout"));
        scanValuesHorizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        addButtonLayout = new QVBoxLayout();
        addButtonLayout->setObjectName(QString::fromUtf8("addButtonLayout"));
        addAdjustValueButton = new QPushButton(scanValueGroupBox);
        addAdjustValueButton->setObjectName(QString::fromUtf8("addAdjustValueButton"));
        sizePolicy1.setHeightForWidth(addAdjustValueButton->sizePolicy().hasHeightForWidth());
        addAdjustValueButton->setSizePolicy(sizePolicy1);
        addAdjustValueButton->setMinimumSize(QSize(25, 25));
        addAdjustValueButton->setMaximumSize(QSize(25, 25));
        addAdjustValueButton->setBaseSize(QSize(25, 25));

        addButtonLayout->addWidget(addAdjustValueButton);

        verticalSpacer = new QSpacerItem(20, 400, QSizePolicy::Minimum, QSizePolicy::Expanding);

        addButtonLayout->addItem(verticalSpacer);


        scanValuesHorizontalLayout->addLayout(addButtonLayout);

        horizontalSpacer = new QSpacerItem(669, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        scanValuesHorizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(scanValuesHorizontalLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(scanValueGroupBox);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        timeSelectionGroupBox = new QGroupBox(centralwidget);
        timeSelectionGroupBox->setObjectName(QString::fromUtf8("timeSelectionGroupBox"));
        horizontalLayout = new QHBoxLayout(timeSelectionGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        intervalLabel = new QLabel(timeSelectionGroupBox);
        intervalLabel->setObjectName(QString::fromUtf8("intervalLabel"));

        horizontalLayout->addWidget(intervalLabel);

        intervalspinbox = new QSpinBox(timeSelectionGroupBox);
        intervalspinbox->setObjectName(QString::fromUtf8("intervalspinbox"));
        intervalspinbox->setMinimum(1);
        intervalspinbox->setMaximum(10000000);
        intervalspinbox->setSingleStep(500);
        intervalspinbox->setValue(1000);

        horizontalLayout->addWidget(intervalspinbox);

        label = new QLabel(timeSelectionGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_2 = new QLabel(timeSelectionGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        cyclesspinbox = new QSpinBox(timeSelectionGroupBox);
        cyclesspinbox->setObjectName(QString::fromUtf8("cyclesspinbox"));
        cyclesspinbox->setMinimum(1);
        cyclesspinbox->setMaximum(99999);

        horizontalLayout->addWidget(cyclesspinbox);

        startMeasurementButton = new QPushButton(timeSelectionGroupBox);
        startMeasurementButton->setObjectName(QString::fromUtf8("startMeasurementButton"));

        horizontalLayout->addWidget(startMeasurementButton);

        fileStatusLabel = new QLabel(timeSelectionGroupBox);
        fileStatusLabel->setObjectName(QString::fromUtf8("fileStatusLabel"));

        horizontalLayout->addWidget(fileStatusLabel);

        autoFileCheckbox = new QCheckBox(timeSelectionGroupBox);
        autoFileCheckbox->setObjectName(QString::fromUtf8("autoFileCheckbox"));
        autoFileCheckbox->setEnabled(false);
        autoFileCheckbox->setCheckable(false);
        autoFileCheckbox->setChecked(false);

        horizontalLayout->addWidget(autoFileCheckbox);

        horizontalSpacer_3 = new QSpacerItem(408, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        noLimitCheck = new QCheckBox(timeSelectionGroupBox);
        noLimitCheck->setObjectName(QString::fromUtf8("noLimitCheck"));

        horizontalLayout->addWidget(noLimitCheck);


        verticalLayout->addWidget(timeSelectionGroupBox);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(42);

        verticalLayout->addWidget(progressBar);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1011, 22));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuTools->menuAction());
        menuSettings->addAction(actionopen_settings);
        menuSettings->addAction(actionselect_output_file);
        menuTools->addAction(actionSerial_Console);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSerial_Console->setText(QCoreApplication::translate("MainWindow", "&Serial Console", nullptr));
        actionopen_settings->setText(QCoreApplication::translate("MainWindow", "&open settings", nullptr));
        actionselect_output_file->setText(QCoreApplication::translate("MainWindow", "&select output file", nullptr));
        devicesGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Devices Configurator", nullptr));
        addDeviceButton->setText(QString());
        scanValueGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Scan Value Selection", nullptr));
        addAdjustValueButton->setText(QString());
        timeSelectionGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Measurement Time Selection", nullptr));
        intervalLabel->setText(QCoreApplication::translate("MainWindow", "delay set - measure:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "[ms]", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "n cycles:", nullptr));
        startMeasurementButton->setText(QCoreApplication::translate("MainWindow", "start measurement", nullptr));
        fileStatusLabel->setText(QCoreApplication::translate("MainWindow", "no file", nullptr));
        autoFileCheckbox->setText(QCoreApplication::translate("MainWindow", "auto", nullptr));
        noLimitCheck->setText(QCoreApplication::translate("MainWindow", "no limit", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Setti&ngs", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Too&ls", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
