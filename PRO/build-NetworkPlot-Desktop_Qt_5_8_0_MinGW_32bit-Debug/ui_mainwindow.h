/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionexit;
    QAction *actionclear_all;
    QAction *actionDA_Back;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_host_ip;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_server_ip;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_port_num;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_set;
    QPushButton *pushButton_disconnect;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_close_remote;
    QPushButton *pushButton_close_test;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *lineEdit_freq;
    QPushButton *pushButton_freq_set;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *lineEdit_fs;
    QPushButton *pushButton_fs_set;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *lineEdit_gain_1;
    QLineEdit *lineEdit_gain_2;
    QPushButton *pushButton_gain_set;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_sample;
    QPushButton *pushButton_close_sample;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_clear;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_da_start;
    QPushButton *pushButton_da_clear_buffer;
    QPushButton *pushButton_da_stop;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *lineEdit_da_times;
    QPushButton *pushButton_da_reback;
    QTextBrowser *textBrowser_da;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *checkBox_ch1_time;
    QCheckBox *checkBox_ch2_time;
    QCheckBox *checkBox_ch3_time;
    QCheckBox *checkBox_ch4_time;
    QSpacerItem *horizontalSpacer;
    QwtPlot *qwt_ch;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *checkBox_ch1_fft;
    QCheckBox *checkBox_ch2_fft;
    QCheckBox *checkBox_ch3_fft;
    QCheckBox *checkBox_ch4_fft;
    QSpacerItem *horizontalSpacer_2;
    QwtPlot *qwt_fft;
    QHBoxLayout *horizontalLayout_13;
    QSpinBox *spinBox;
    QSlider *horizontalSlider_do;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1249, 705);
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QStringLiteral("actionexit"));
        actionclear_all = new QAction(MainWindow);
        actionclear_all->setObjectName(QStringLiteral("actionclear_all"));
        actionDA_Back = new QAction(MainWindow);
        actionDA_Back->setObjectName(QStringLiteral("actionDA_Back"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_12 = new QHBoxLayout(centralWidget);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(260, 190));
        groupBox_2->setMaximumSize(QSize(300, 190));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_host_ip = new QLineEdit(groupBox_2);
        lineEdit_host_ip->setObjectName(QStringLiteral("lineEdit_host_ip"));
        lineEdit_host_ip->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_host_ip);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_server_ip = new QLineEdit(groupBox_2);
        lineEdit_server_ip->setObjectName(QStringLiteral("lineEdit_server_ip"));
        lineEdit_server_ip->setReadOnly(false);

        horizontalLayout_2->addWidget(lineEdit_server_ip);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        lineEdit_port_num = new QLineEdit(groupBox_2);
        lineEdit_port_num->setObjectName(QStringLiteral("lineEdit_port_num"));

        horizontalLayout_3->addWidget(lineEdit_port_num);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_set = new QPushButton(groupBox_2);
        pushButton_set->setObjectName(QStringLiteral("pushButton_set"));

        horizontalLayout_4->addWidget(pushButton_set);

        pushButton_disconnect = new QPushButton(groupBox_2);
        pushButton_disconnect->setObjectName(QStringLiteral("pushButton_disconnect"));

        horizontalLayout_4->addWidget(pushButton_disconnect);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_close_remote = new QPushButton(groupBox_2);
        pushButton_close_remote->setObjectName(QStringLiteral("pushButton_close_remote"));

        horizontalLayout_5->addWidget(pushButton_close_remote);

        pushButton_close_test = new QPushButton(groupBox_2);
        pushButton_close_test->setObjectName(QStringLiteral("pushButton_close_test"));

        horizontalLayout_5->addWidget(pushButton_close_test);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_3->addWidget(groupBox_2);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(260, 0));
        tabWidget->setMaximumSize(QSize(300, 16777215));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setMinimumSize(QSize(260, 400));
        groupBox_3->setMaximumSize(QSize(260, 1200));
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetNoConstraint);
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(label_5);

        lineEdit_freq = new QLineEdit(groupBox_3);
        lineEdit_freq->setObjectName(QStringLiteral("lineEdit_freq"));
        sizePolicy2.setHeightForWidth(lineEdit_freq->sizePolicy().hasHeightForWidth());
        lineEdit_freq->setSizePolicy(sizePolicy2);
        lineEdit_freq->setReadOnly(false);

        horizontalLayout_7->addWidget(lineEdit_freq);

        pushButton_freq_set = new QPushButton(groupBox_3);
        pushButton_freq_set->setObjectName(QStringLiteral("pushButton_freq_set"));
        sizePolicy2.setHeightForWidth(pushButton_freq_set->sizePolicy().hasHeightForWidth());
        pushButton_freq_set->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(pushButton_freq_set);


        verticalLayout_7->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setSizeConstraint(QLayout::SetNoConstraint);
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);

        horizontalLayout_8->addWidget(label_6);

        lineEdit_fs = new QLineEdit(groupBox_3);
        lineEdit_fs->setObjectName(QStringLiteral("lineEdit_fs"));
        sizePolicy2.setHeightForWidth(lineEdit_fs->sizePolicy().hasHeightForWidth());
        lineEdit_fs->setSizePolicy(sizePolicy2);
        lineEdit_fs->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_fs);

        pushButton_fs_set = new QPushButton(groupBox_3);
        pushButton_fs_set->setObjectName(QStringLiteral("pushButton_fs_set"));
        sizePolicy2.setHeightForWidth(pushButton_fs_set->sizePolicy().hasHeightForWidth());
        pushButton_fs_set->setSizePolicy(sizePolicy2);

        horizontalLayout_8->addWidget(pushButton_fs_set);


        verticalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetNoConstraint);
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(label_4);

        lineEdit_gain_1 = new QLineEdit(groupBox_3);
        lineEdit_gain_1->setObjectName(QStringLiteral("lineEdit_gain_1"));
        sizePolicy2.setHeightForWidth(lineEdit_gain_1->sizePolicy().hasHeightForWidth());
        lineEdit_gain_1->setSizePolicy(sizePolicy2);
        lineEdit_gain_1->setReadOnly(false);

        horizontalLayout_6->addWidget(lineEdit_gain_1);

        lineEdit_gain_2 = new QLineEdit(groupBox_3);
        lineEdit_gain_2->setObjectName(QStringLiteral("lineEdit_gain_2"));
        sizePolicy2.setHeightForWidth(lineEdit_gain_2->sizePolicy().hasHeightForWidth());
        lineEdit_gain_2->setSizePolicy(sizePolicy2);
        lineEdit_gain_2->setReadOnly(false);

        horizontalLayout_6->addWidget(lineEdit_gain_2);

        pushButton_gain_set = new QPushButton(groupBox_3);
        pushButton_gain_set->setObjectName(QStringLiteral("pushButton_gain_set"));
        sizePolicy2.setHeightForWidth(pushButton_gain_set->sizePolicy().hasHeightForWidth());
        pushButton_gain_set->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(pushButton_gain_set);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetNoConstraint);
        pushButton_sample = new QPushButton(groupBox_3);
        pushButton_sample->setObjectName(QStringLiteral("pushButton_sample"));
        sizePolicy2.setHeightForWidth(pushButton_sample->sizePolicy().hasHeightForWidth());
        pushButton_sample->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(pushButton_sample);

        pushButton_close_sample = new QPushButton(groupBox_3);
        pushButton_close_sample->setObjectName(QStringLiteral("pushButton_close_sample"));
        sizePolicy2.setHeightForWidth(pushButton_close_sample->sizePolicy().hasHeightForWidth());
        pushButton_close_sample->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(pushButton_close_sample);


        verticalLayout_7->addLayout(horizontalLayout_9);

        textBrowser = new QTextBrowser(groupBox_3);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(textBrowser);

        pushButton_clear = new QPushButton(groupBox_3);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        sizePolicy2.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy2);

        verticalLayout_7->addWidget(pushButton_clear);


        verticalLayout->addWidget(groupBox_3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_9 = new QVBoxLayout(tab_2);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        pushButton_da_start = new QPushButton(tab_2);
        pushButton_da_start->setObjectName(QStringLiteral("pushButton_da_start"));
        sizePolicy2.setHeightForWidth(pushButton_da_start->sizePolicy().hasHeightForWidth());
        pushButton_da_start->setSizePolicy(sizePolicy2);

        verticalLayout_8->addWidget(pushButton_da_start);

        pushButton_da_clear_buffer = new QPushButton(tab_2);
        pushButton_da_clear_buffer->setObjectName(QStringLiteral("pushButton_da_clear_buffer"));
        sizePolicy2.setHeightForWidth(pushButton_da_clear_buffer->sizePolicy().hasHeightForWidth());
        pushButton_da_clear_buffer->setSizePolicy(sizePolicy2);

        verticalLayout_8->addWidget(pushButton_da_clear_buffer);

        pushButton_da_stop = new QPushButton(tab_2);
        pushButton_da_stop->setObjectName(QStringLiteral("pushButton_da_stop"));
        sizePolicy2.setHeightForWidth(pushButton_da_stop->sizePolicy().hasHeightForWidth());
        pushButton_da_stop->setSizePolicy(sizePolicy2);

        verticalLayout_8->addWidget(pushButton_da_stop);


        verticalLayout_9->addLayout(verticalLayout_8);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        lineEdit_da_times = new QLineEdit(tab_2);
        lineEdit_da_times->setObjectName(QStringLiteral("lineEdit_da_times"));

        horizontalLayout_14->addWidget(lineEdit_da_times);

        pushButton_da_reback = new QPushButton(tab_2);
        pushButton_da_reback->setObjectName(QStringLiteral("pushButton_da_reback"));
        sizePolicy2.setHeightForWidth(pushButton_da_reback->sizePolicy().hasHeightForWidth());
        pushButton_da_reback->setSizePolicy(sizePolicy2);

        horizontalLayout_14->addWidget(pushButton_da_reback);


        verticalLayout_9->addLayout(horizontalLayout_14);

        textBrowser_da = new QTextBrowser(tab_2);
        textBrowser_da->setObjectName(QStringLiteral("textBrowser_da"));

        verticalLayout_9->addWidget(textBrowser_da);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabWidget);


        horizontalLayout_12->addLayout(verticalLayout_3);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        checkBox_ch1_time = new QCheckBox(groupBox);
        checkBox_ch1_time->setObjectName(QStringLiteral("checkBox_ch1_time"));

        horizontalLayout_10->addWidget(checkBox_ch1_time);

        checkBox_ch2_time = new QCheckBox(groupBox);
        checkBox_ch2_time->setObjectName(QStringLiteral("checkBox_ch2_time"));

        horizontalLayout_10->addWidget(checkBox_ch2_time);

        checkBox_ch3_time = new QCheckBox(groupBox);
        checkBox_ch3_time->setObjectName(QStringLiteral("checkBox_ch3_time"));

        horizontalLayout_10->addWidget(checkBox_ch3_time);

        checkBox_ch4_time = new QCheckBox(groupBox);
        checkBox_ch4_time->setObjectName(QStringLiteral("checkBox_ch4_time"));

        horizontalLayout_10->addWidget(checkBox_ch4_time);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_10);

        qwt_ch = new QwtPlot(groupBox);
        qwt_ch->setObjectName(QStringLiteral("qwt_ch"));
        sizePolicy3.setHeightForWidth(qwt_ch->sizePolicy().hasHeightForWidth());
        qwt_ch->setSizePolicy(sizePolicy3);

        verticalLayout_4->addWidget(qwt_ch);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        checkBox_ch1_fft = new QCheckBox(groupBox);
        checkBox_ch1_fft->setObjectName(QStringLiteral("checkBox_ch1_fft"));

        horizontalLayout_11->addWidget(checkBox_ch1_fft);

        checkBox_ch2_fft = new QCheckBox(groupBox);
        checkBox_ch2_fft->setObjectName(QStringLiteral("checkBox_ch2_fft"));

        horizontalLayout_11->addWidget(checkBox_ch2_fft);

        checkBox_ch3_fft = new QCheckBox(groupBox);
        checkBox_ch3_fft->setObjectName(QStringLiteral("checkBox_ch3_fft"));

        horizontalLayout_11->addWidget(checkBox_ch3_fft);

        checkBox_ch4_fft = new QCheckBox(groupBox);
        checkBox_ch4_fft->setObjectName(QStringLiteral("checkBox_ch4_fft"));

        horizontalLayout_11->addWidget(checkBox_ch4_fft);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_11);

        qwt_fft = new QwtPlot(groupBox);
        qwt_fft->setObjectName(QStringLiteral("qwt_fft"));
        sizePolicy3.setHeightForWidth(qwt_fft->sizePolicy().hasHeightForWidth());
        qwt_fft->setSizePolicy(sizePolicy3);

        verticalLayout_4->addWidget(qwt_fft);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout_13->addWidget(spinBox);

        horizontalSlider_do = new QSlider(groupBox);
        horizontalSlider_do->setObjectName(QStringLiteral("horizontalSlider_do"));
        horizontalSlider_do->setMaximum(100);
        horizontalSlider_do->setOrientation(Qt::Horizontal);

        horizontalLayout_13->addWidget(horizontalSlider_do);


        verticalLayout_5->addLayout(horizontalLayout_13);


        horizontalLayout_12->addWidget(groupBox);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(260, 0));
        groupBox_4->setMaximumSize(QSize(200, 16777215));
        verticalLayout_6 = new QVBoxLayout(groupBox_4);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        verticalLayout_6->addLayout(gridLayout);

        progressBar = new QProgressBar(groupBox_4);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout_6->addWidget(progressBar);


        horizontalLayout_12->addWidget(groupBox_4);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1249, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(pushButton_disconnect, pushButton_set);
        QWidget::setTabOrder(pushButton_set, lineEdit_host_ip);
        QWidget::setTabOrder(lineEdit_host_ip, lineEdit_port_num);
        QWidget::setTabOrder(lineEdit_port_num, lineEdit_server_ip);
        QWidget::setTabOrder(lineEdit_server_ip, textBrowser);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actionexit);
        menu->addAction(actionclear_all);
        menu_2->addAction(actionDA_Back);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionexit->setText(QApplication::translate("MainWindow", "exit", Q_NULLPTR));
        actionclear_all->setText(QApplication::translate("MainWindow", "clear all", Q_NULLPTR));
        actionDA_Back->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\350\260\203\345\210\266\345\233\236\346\224\276", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\347\275\221\347\273\234\351\205\215\347\275\256", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\234\254\345\234\260IP\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250IP\357\274\232", Q_NULLPTR));
        lineEdit_server_ip->setText(QApplication::translate("MainWindow", "192.168.1.176", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        lineEdit_port_num->setText(QApplication::translate("MainWindow", "8322", Q_NULLPTR));
        pushButton_set->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", Q_NULLPTR));
        pushButton_disconnect->setText(QApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", Q_NULLPTR));
        pushButton_close_remote->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257\346\216\245\346\224\266", Q_NULLPTR));
        pushButton_close_test->setText(QApplication::translate("MainWindow", "\344\275\277\350\203\275\345\255\230\345\202\250", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\346\216\247\345\210\266\344\277\241\346\201\257\351\205\215\347\275\256", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\344\275\216\351\200\232\351\242\221\347\216\207(KHz):", Q_NULLPTR));
        lineEdit_freq->setText(QApplication::translate("MainWindow", "50", Q_NULLPTR));
        pushButton_freq_set->setText(QApplication::translate("MainWindow", "\350\256\276\345\256\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\351\207\207\346\240\267\347\216\207kHz):", Q_NULLPTR));
        lineEdit_fs->setText(QApplication::translate("MainWindow", "210", Q_NULLPTR));
        pushButton_fs_set->setText(QApplication::translate("MainWindow", "\350\256\276\345\256\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\242\236\347\233\212(1,2): ", Q_NULLPTR));
        lineEdit_gain_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        lineEdit_gain_2->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        pushButton_gain_set->setText(QApplication::translate("MainWindow", "\350\256\276\345\256\232", Q_NULLPTR));
        pushButton_sample->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250\351\207\207\346\240\267", Q_NULLPTR));
        pushButton_close_sample->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\351\207\207\346\240\267", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "ADC", Q_NULLPTR));
        pushButton_da_start->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\233\236\346\224\276", Q_NULLPTR));
        pushButton_da_clear_buffer->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\225\260\346\215\256\347\274\223\345\255\230", Q_NULLPTR));
        pushButton_da_stop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\346\225\260\346\215\256\345\233\236\346\224\276", Q_NULLPTR));
        lineEdit_da_times->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        pushButton_da_reback->setText(QApplication::translate("MainWindow", "\351\207\215\346\224\276\344\270\212\346\254\241\347\232\204\346\225\260\346\215\256\345\214\205", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "DAC", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\347\273\230\345\210\266", Q_NULLPTR));
        checkBox_ch1_time->setText(QApplication::translate("MainWindow", "CH1", Q_NULLPTR));
        checkBox_ch2_time->setText(QApplication::translate("MainWindow", "CH2", Q_NULLPTR));
        checkBox_ch3_time->setText(QApplication::translate("MainWindow", "CH3", Q_NULLPTR));
        checkBox_ch4_time->setText(QApplication::translate("MainWindow", "CH4", Q_NULLPTR));
        checkBox_ch1_fft->setText(QApplication::translate("MainWindow", "CH1 FFT", Q_NULLPTR));
        checkBox_ch2_fft->setText(QApplication::translate("MainWindow", "CH2 FFT", Q_NULLPTR));
        checkBox_ch3_fft->setText(QApplication::translate("MainWindow", "CH3 FFT", Q_NULLPTR));
        checkBox_ch4_fft->setText(QApplication::translate("MainWindow", "CH4 FFT", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\210\227\350\241\250", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\267\245\345\205\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H