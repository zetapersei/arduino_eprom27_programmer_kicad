/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *chipType;
    QRadioButton *c16Button;
    QRadioButton *c64Button;
    QRadioButton *c128Button;
    QRadioButton *c256Button;
    QRadioButton *c512Button;
    QRadioButton *c32Button;
    QPushButton *openFileButton;
    QPushButton *saveFileButton;
    QPushButton *readChipButton;
    QPushButton *writeChipButton;
    QPushButton *verifyChipButton;
    QTextBrowser *textBrowser;
    QProgressBar *progressBar;
    QGroupBox *serialPort;
    QListWidget *portList;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QPushButton *updateButton;
    QPushButton *voltageChipButton;
    QTableWidget *tableWidget;
    QPushButton *showButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(791, 431);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        MainWindow->setAnimated(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        chipType = new QGroupBox(centralWidget);
        chipType->setObjectName("chipType");
        chipType->setGeometry(QRect(230, 10, 131, 161));
        chipType->setFlat(false);
        chipType->setCheckable(false);
        c16Button = new QRadioButton(chipType);
        c16Button->setObjectName("c16Button");
        c16Button->setEnabled(false);
        c16Button->setGeometry(QRect(10, 30, 81, 22));
        c16Button->setCheckable(true);
        c64Button = new QRadioButton(chipType);
        c64Button->setObjectName("c64Button");
        c64Button->setEnabled(false);
        c64Button->setGeometry(QRect(10, 70, 81, 22));
        c128Button = new QRadioButton(chipType);
        c128Button->setObjectName("c128Button");
        c128Button->setEnabled(false);
        c128Button->setGeometry(QRect(10, 90, 81, 22));
        c256Button = new QRadioButton(chipType);
        c256Button->setObjectName("c256Button");
        c256Button->setEnabled(false);
        c256Button->setGeometry(QRect(10, 110, 81, 22));
        c512Button = new QRadioButton(chipType);
        c512Button->setObjectName("c512Button");
        c512Button->setEnabled(false);
        c512Button->setGeometry(QRect(10, 130, 81, 22));
        c32Button = new QRadioButton(chipType);
        c32Button->setObjectName("c32Button");
        c32Button->setEnabled(false);
        c32Button->setGeometry(QRect(10, 50, 81, 22));
        openFileButton = new QPushButton(centralWidget);
        openFileButton->setObjectName("openFileButton");
        openFileButton->setEnabled(false);
        openFileButton->setGeometry(QRect(10, 180, 111, 27));
        saveFileButton = new QPushButton(centralWidget);
        saveFileButton->setObjectName("saveFileButton");
        saveFileButton->setEnabled(false);
        saveFileButton->setGeometry(QRect(130, 180, 111, 27));
        readChipButton = new QPushButton(centralWidget);
        readChipButton->setObjectName("readChipButton");
        readChipButton->setEnabled(false);
        readChipButton->setGeometry(QRect(100, 210, 81, 27));
        readChipButton->setCheckable(false);
        writeChipButton = new QPushButton(centralWidget);
        writeChipButton->setObjectName("writeChipButton");
        writeChipButton->setEnabled(false);
        writeChipButton->setGeometry(QRect(190, 210, 81, 27));
        verifyChipButton = new QPushButton(centralWidget);
        verifyChipButton->setObjectName("verifyChipButton");
        verifyChipButton->setEnabled(false);
        verifyChipButton->setGeometry(QRect(280, 210, 81, 27));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 270, 351, 151));
        QFont font;
        font.setFamilies({QString::fromUtf8("Monospace")});
        textBrowser->setFont(font);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName("progressBar");
        progressBar->setEnabled(true);
        progressBar->setGeometry(QRect(10, 240, 351, 23));
        progressBar->setValue(0);
        progressBar->setTextVisible(true);
        serialPort = new QGroupBox(centralWidget);
        serialPort->setObjectName("serialPort");
        serialPort->setGeometry(QRect(10, 10, 211, 161));
        portList = new QListWidget(serialPort);
        portList->setObjectName("portList");
        portList->setGeometry(QRect(10, 30, 81, 121));
        portList->setFrameShape(QFrame::NoFrame);
        portList->setFrameShadow(QFrame::Plain);
        connectButton = new QPushButton(serialPort);
        connectButton->setObjectName("connectButton");
        connectButton->setEnabled(false);
        connectButton->setGeometry(QRect(100, 30, 101, 27));
        disconnectButton = new QPushButton(serialPort);
        disconnectButton->setObjectName("disconnectButton");
        disconnectButton->setEnabled(false);
        disconnectButton->setGeometry(QRect(100, 60, 101, 27));
        updateButton = new QPushButton(serialPort);
        updateButton->setObjectName("updateButton");
        updateButton->setEnabled(false);
        updateButton->setGeometry(QRect(100, 90, 101, 27));
        voltageChipButton = new QPushButton(centralWidget);
        voltageChipButton->setObjectName("voltageChipButton");
        voltageChipButton->setEnabled(false);
        voltageChipButton->setGeometry(QRect(10, 210, 81, 27));
        voltageChipButton->setCheckable(true);
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(0, 6, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(0, 7, __qtablewidgetitem16);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(380, 10, 401, 411));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Monospace")});
        font1.setPointSize(11);
        font1.setBold(false);
        tableWidget->setFont(font1);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setAlternatingRowColors(false);
        tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidget->setWordWrap(false);
        tableWidget->setRowCount(1);
        tableWidget->setColumnCount(8);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(40);
        tableWidget->verticalHeader()->setVisible(false);
        showButton = new QPushButton(centralWidget);
        showButton->setObjectName("showButton");
        showButton->setEnabled(false);
        showButton->setGeometry(QRect(250, 180, 111, 27));
        showButton->setCheckable(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "EPROM Programmer", nullptr));
        chipType->setTitle(QCoreApplication::translate("MainWindow", "Chip type", nullptr));
        c16Button->setText(QCoreApplication::translate("MainWindow", "27C16", nullptr));
        c64Button->setText(QCoreApplication::translate("MainWindow", "27C64", nullptr));
        c128Button->setText(QCoreApplication::translate("MainWindow", "27C128", nullptr));
        c256Button->setText(QCoreApplication::translate("MainWindow", "27C256", nullptr));
        c512Button->setText(QCoreApplication::translate("MainWindow", "27C512", nullptr));
        c32Button->setText(QCoreApplication::translate("MainWindow", "27C32", nullptr));
        openFileButton->setText(QCoreApplication::translate("MainWindow", "Open file", nullptr));
        saveFileButton->setText(QCoreApplication::translate("MainWindow", "Save file", nullptr));
        readChipButton->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        writeChipButton->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
        verifyChipButton->setText(QCoreApplication::translate("MainWindow", "Verify", nullptr));
        serialPort->setTitle(QCoreApplication::translate("MainWindow", "Serial port", nullptr));
        connectButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        disconnectButton->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        updateButton->setText(QCoreApplication::translate("MainWindow", "Update list", nullptr));
        voltageChipButton->setText(QCoreApplication::translate("MainWindow", "Voltage", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "0xffff", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "01", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(0, 2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "02", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(0, 3);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "04", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 4);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "08", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(0, 5);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 6);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "aa", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 7);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "cc", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        showButton->setText(QCoreApplication::translate("MainWindow", "Show buffer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
