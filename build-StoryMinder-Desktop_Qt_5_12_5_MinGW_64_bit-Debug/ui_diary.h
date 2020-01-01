/********************************************************************************
** Form generated from reading UI file 'diary.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIARY_H
#define UI_DIARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Diary
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_AS;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionFont;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionUnderline;
    QAction *actionInfo;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit_diary;
    QScrollBar *verticalScrollBar;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Diary)
    {
        if (Diary->objectName().isEmpty())
            Diary->setObjectName(QString::fromUtf8("Diary"));
        Diary->resize(1124, 646);
        actionNew = new QAction(Diary);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/new.png.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(Diary);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/open.png.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(Diary);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/images/save.png.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_AS = new QAction(Diary);
        actionSave_AS->setObjectName(QString::fromUtf8("actionSave_AS"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/save as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_AS->setIcon(icon3);
        actionPrint = new QAction(Diary);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/images/print.png.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon4);
        actionExit = new QAction(Diary);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/images/exit.png.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon5);
        actionCut = new QAction(Diary);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/images/cut.png.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon6);
        actionCopy = new QAction(Diary);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/images/copy.png.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon7);
        actionPaste = new QAction(Diary);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/images/index.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon8);
        actionUndo = new QAction(Diary);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/images/undo.png.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon9);
        actionRedo = new QAction(Diary);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/images/redo.png.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon10);
        actionFont = new QAction(Diary);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/images/font.png.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon11);
        actionBold = new QAction(Diary);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        actionBold->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/images/bold.png.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon12);
        actionItalic = new QAction(Diary);
        actionItalic->setObjectName(QString::fromUtf8("actionItalic"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/images/italic.png.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon13);
        actionUnderline = new QAction(Diary);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/index.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon14);
        actionInfo = new QAction(Diary);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/images/info.png.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInfo->setIcon(icon15);
        centralwidget = new QWidget(Diary);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 1101, 571));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit_diary = new QTextEdit(layoutWidget);
        textEdit_diary->setObjectName(QString::fromUtf8("textEdit_diary"));

        horizontalLayout->addWidget(textEdit_diary);

        verticalScrollBar = new QScrollBar(layoutWidget);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalScrollBar);

        Diary->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Diary);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1124, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        Diary->setMenuBar(menubar);
        statusbar = new QStatusBar(Diary);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Diary->setStatusBar(statusbar);
        toolBar = new QToolBar(Diary);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Diary->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_AS);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionFont);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionFont);
        toolBar->addAction(actionBold);
        toolBar->addAction(actionItalic);
        toolBar->addAction(actionUnderline);
        toolBar->addSeparator();
        toolBar->addAction(actionInfo);
        toolBar->addSeparator();
        toolBar->addAction(actionExit);

        retranslateUi(Diary);
        QObject::connect(verticalScrollBar, SIGNAL(valueChanged(int)), textEdit_diary, SLOT(clear()));

        QMetaObject::connectSlotsByName(Diary);
    } // setupUi

    void retranslateUi(QMainWindow *Diary)
    {
        Diary->setWindowTitle(QApplication::translate("Diary", "MainWindow", nullptr));
        actionNew->setText(QApplication::translate("Diary", "New", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("Diary", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("Diary", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("Diary", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("Diary", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("Diary", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_AS->setText(QApplication::translate("Diary", "Save As", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave_AS->setShortcut(QApplication::translate("Diary", "Alt+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionPrint->setText(QApplication::translate("Diary", "Print", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPrint->setShortcut(QApplication::translate("Diary", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("Diary", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("Diary", "Esc", nullptr));
#endif // QT_NO_SHORTCUT
        actionCut->setText(QApplication::translate("Diary", "Cut", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("Diary", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionCopy->setText(QApplication::translate("Diary", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("Diary", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("Diary", "Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("Diary", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionUndo->setText(QApplication::translate("Diary", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("Diary", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("Diary", "Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("Diary", "Ctrl+Y", nullptr));
#endif // QT_NO_SHORTCUT
        actionFont->setText(QApplication::translate("Diary", "Font", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFont->setShortcut(QApplication::translate("Diary", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionBold->setText(QApplication::translate("Diary", "Bold", nullptr));
#ifndef QT_NO_TOOLTIP
        actionBold->setToolTip(QApplication::translate("Diary", "bold", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionBold->setShortcut(QApplication::translate("Diary", "Ctrl+B", nullptr));
#endif // QT_NO_SHORTCUT
        actionItalic->setText(QApplication::translate("Diary", "Italic", nullptr));
#ifndef QT_NO_TOOLTIP
        actionItalic->setToolTip(QApplication::translate("Diary", "Italic", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionItalic->setShortcut(QApplication::translate("Diary", "Ctrl+I", nullptr));
#endif // QT_NO_SHORTCUT
        actionUnderline->setText(QApplication::translate("Diary", "Underline", nullptr));
#ifndef QT_NO_TOOLTIP
        actionUnderline->setToolTip(QApplication::translate("Diary", "Underline", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionUnderline->setShortcut(QApplication::translate("Diary", "Ctrl+U", nullptr));
#endif // QT_NO_SHORTCUT
        actionInfo->setText(QApplication::translate("Diary", "Info", nullptr));
#ifndef QT_NO_TOOLTIP
        actionInfo->setToolTip(QApplication::translate("Diary", "Info", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionInfo->setShortcut(QApplication::translate("Diary", "Alt+I", nullptr));
#endif // QT_NO_SHORTCUT
        menuFile->setTitle(QApplication::translate("Diary", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("Diary", "Edit", nullptr));
        toolBar->setWindowTitle(QApplication::translate("Diary", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Diary: public Ui_Diary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIARY_H
