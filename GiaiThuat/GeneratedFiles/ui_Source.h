/********************************************************************************
** Form generated from reading UI file 'Source.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOURCE_H
#define UI_SOURCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SourceClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QFrame *line;
    QLabel *lbl2;
    QLabel *lbl1;
    QGraphicsView *homeView;
    QLabel *lbl3;
    QPushButton *btnHome_1;
    QPushButton *btnHome_2;
    QPushButton *btnHome_3;
    QWidget *menuPage;
    QLabel *labelMenuPage;
    QRadioButton *btnRadio1;
    QRadioButton *btnRadio2;
    QRadioButton *btnRadio3;
    QRadioButton *btnRadio4;
    QPushButton *btnOkMenuPage;
    QPushButton *btnCancelMenuPage;
    QRadioButton *btnRadio5;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QWidget *listPage;
    QPushButton *btnBackListPage;
    QPlainTextEdit *textListPage;
    QLabel *lblThongBaoListPage;
    QWidget *addPage;
    QLabel *lblAddPage_1;
    QLabel *lblAddPage_2;
    QLabel *lblAddPage_3;
    QLabel *lblAddPage_4;
    QLineEdit *inputAddPage_1;
    QTextEdit *inputAddPage_4;
    QLineEdit *inputAddPage_2;
    QLineEdit *inputAddPage_3;
    QPushButton *btnOkAddPage;
    QPushButton *btnResetAddPage;
    QPushButton *btnCancelAddPage;
    QLabel *lblThongBaoAddPage;
    QWidget *updatePage;
    QLabel *lblWordUpdatePage;
    QLabel *lblPronunUpdatePage;
    QLabel *lblTypeUpdatePage;
    QLabel *lblMeanUpdatePage;
    QPushButton *btnExitUpdatePage;
    QPushButton *btnBackUpdatePage;
    QPushButton *btnEditUpdatePage;
    QTextEdit *editMeanUpdatePage;
    QLineEdit *editWordUpdatePage;
    QLineEdit *editPronunUpdatePage;
    QLineEdit *editTypeUpdatePage;
    QLabel *lblWordUpdatePage_2;
    QLabel *lblPronunUpdatePage_2;
    QLabel *lblTypeUpdatePage_2;
    QLabel *lblMeanUpdatePage_2;
    QPushButton *btnDeletePage;
    QWidget *gameLv1Page;
    QGraphicsView *graphicsView_2;
    QLabel *lblLevelPage5;
    QTextBrowser *textDirectionPage5;
    QPushButton *btnStartLv1Page;
    QWidget *lv1Page;
    QFrame *frGameContent;
    QPushButton *btnSubmitLv1Page;
    QLabel *lblWordValueLv1Page;
    QTextEdit *txtMeanLv1Page;
    QPushButton *btnNextLv1Page;
    QPushButton *btnExitLv1Page;
    QFrame *frImage;
    QFrame *frStatus;
    QLCDNumber *lcdGradeNumber;
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *lcdStageNumber;
    QWidget *gameLv2Page;
    QTextBrowser *textDirectionPage6;
    QGraphicsView *graphicsView_3;
    QLabel *lblLevelPage6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SourceClass)
    {
        if (SourceClass->objectName().isEmpty())
            SourceClass->setObjectName(QString::fromUtf8("SourceClass"));
        SourceClass->resize(643, 513);
        centralWidget = new QWidget(SourceClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        homePage = new QWidget();
        homePage->setObjectName(QString::fromUtf8("homePage"));
        line = new QFrame(homePage);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(50, 190, 441, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        lbl2 = new QLabel(homePage);
        lbl2->setObjectName(QString::fromUtf8("lbl2"));
        lbl2->setGeometry(QRect(130, 70, 141, 41));
        QFont font;
        font.setPointSize(10);
        lbl2->setFont(font);
        lbl2->setMouseTracking(false);
        lbl2->setFocusPolicy(Qt::NoFocus);
        lbl2->setScaledContents(true);
        lbl2->setMargin(5);
        lbl1 = new QLabel(homePage);
        lbl1->setObjectName(QString::fromUtf8("lbl1"));
        lbl1->setGeometry(QRect(130, 20, 141, 41));
        lbl1->setFont(font);
        lbl1->setMouseTracking(false);
        lbl1->setFocusPolicy(Qt::NoFocus);
        lbl1->setScaledContents(true);
        lbl1->setMargin(5);
        homeView = new QGraphicsView(homePage);
        homeView->setObjectName(QString::fromUtf8("homeView"));
        homeView->setGeometry(QRect(95, 210, 371, 111));
        lbl3 = new QLabel(homePage);
        lbl3->setObjectName(QString::fromUtf8("lbl3"));
        lbl3->setGeometry(QRect(130, 130, 141, 41));
        lbl3->setFont(font);
        lbl3->setMouseTracking(false);
        lbl3->setFocusPolicy(Qt::NoFocus);
        lbl3->setScaledContents(true);
        lbl3->setMargin(5);
        btnHome_1 = new QPushButton(homePage);
        btnHome_1->setObjectName(QString::fromUtf8("btnHome_1"));
        btnHome_1->setGeometry(QRect(290, 27, 101, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btnHome_1->setFont(font1);
        btnHome_1->setCursor(QCursor(Qt::ArrowCursor));
        btnHome_2 = new QPushButton(homePage);
        btnHome_2->setObjectName(QString::fromUtf8("btnHome_2"));
        btnHome_2->setGeometry(QRect(290, 80, 101, 31));
        btnHome_2->setFont(font1);
        btnHome_3 = new QPushButton(homePage);
        btnHome_3->setObjectName(QString::fromUtf8("btnHome_3"));
        btnHome_3->setGeometry(QRect(290, 140, 101, 31));
        btnHome_3->setFont(font1);
        stackedWidget->addWidget(homePage);
        menuPage = new QWidget();
        menuPage->setObjectName(QString::fromUtf8("menuPage"));
        labelMenuPage = new QLabel(menuPage);
        labelMenuPage->setObjectName(QString::fromUtf8("labelMenuPage"));
        labelMenuPage->setGeometry(QRect(100, 50, 361, 91));
        labelMenuPage->setFont(font1);
        btnRadio1 = new QRadioButton(menuPage);
        btnRadio1->setObjectName(QString::fromUtf8("btnRadio1"));
        btnRadio1->setGeometry(QRect(100, 130, 95, 20));
        btnRadio2 = new QRadioButton(menuPage);
        btnRadio2->setObjectName(QString::fromUtf8("btnRadio2"));
        btnRadio2->setGeometry(QRect(100, 160, 95, 20));
        btnRadio3 = new QRadioButton(menuPage);
        btnRadio3->setObjectName(QString::fromUtf8("btnRadio3"));
        btnRadio3->setGeometry(QRect(100, 190, 95, 20));
        btnRadio4 = new QRadioButton(menuPage);
        btnRadio4->setObjectName(QString::fromUtf8("btnRadio4"));
        btnRadio4->setGeometry(QRect(100, 220, 95, 20));
        btnOkMenuPage = new QPushButton(menuPage);
        btnOkMenuPage->setObjectName(QString::fromUtf8("btnOkMenuPage"));
        btnOkMenuPage->setGeometry(QRect(100, 290, 93, 28));
        btnCancelMenuPage = new QPushButton(menuPage);
        btnCancelMenuPage->setObjectName(QString::fromUtf8("btnCancelMenuPage"));
        btnCancelMenuPage->setGeometry(QRect(210, 290, 93, 28));
        btnRadio5 = new QRadioButton(menuPage);
        btnRadio5->setObjectName(QString::fromUtf8("btnRadio5"));
        btnRadio5->setGeometry(QRect(100, 250, 141, 20));
        listWidget = new QListWidget(menuPage);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(350, 120, 256, 192));
        lineEdit = new QLineEdit(menuPage);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(350, 120, 261, 31));
        stackedWidget->addWidget(menuPage);
        listPage = new QWidget();
        listPage->setObjectName(QString::fromUtf8("listPage"));
        btnBackListPage = new QPushButton(listPage);
        btnBackListPage->setObjectName(QString::fromUtf8("btnBackListPage"));
        btnBackListPage->setGeometry(QRect(490, 390, 93, 28));
        textListPage = new QPlainTextEdit(listPage);
        textListPage->setObjectName(QString::fromUtf8("textListPage"));
        textListPage->setGeometry(QRect(40, 40, 541, 341));
        lblThongBaoListPage = new QLabel(listPage);
        lblThongBaoListPage->setObjectName(QString::fromUtf8("lblThongBaoListPage"));
        lblThongBaoListPage->setGeometry(QRect(140, 10, 381, 20));
        stackedWidget->addWidget(listPage);
        addPage = new QWidget();
        addPage->setObjectName(QString::fromUtf8("addPage"));
        lblAddPage_1 = new QLabel(addPage);
        lblAddPage_1->setObjectName(QString::fromUtf8("lblAddPage_1"));
        lblAddPage_1->setGeometry(QRect(90, 50, 81, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lblAddPage_1->setFont(font2);
        lblAddPage_2 = new QLabel(addPage);
        lblAddPage_2->setObjectName(QString::fromUtf8("lblAddPage_2"));
        lblAddPage_2->setGeometry(QRect(90, 160, 81, 41));
        lblAddPage_2->setFont(font2);
        lblAddPage_3 = new QLabel(addPage);
        lblAddPage_3->setObjectName(QString::fromUtf8("lblAddPage_3"));
        lblAddPage_3->setGeometry(QRect(90, 100, 181, 51));
        lblAddPage_3->setFont(font2);
        lblAddPage_4 = new QLabel(addPage);
        lblAddPage_4->setObjectName(QString::fromUtf8("lblAddPage_4"));
        lblAddPage_4->setGeometry(QRect(90, 220, 91, 41));
        lblAddPage_4->setFont(font2);
        inputAddPage_1 = new QLineEdit(addPage);
        inputAddPage_1->setObjectName(QString::fromUtf8("inputAddPage_1"));
        inputAddPage_1->setGeometry(QRect(250, 50, 271, 31));
        inputAddPage_4 = new QTextEdit(addPage);
        inputAddPage_4->setObjectName(QString::fromUtf8("inputAddPage_4"));
        inputAddPage_4->setGeometry(QRect(250, 230, 271, 131));
        inputAddPage_2 = new QLineEdit(addPage);
        inputAddPage_2->setObjectName(QString::fromUtf8("inputAddPage_2"));
        inputAddPage_2->setGeometry(QRect(250, 170, 271, 31));
        inputAddPage_3 = new QLineEdit(addPage);
        inputAddPage_3->setObjectName(QString::fromUtf8("inputAddPage_3"));
        inputAddPage_3->setGeometry(QRect(250, 110, 271, 31));
        btnOkAddPage = new QPushButton(addPage);
        btnOkAddPage->setObjectName(QString::fromUtf8("btnOkAddPage"));
        btnOkAddPage->setGeometry(QRect(140, 380, 93, 28));
        btnResetAddPage = new QPushButton(addPage);
        btnResetAddPage->setObjectName(QString::fromUtf8("btnResetAddPage"));
        btnResetAddPage->setGeometry(QRect(250, 380, 93, 28));
        btnCancelAddPage = new QPushButton(addPage);
        btnCancelAddPage->setObjectName(QString::fromUtf8("btnCancelAddPage"));
        btnCancelAddPage->setGeometry(QRect(360, 380, 93, 28));
        lblThongBaoAddPage = new QLabel(addPage);
        lblThongBaoAddPage->setObjectName(QString::fromUtf8("lblThongBaoAddPage"));
        lblThongBaoAddPage->setEnabled(true);
        lblThongBaoAddPage->setGeometry(QRect(20, 5, 581, 31));
        lblThongBaoAddPage->setFont(font1);
        stackedWidget->addWidget(addPage);
        updatePage = new QWidget();
        updatePage->setObjectName(QString::fromUtf8("updatePage"));
        lblWordUpdatePage = new QLabel(updatePage);
        lblWordUpdatePage->setObjectName(QString::fromUtf8("lblWordUpdatePage"));
        lblWordUpdatePage->setGeometry(QRect(90, 40, 71, 31));
        lblWordUpdatePage->setFont(font1);
        lblPronunUpdatePage = new QLabel(updatePage);
        lblPronunUpdatePage->setObjectName(QString::fromUtf8("lblPronunUpdatePage"));
        lblPronunUpdatePage->setGeometry(QRect(90, 90, 131, 41));
        lblPronunUpdatePage->setFont(font1);
        lblTypeUpdatePage = new QLabel(updatePage);
        lblTypeUpdatePage->setObjectName(QString::fromUtf8("lblTypeUpdatePage"));
        lblTypeUpdatePage->setGeometry(QRect(90, 140, 91, 41));
        lblTypeUpdatePage->setFont(font1);
        lblMeanUpdatePage = new QLabel(updatePage);
        lblMeanUpdatePage->setObjectName(QString::fromUtf8("lblMeanUpdatePage"));
        lblMeanUpdatePage->setGeometry(QRect(90, 200, 55, 16));
        lblMeanUpdatePage->setFont(font1);
        btnExitUpdatePage = new QPushButton(updatePage);
        btnExitUpdatePage->setObjectName(QString::fromUtf8("btnExitUpdatePage"));
        btnExitUpdatePage->setGeometry(QRect(450, 390, 93, 28));
        btnBackUpdatePage = new QPushButton(updatePage);
        btnBackUpdatePage->setObjectName(QString::fromUtf8("btnBackUpdatePage"));
        btnBackUpdatePage->setGeometry(QRect(330, 390, 93, 28));
        btnEditUpdatePage = new QPushButton(updatePage);
        btnEditUpdatePage->setObjectName(QString::fromUtf8("btnEditUpdatePage"));
        btnEditUpdatePage->setGeometry(QRect(90, 390, 93, 28));
        editMeanUpdatePage = new QTextEdit(updatePage);
        editMeanUpdatePage->setObjectName(QString::fromUtf8("editMeanUpdatePage"));
        editMeanUpdatePage->setGeometry(QRect(220, 210, 291, 151));
        editWordUpdatePage = new QLineEdit(updatePage);
        editWordUpdatePage->setObjectName(QString::fromUtf8("editWordUpdatePage"));
        editWordUpdatePage->setGeometry(QRect(220, 40, 291, 22));
        editPronunUpdatePage = new QLineEdit(updatePage);
        editPronunUpdatePage->setObjectName(QString::fromUtf8("editPronunUpdatePage"));
        editPronunUpdatePage->setGeometry(QRect(220, 100, 291, 22));
        editTypeUpdatePage = new QLineEdit(updatePage);
        editTypeUpdatePage->setObjectName(QString::fromUtf8("editTypeUpdatePage"));
        editTypeUpdatePage->setGeometry(QRect(220, 150, 291, 22));
        lblWordUpdatePage_2 = new QLabel(updatePage);
        lblWordUpdatePage_2->setObjectName(QString::fromUtf8("lblWordUpdatePage_2"));
        lblWordUpdatePage_2->setEnabled(false);
        lblWordUpdatePage_2->setGeometry(QRect(220, 40, 291, 20));
        lblPronunUpdatePage_2 = new QLabel(updatePage);
        lblPronunUpdatePage_2->setObjectName(QString::fromUtf8("lblPronunUpdatePage_2"));
        lblPronunUpdatePage_2->setEnabled(false);
        lblPronunUpdatePage_2->setGeometry(QRect(220, 100, 291, 20));
        lblTypeUpdatePage_2 = new QLabel(updatePage);
        lblTypeUpdatePage_2->setObjectName(QString::fromUtf8("lblTypeUpdatePage_2"));
        lblTypeUpdatePage_2->setEnabled(false);
        lblTypeUpdatePage_2->setGeometry(QRect(220, 150, 291, 20));
        lblMeanUpdatePage_2 = new QLabel(updatePage);
        lblMeanUpdatePage_2->setObjectName(QString::fromUtf8("lblMeanUpdatePage_2"));
        lblMeanUpdatePage_2->setEnabled(false);
        lblMeanUpdatePage_2->setGeometry(QRect(220, 210, 291, 151));
        btnDeletePage = new QPushButton(updatePage);
        btnDeletePage->setObjectName(QString::fromUtf8("btnDeletePage"));
        btnDeletePage->setGeometry(QRect(210, 390, 93, 28));
        stackedWidget->addWidget(updatePage);
        lblMeanUpdatePage_2->raise();
        lblTypeUpdatePage_2->raise();
        lblPronunUpdatePage_2->raise();
        lblWordUpdatePage_2->raise();
        lblWordUpdatePage->raise();
        lblPronunUpdatePage->raise();
        lblTypeUpdatePage->raise();
        lblMeanUpdatePage->raise();
        btnExitUpdatePage->raise();
        btnBackUpdatePage->raise();
        btnEditUpdatePage->raise();
        editMeanUpdatePage->raise();
        editWordUpdatePage->raise();
        editPronunUpdatePage->raise();
        editTypeUpdatePage->raise();
        btnDeletePage->raise();
        gameLv1Page = new QWidget();
        gameLv1Page->setObjectName(QString::fromUtf8("gameLv1Page"));
        graphicsView_2 = new QGraphicsView(gameLv1Page);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(50, 20, 521, 161));
        lblLevelPage5 = new QLabel(gameLv1Page);
        lblLevelPage5->setObjectName(QString::fromUtf8("lblLevelPage5"));
        lblLevelPage5->setGeometry(QRect(250, 190, 121, 91));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        lblLevelPage5->setFont(font3);
        textDirectionPage5 = new QTextBrowser(gameLv1Page);
        textDirectionPage5->setObjectName(QString::fromUtf8("textDirectionPage5"));
        textDirectionPage5->setGeometry(QRect(70, 300, 481, 111));
        btnStartLv1Page = new QPushButton(gameLv1Page);
        btnStartLv1Page->setObjectName(QString::fromUtf8("btnStartLv1Page"));
        btnStartLv1Page->setGeometry(QRect(250, 260, 93, 28));
        stackedWidget->addWidget(gameLv1Page);
        lv1Page = new QWidget();
        lv1Page->setObjectName(QString::fromUtf8("lv1Page"));
        frGameContent = new QFrame(lv1Page);
        frGameContent->setObjectName(QString::fromUtf8("frGameContent"));
        frGameContent->setGeometry(QRect(70, 50, 341, 331));
        frGameContent->setFrameShape(QFrame::StyledPanel);
        frGameContent->setFrameShadow(QFrame::Raised);
        frGameContent->setLineWidth(1);
        frGameContent->setMidLineWidth(0);
        btnSubmitLv1Page = new QPushButton(frGameContent);
        btnSubmitLv1Page->setObjectName(QString::fromUtf8("btnSubmitLv1Page"));
        btnSubmitLv1Page->setGeometry(QRect(130, 290, 93, 28));
        lblWordValueLv1Page = new QLabel(frGameContent);
        lblWordValueLv1Page->setObjectName(QString::fromUtf8("lblWordValueLv1Page"));
        lblWordValueLv1Page->setGeometry(QRect(50, 180, 71, 41));
        txtMeanLv1Page = new QTextEdit(frGameContent);
        txtMeanLv1Page->setObjectName(QString::fromUtf8("txtMeanLv1Page"));
        txtMeanLv1Page->setEnabled(false);
        txtMeanLv1Page->setGeometry(QRect(130, 180, 191, 101));
        btnNextLv1Page = new QPushButton(frGameContent);
        btnNextLv1Page->setObjectName(QString::fromUtf8("btnNextLv1Page"));
        btnNextLv1Page->setGeometry(QRect(230, 290, 93, 28));
        btnExitLv1Page = new QPushButton(lv1Page);
        btnExitLv1Page->setObjectName(QString::fromUtf8("btnExitLv1Page"));
        btnExitLv1Page->setGeometry(QRect(520, 390, 93, 28));
        frImage = new QFrame(lv1Page);
        frImage->setObjectName(QString::fromUtf8("frImage"));
        frImage->setGeometry(QRect(420, 230, 191, 151));
        frImage->setFrameShape(QFrame::StyledPanel);
        frImage->setFrameShadow(QFrame::Raised);
        frStatus = new QFrame(lv1Page);
        frStatus->setObjectName(QString::fromUtf8("frStatus"));
        frStatus->setGeometry(QRect(420, 50, 191, 171));
        frStatus->setFrameShape(QFrame::StyledPanel);
        frStatus->setFrameShadow(QFrame::Raised);
        lcdGradeNumber = new QLCDNumber(frStatus);
        lcdGradeNumber->setObjectName(QString::fromUtf8("lcdGradeNumber"));
        lcdGradeNumber->setGeometry(QRect(70, 10, 111, 61));
        lcdGradeNumber->setFont(font2);
        lcdGradeNumber->setLineWidth(0);
        lcdGradeNumber->setSmallDecimalPoint(false);
        lcdGradeNumber->setDigitCount(5);
        lcdGradeNumber->setSegmentStyle(QLCDNumber::Filled);
        lcdGradeNumber->setProperty("value", QVariant(0.000000000000000));
        label = new QLabel(frStatus);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 61, 61));
        label->setFont(font2);
        label_2 = new QLabel(frStatus);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 71, 61));
        label_2->setFont(font2);
        lcdStageNumber = new QLCDNumber(frStatus);
        lcdStageNumber->setObjectName(QString::fromUtf8("lcdStageNumber"));
        lcdStageNumber->setGeometry(QRect(110, 90, 64, 61));
        lcdStageNumber->setFont(font2);
        lcdStageNumber->setLineWidth(0);
        stackedWidget->addWidget(lv1Page);
        gameLv2Page = new QWidget();
        gameLv2Page->setObjectName(QString::fromUtf8("gameLv2Page"));
        textDirectionPage6 = new QTextBrowser(gameLv2Page);
        textDirectionPage6->setObjectName(QString::fromUtf8("textDirectionPage6"));
        textDirectionPage6->setGeometry(QRect(80, 300, 481, 111));
        graphicsView_3 = new QGraphicsView(gameLv2Page);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(60, 20, 521, 161));
        lblLevelPage6 = new QLabel(gameLv2Page);
        lblLevelPage6->setObjectName(QString::fromUtf8("lblLevelPage6"));
        lblLevelPage6->setGeometry(QRect(260, 190, 121, 91));
        lblLevelPage6->setFont(font3);
        stackedWidget->addWidget(gameLv2Page);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        SourceClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SourceClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 643, 26));
        SourceClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SourceClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SourceClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SourceClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SourceClass->setStatusBar(statusBar);

        retranslateUi(SourceClass);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(SourceClass);
    } // setupUi

    void retranslateUi(QMainWindow *SourceClass)
    {
        SourceClass->setWindowTitle(QCoreApplication::translate("SourceClass", "Source", nullptr));
        lbl2->setText(QCoreApplication::translate("SourceClass", "2. My Game", nullptr));
        lbl1->setText(QCoreApplication::translate("SourceClass", "1. My Dictionary", nullptr));
        lbl3->setText(QCoreApplication::translate("SourceClass", "3. Exit", nullptr));
        btnHome_1->setText(QCoreApplication::translate("SourceClass", "<----", nullptr));
        btnHome_2->setText(QCoreApplication::translate("SourceClass", "<----", nullptr));
        btnHome_3->setText(QCoreApplication::translate("SourceClass", "<----", nullptr));
        labelMenuPage->setText(QCoreApplication::translate("SourceClass", "What do you want to ...... ?", nullptr));
        btnRadio1->setText(QCoreApplication::translate("SourceClass", "Find", nullptr));
        btnRadio2->setText(QCoreApplication::translate("SourceClass", "Update", nullptr));
        btnRadio3->setText(QCoreApplication::translate("SourceClass", "Delete", nullptr));
        btnRadio4->setText(QCoreApplication::translate("SourceClass", "Add", nullptr));
        btnOkMenuPage->setText(QCoreApplication::translate("SourceClass", "Ok", nullptr));
        btnCancelMenuPage->setText(QCoreApplication::translate("SourceClass", "Cancel", nullptr));
        btnRadio5->setText(QCoreApplication::translate("SourceClass", "Display Dictionary", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("SourceClass", "input your word ", nullptr));
        btnBackListPage->setText(QCoreApplication::translate("SourceClass", "Back", nullptr));
        lblThongBaoListPage->setText(QCoreApplication::translate("SourceClass", "TextLabel", nullptr));
        lblAddPage_1->setText(QCoreApplication::translate("SourceClass", "Word", nullptr));
        lblAddPage_2->setText(QCoreApplication::translate("SourceClass", "Type", nullptr));
        lblAddPage_3->setText(QCoreApplication::translate("SourceClass", "Pronunciation", nullptr));
        lblAddPage_4->setText(QCoreApplication::translate("SourceClass", "Mean", nullptr));
        btnOkAddPage->setText(QCoreApplication::translate("SourceClass", "Ok", nullptr));
        btnResetAddPage->setText(QCoreApplication::translate("SourceClass", "Reset", nullptr));
        btnCancelAddPage->setText(QCoreApplication::translate("SourceClass", "Cancel", nullptr));
        lblThongBaoAddPage->setText(QCoreApplication::translate("SourceClass", "Add new word successfully!!", nullptr));
        lblWordUpdatePage->setText(QCoreApplication::translate("SourceClass", "Word: ", nullptr));
        lblPronunUpdatePage->setText(QCoreApplication::translate("SourceClass", "Pronunciation:", nullptr));
        lblTypeUpdatePage->setText(QCoreApplication::translate("SourceClass", "Type:", nullptr));
        lblMeanUpdatePage->setText(QCoreApplication::translate("SourceClass", "Mean:", nullptr));
        btnExitUpdatePage->setText(QCoreApplication::translate("SourceClass", "Exit", nullptr));
        btnBackUpdatePage->setText(QCoreApplication::translate("SourceClass", "Back", nullptr));
        btnEditUpdatePage->setText(QCoreApplication::translate("SourceClass", "Edit", nullptr));
        editWordUpdatePage->setText(QString());
        lblWordUpdatePage_2->setText(QCoreApplication::translate("SourceClass", "TextLabel", nullptr));
        lblPronunUpdatePage_2->setText(QCoreApplication::translate("SourceClass", "TextLabel", nullptr));
        lblTypeUpdatePage_2->setText(QCoreApplication::translate("SourceClass", "TextLabel", nullptr));
        lblMeanUpdatePage_2->setText(QCoreApplication::translate("SourceClass", "TextLabel", nullptr));
        btnDeletePage->setText(QCoreApplication::translate("SourceClass", "Delete", nullptr));
        lblLevelPage5->setText(QCoreApplication::translate("SourceClass", "LEVEL 1", nullptr));
        textDirectionPage5->setHtml(QCoreApplication::translate("SourceClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:16pt; font-weight:600;\">Direction: Fill in missing places to complete the right words</span></p></body></html>", nullptr));
        btnStartLv1Page->setText(QCoreApplication::translate("SourceClass", "Start", nullptr));
        btnSubmitLv1Page->setText(QCoreApplication::translate("SourceClass", "Submit", nullptr));
        lblWordValueLv1Page->setText(QCoreApplication::translate("SourceClass", "TextLabel", nullptr));
        btnNextLv1Page->setText(QCoreApplication::translate("SourceClass", "Next", nullptr));
        btnExitLv1Page->setText(QCoreApplication::translate("SourceClass", "Exit", nullptr));
        label->setText(QCoreApplication::translate("SourceClass", "Point", nullptr));
        label_2->setText(QCoreApplication::translate("SourceClass", "Stage", nullptr));
        textDirectionPage6->setHtml(QCoreApplication::translate("SourceClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:16pt; font-weight:600;\">Direction: Fill in missing places to complete the right words with the following meaning</span></p></body></html>", nullptr));
        lblLevelPage6->setText(QCoreApplication::translate("SourceClass", "LEVEL 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SourceClass: public Ui_SourceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOURCE_H
