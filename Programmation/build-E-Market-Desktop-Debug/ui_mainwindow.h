/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEn_tant_que_Vendeur;
    QAction *actionEn_tant_du_Acheteur;
    QAction *actionConnexion;
    QAction *actionInscription;
    QAction *actionAjouter_Produit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabAppli;
    QWidget *marketPlace;
    QTabWidget *marketPlaceLesProduits;
    QWidget *alpha;
    QScrollArea *listLesProduitsAlpha;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *croissant;
    QScrollArea *listLesProduitsCroiss;
    QWidget *scrollAreaWidgetContents_4;
    QWidget *decroissant;
    QScrollArea *listLesProduitsDecrois;
    QWidget *scrollAreaWidgetContents_5;
    QLineEdit *tagAChercher;
    QPushButton *actionRechercher;
    QLabel *rechercheProduit;
    QWidget *monCompte;
    QTabWidget *tabMonCompte;
    QWidget *mesStats;
    QTabWidget *statLesCommentaires;
    QWidget *eTQVendeur;
    QScrollArea *listCommentairesV;
    QWidget *scrollAreaWidgetContents_7;
    QLabel *noteMoyDernierMois_ven;
    QLabel *v_noteMoyDernierMois_ven;
    QLabel *noteMoyPeriode_ven;
    QLabel *v_noteMoyPeriode_ven;
    QWidget *eTQAcheteur;
    QScrollArea *listCommentairesA;
    QWidget *scrollAreaWidgetContents_8;
    QLabel *noteMoyDernierMois_ach;
    QLabel *v_noteMoyDernierMois_ach;
    QLabel *noteMoyPeriode_ach;
    QLabel *v_noteMoyPeriode_ach;
    QWidget *mesCoord;
    QLabel *l_id;
    QLabel *l_name;
    QLabel *l_surname;
    QLabel *l_pseudo;
    QLabel *l_adresse;
    QLabel *l_mdp;
    QLabel *l_tel;
    QLabel *l_ddn;
    QFrame *line;
    QLabel *l_no_carte;
    QLabel *l_dexp;
    QLabel *l_crypt;
    QLabel *v_id;
    QLabel *v_name;
    QLabel *v_surname;
    QLabel *v_pseudo;
    QLabel *v_adresse;
    QLabel *v_mdp;
    QLabel *v_tel;
    QLabel *v_ddn;
    QLabel *v_no_carte;
    QLabel *v_dexp;
    QLabel *v_crypt;
    QWidget *mesProduits;
    QScrollArea *listMesProduits;
    QWidget *scrollAreaWidgetContents;
    QWidget *lesLitiges;
    QScrollArea *listLesLitiges;
    QWidget *scrollAreaWidgetContents_6;
    QWidget *mesCommandes;
    QScrollArea *listMesCommandes;
    QWidget *scrollAreaWidgetContents_9;
    QMenuBar *menuBar;
    QMenu *menuConnexion;
    QMenu *menuAjouter;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 520);
        MainWindow->setMinimumSize(QSize(800, 520));
        MainWindow->setMaximumSize(QSize(800, 520));
        actionEn_tant_que_Vendeur = new QAction(MainWindow);
        actionEn_tant_que_Vendeur->setObjectName(QStringLiteral("actionEn_tant_que_Vendeur"));
        actionEn_tant_du_Acheteur = new QAction(MainWindow);
        actionEn_tant_du_Acheteur->setObjectName(QStringLiteral("actionEn_tant_du_Acheteur"));
        actionConnexion = new QAction(MainWindow);
        actionConnexion->setObjectName(QStringLiteral("actionConnexion"));
        actionInscription = new QAction(MainWindow);
        actionInscription->setObjectName(QStringLiteral("actionInscription"));
        actionAjouter_Produit = new QAction(MainWindow);
        actionAjouter_Produit->setObjectName(QStringLiteral("actionAjouter_Produit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabAppli = new QTabWidget(centralWidget);
        tabAppli->setObjectName(QStringLiteral("tabAppli"));
        tabAppli->setEnabled(true);
        tabAppli->setProperty("toolTipDuration", QVariant(-1));
        marketPlace = new QWidget();
        marketPlace->setObjectName(QStringLiteral("marketPlace"));
        marketPlaceLesProduits = new QTabWidget(marketPlace);
        marketPlaceLesProduits->setObjectName(QStringLiteral("marketPlaceLesProduits"));
        marketPlaceLesProduits->setGeometry(QRect(10, 30, 760, 420));
        marketPlaceLesProduits->setLayoutDirection(Qt::RightToLeft);
        marketPlaceLesProduits->setTabPosition(QTabWidget::North);
        marketPlaceLesProduits->setTabShape(QTabWidget::Rounded);
        marketPlaceLesProduits->setElideMode(Qt::ElideNone);
        alpha = new QWidget();
        alpha->setObjectName(QStringLiteral("alpha"));
        listLesProduitsAlpha = new QScrollArea(alpha);
        listLesProduitsAlpha->setObjectName(QStringLiteral("listLesProduitsAlpha"));
        listLesProduitsAlpha->setGeometry(QRect(10, 20, 740, 360));
        listLesProduitsAlpha->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 738, 358));
        listLesProduitsAlpha->setWidget(scrollAreaWidgetContents_2);
        marketPlaceLesProduits->addTab(alpha, QString());
        croissant = new QWidget();
        croissant->setObjectName(QStringLiteral("croissant"));
        listLesProduitsCroiss = new QScrollArea(croissant);
        listLesProduitsCroiss->setObjectName(QStringLiteral("listLesProduitsCroiss"));
        listLesProduitsCroiss->setGeometry(QRect(10, 20, 740, 360));
        listLesProduitsCroiss->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 738, 358));
        listLesProduitsCroiss->setWidget(scrollAreaWidgetContents_4);
        marketPlaceLesProduits->addTab(croissant, QString());
        decroissant = new QWidget();
        decroissant->setObjectName(QStringLiteral("decroissant"));
        listLesProduitsDecrois = new QScrollArea(decroissant);
        listLesProduitsDecrois->setObjectName(QStringLiteral("listLesProduitsDecrois"));
        listLesProduitsDecrois->setGeometry(QRect(10, 20, 740, 360));
        listLesProduitsDecrois->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 738, 358));
        listLesProduitsDecrois->setWidget(scrollAreaWidgetContents_5);
        marketPlaceLesProduits->addTab(decroissant, QString());
        tagAChercher = new QLineEdit(marketPlace);
        tagAChercher->setObjectName(QStringLiteral("tagAChercher"));
        tagAChercher->setGeometry(QRect(172, 20, 160, 25));
        actionRechercher = new QPushButton(marketPlace);
        actionRechercher->setObjectName(QStringLiteral("actionRechercher"));
        actionRechercher->setGeometry(QRect(340, 20, 140, 25));
        rechercheProduit = new QLabel(marketPlace);
        rechercheProduit->setObjectName(QStringLiteral("rechercheProduit"));
        rechercheProduit->setGeometry(QRect(20, 20, 140, 30));
        tabAppli->addTab(marketPlace, QString());
        monCompte = new QWidget();
        monCompte->setObjectName(QStringLiteral("monCompte"));
        monCompte->setEnabled(false);
        tabMonCompte = new QTabWidget(monCompte);
        tabMonCompte->setObjectName(QStringLiteral("tabMonCompte"));
        tabMonCompte->setGeometry(QRect(10, 10, 760, 440));
        mesStats = new QWidget();
        mesStats->setObjectName(QStringLiteral("mesStats"));
        mesStats->setEnabled(false);
        statLesCommentaires = new QTabWidget(mesStats);
        statLesCommentaires->setObjectName(QStringLiteral("statLesCommentaires"));
        statLesCommentaires->setGeometry(QRect(10, 9, 740, 390));
        eTQVendeur = new QWidget();
        eTQVendeur->setObjectName(QStringLiteral("eTQVendeur"));
        listCommentairesV = new QScrollArea(eTQVendeur);
        listCommentairesV->setObjectName(QStringLiteral("listCommentairesV"));
        listCommentairesV->setGeometry(QRect(10, 10, 720, 340));
        listCommentairesV->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QStringLiteral("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 718, 338));
        noteMoyDernierMois_ven = new QLabel(scrollAreaWidgetContents_7);
        noteMoyDernierMois_ven->setObjectName(QStringLiteral("noteMoyDernierMois_ven"));
        noteMoyDernierMois_ven->setGeometry(QRect(10, 10, 221, 31));
        v_noteMoyDernierMois_ven = new QLabel(scrollAreaWidgetContents_7);
        v_noteMoyDernierMois_ven->setObjectName(QStringLiteral("v_noteMoyDernierMois_ven"));
        v_noteMoyDernierMois_ven->setGeometry(QRect(240, 10, 31, 31));
        noteMoyPeriode_ven = new QLabel(scrollAreaWidgetContents_7);
        noteMoyPeriode_ven->setObjectName(QStringLiteral("noteMoyPeriode_ven"));
        noteMoyPeriode_ven->setGeometry(QRect(420, 10, 251, 31));
        v_noteMoyPeriode_ven = new QLabel(scrollAreaWidgetContents_7);
        v_noteMoyPeriode_ven->setObjectName(QStringLiteral("v_noteMoyPeriode_ven"));
        v_noteMoyPeriode_ven->setGeometry(QRect(680, 10, 31, 31));
        listCommentairesV->setWidget(scrollAreaWidgetContents_7);
        statLesCommentaires->addTab(eTQVendeur, QString());
        eTQAcheteur = new QWidget();
        eTQAcheteur->setObjectName(QStringLiteral("eTQAcheteur"));
        listCommentairesA = new QScrollArea(eTQAcheteur);
        listCommentairesA->setObjectName(QStringLiteral("listCommentairesA"));
        listCommentairesA->setGeometry(QRect(10, 10, 720, 340));
        listCommentairesA->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QStringLiteral("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 718, 338));
        noteMoyDernierMois_ach = new QLabel(scrollAreaWidgetContents_8);
        noteMoyDernierMois_ach->setObjectName(QStringLiteral("noteMoyDernierMois_ach"));
        noteMoyDernierMois_ach->setGeometry(QRect(10, 10, 221, 31));
        v_noteMoyDernierMois_ach = new QLabel(scrollAreaWidgetContents_8);
        v_noteMoyDernierMois_ach->setObjectName(QStringLiteral("v_noteMoyDernierMois_ach"));
        v_noteMoyDernierMois_ach->setGeometry(QRect(240, 10, 31, 31));
        noteMoyPeriode_ach = new QLabel(scrollAreaWidgetContents_8);
        noteMoyPeriode_ach->setObjectName(QStringLiteral("noteMoyPeriode_ach"));
        noteMoyPeriode_ach->setGeometry(QRect(420, 10, 251, 31));
        v_noteMoyPeriode_ach = new QLabel(scrollAreaWidgetContents_8);
        v_noteMoyPeriode_ach->setObjectName(QStringLiteral("v_noteMoyPeriode_ach"));
        v_noteMoyPeriode_ach->setGeometry(QRect(680, 10, 31, 31));
        listCommentairesA->setWidget(scrollAreaWidgetContents_8);
        statLesCommentaires->addTab(eTQAcheteur, QString());
        tabMonCompte->addTab(mesStats, QString());
        mesCoord = new QWidget();
        mesCoord->setObjectName(QStringLiteral("mesCoord"));
        l_id = new QLabel(mesCoord);
        l_id->setObjectName(QStringLiteral("l_id"));
        l_id->setGeometry(QRect(20, 20, 101, 31));
        l_name = new QLabel(mesCoord);
        l_name->setObjectName(QStringLiteral("l_name"));
        l_name->setGeometry(QRect(20, 50, 67, 31));
        l_surname = new QLabel(mesCoord);
        l_surname->setObjectName(QStringLiteral("l_surname"));
        l_surname->setGeometry(QRect(20, 80, 67, 31));
        l_pseudo = new QLabel(mesCoord);
        l_pseudo->setObjectName(QStringLiteral("l_pseudo"));
        l_pseudo->setGeometry(QRect(20, 110, 67, 31));
        l_pseudo->setLayoutDirection(Qt::LeftToRight);
        l_adresse = new QLabel(mesCoord);
        l_adresse->setObjectName(QStringLiteral("l_adresse"));
        l_adresse->setGeometry(QRect(20, 140, 67, 31));
        l_mdp = new QLabel(mesCoord);
        l_mdp->setObjectName(QStringLiteral("l_mdp"));
        l_mdp->setGeometry(QRect(20, 170, 101, 31));
        l_tel = new QLabel(mesCoord);
        l_tel->setObjectName(QStringLiteral("l_tel"));
        l_tel->setGeometry(QRect(20, 200, 91, 31));
        l_ddn = new QLabel(mesCoord);
        l_ddn->setObjectName(QStringLiteral("l_ddn"));
        l_ddn->setGeometry(QRect(20, 230, 131, 31));
        line = new QFrame(mesCoord);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(5, 0, 750, 410));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        l_no_carte = new QLabel(mesCoord);
        l_no_carte->setObjectName(QStringLiteral("l_no_carte"));
        l_no_carte->setGeometry(QRect(400, 20, 131, 31));
        l_dexp = new QLabel(mesCoord);
        l_dexp->setObjectName(QStringLiteral("l_dexp"));
        l_dexp->setGeometry(QRect(400, 50, 131, 31));
        l_crypt = new QLabel(mesCoord);
        l_crypt->setObjectName(QStringLiteral("l_crypt"));
        l_crypt->setGeometry(QRect(400, 80, 121, 31));
        v_id = new QLabel(mesCoord);
        v_id->setObjectName(QStringLiteral("v_id"));
        v_id->setGeometry(QRect(170, 20, 201, 31));
        v_id->setLayoutDirection(Qt::RightToLeft);
        v_name = new QLabel(mesCoord);
        v_name->setObjectName(QStringLiteral("v_name"));
        v_name->setGeometry(QRect(170, 50, 201, 31));
        v_name->setLayoutDirection(Qt::RightToLeft);
        v_surname = new QLabel(mesCoord);
        v_surname->setObjectName(QStringLiteral("v_surname"));
        v_surname->setGeometry(QRect(170, 80, 201, 31));
        v_surname->setLayoutDirection(Qt::RightToLeft);
        v_pseudo = new QLabel(mesCoord);
        v_pseudo->setObjectName(QStringLiteral("v_pseudo"));
        v_pseudo->setGeometry(QRect(170, 110, 201, 31));
        v_pseudo->setLayoutDirection(Qt::RightToLeft);
        v_adresse = new QLabel(mesCoord);
        v_adresse->setObjectName(QStringLiteral("v_adresse"));
        v_adresse->setGeometry(QRect(170, 140, 201, 31));
        v_adresse->setLayoutDirection(Qt::RightToLeft);
        v_mdp = new QLabel(mesCoord);
        v_mdp->setObjectName(QStringLiteral("v_mdp"));
        v_mdp->setGeometry(QRect(170, 170, 201, 31));
        v_mdp->setLayoutDirection(Qt::RightToLeft);
        v_tel = new QLabel(mesCoord);
        v_tel->setObjectName(QStringLiteral("v_tel"));
        v_tel->setGeometry(QRect(170, 200, 201, 31));
        v_tel->setLayoutDirection(Qt::RightToLeft);
        v_ddn = new QLabel(mesCoord);
        v_ddn->setObjectName(QStringLiteral("v_ddn"));
        v_ddn->setGeometry(QRect(170, 230, 201, 31));
        v_ddn->setLayoutDirection(Qt::RightToLeft);
        v_no_carte = new QLabel(mesCoord);
        v_no_carte->setObjectName(QStringLiteral("v_no_carte"));
        v_no_carte->setGeometry(QRect(540, 20, 201, 31));
        v_no_carte->setLayoutDirection(Qt::RightToLeft);
        v_dexp = new QLabel(mesCoord);
        v_dexp->setObjectName(QStringLiteral("v_dexp"));
        v_dexp->setGeometry(QRect(540, 50, 201, 31));
        v_dexp->setLayoutDirection(Qt::RightToLeft);
        v_crypt = new QLabel(mesCoord);
        v_crypt->setObjectName(QStringLiteral("v_crypt"));
        v_crypt->setGeometry(QRect(540, 80, 201, 31));
        v_crypt->setLayoutDirection(Qt::RightToLeft);
        tabMonCompte->addTab(mesCoord, QString());
        tabAppli->addTab(monCompte, QString());
        mesProduits = new QWidget();
        mesProduits->setObjectName(QStringLiteral("mesProduits"));
        mesProduits->setEnabled(false);
        listMesProduits = new QScrollArea(mesProduits);
        listMesProduits->setObjectName(QStringLiteral("listMesProduits"));
        listMesProduits->setGeometry(QRect(10, 10, 760, 440));
        listMesProduits->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 758, 438));
        listMesProduits->setWidget(scrollAreaWidgetContents);
        tabAppli->addTab(mesProduits, QString());
        lesLitiges = new QWidget();
        lesLitiges->setObjectName(QStringLiteral("lesLitiges"));
        lesLitiges->setEnabled(false);
        listLesLitiges = new QScrollArea(lesLitiges);
        listLesLitiges->setObjectName(QStringLiteral("listLesLitiges"));
        listLesLitiges->setGeometry(QRect(10, 10, 760, 440));
        listLesLitiges->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QStringLiteral("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 758, 438));
        listLesLitiges->setWidget(scrollAreaWidgetContents_6);
        tabAppli->addTab(lesLitiges, QString());
        mesCommandes = new QWidget();
        mesCommandes->setObjectName(QStringLiteral("mesCommandes"));
        mesCommandes->setEnabled(false);
        listMesCommandes = new QScrollArea(mesCommandes);
        listMesCommandes->setObjectName(QStringLiteral("listMesCommandes"));
        listMesCommandes->setGeometry(QRect(10, 10, 760, 440));
        listMesCommandes->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QStringLiteral("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 758, 438));
        listMesCommandes->setWidget(scrollAreaWidgetContents_9);
        tabAppli->addTab(mesCommandes, QString());

        gridLayout->addWidget(tabAppli, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 800, 25));
        menuConnexion = new QMenu(menuBar);
        menuConnexion->setObjectName(QStringLiteral("menuConnexion"));
        menuConnexion->setEnabled(true);
        menuAjouter = new QMenu(menuBar);
        menuAjouter->setObjectName(QStringLiteral("menuAjouter"));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(tagAChercher, marketPlaceLesProduits);
        QWidget::setTabOrder(marketPlaceLesProduits, listLesProduitsCroiss);
        QWidget::setTabOrder(listLesProduitsCroiss, listLesProduitsDecrois);
        QWidget::setTabOrder(listLesProduitsDecrois, listLesProduitsAlpha);
        QWidget::setTabOrder(listLesProduitsAlpha, tabMonCompte);
        QWidget::setTabOrder(tabMonCompte, statLesCommentaires);
        QWidget::setTabOrder(statLesCommentaires, actionRechercher);
        QWidget::setTabOrder(actionRechercher, listLesLitiges);
        QWidget::setTabOrder(listLesLitiges, listCommentairesV);
        QWidget::setTabOrder(listCommentairesV, tabAppli);
        QWidget::setTabOrder(tabAppli, listCommentairesA);
        QWidget::setTabOrder(listCommentairesA, listMesCommandes);

        menuBar->addAction(menuConnexion->menuAction());
        menuBar->addAction(menuAjouter->menuAction());
        menuConnexion->addAction(actionConnexion);
        menuConnexion->addAction(actionInscription);
        menuAjouter->addAction(actionAjouter_Produit);

        retranslateUi(MainWindow);

        tabAppli->setCurrentIndex(0);
        marketPlaceLesProduits->setCurrentIndex(2);
        tabMonCompte->setCurrentIndex(1);
        statLesCommentaires->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionEn_tant_que_Vendeur->setText(QApplication::translate("MainWindow", "En tant que Vendeur...", 0));
        actionEn_tant_du_Acheteur->setText(QApplication::translate("MainWindow", "En tant qu'Acheteur", 0));
        actionConnexion->setText(QApplication::translate("MainWindow", "Connexion", 0));
        actionInscription->setText(QApplication::translate("MainWindow", "Inscription", 0));
        actionAjouter_Produit->setText(QApplication::translate("MainWindow", "Ajouter Produit", 0));
        marketPlaceLesProduits->setTabText(marketPlaceLesProduits->indexOf(alpha), QApplication::translate("MainWindow", "A-Z", 0));
        marketPlaceLesProduits->setTabText(marketPlaceLesProduits->indexOf(croissant), QApplication::translate("MainWindow", "Prix Croissant", 0));
        marketPlaceLesProduits->setTabText(marketPlaceLesProduits->indexOf(decroissant), QApplication::translate("MainWindow", "Prix D\303\251croissant", 0));
        actionRechercher->setText(QApplication::translate("MainWindow", "Rechercher", 0));
        rechercheProduit->setText(QApplication::translate("MainWindow", "Rechercher Produit : ", 0));
        tabAppli->setTabText(tabAppli->indexOf(marketPlace), QApplication::translate("MainWindow", "MarketPlace", 0));
        noteMoyDernierMois_ven->setText(QApplication::translate("MainWindow", "Note moyenne du dernier mois : ", 0));
        v_noteMoyDernierMois_ven->setText(QApplication::translate("MainWindow", "9.99", 0));
        noteMoyPeriode_ven->setText(QApplication::translate("MainWindow", "Note moyenne de la p\303\251riode active :", 0));
        v_noteMoyPeriode_ven->setText(QApplication::translate("MainWindow", "9.99", 0));
        statLesCommentaires->setTabText(statLesCommentaires->indexOf(eTQVendeur), QApplication::translate("MainWindow", "En tant que Vendeur", 0));
        noteMoyDernierMois_ach->setText(QApplication::translate("MainWindow", "Note moyenne du dernier mois : ", 0));
        v_noteMoyDernierMois_ach->setText(QApplication::translate("MainWindow", "9.99", 0));
        noteMoyPeriode_ach->setText(QApplication::translate("MainWindow", "Note moyenne de la p\303\251riode active :", 0));
        v_noteMoyPeriode_ach->setText(QApplication::translate("MainWindow", "9.99", 0));
        statLesCommentaires->setTabText(statLesCommentaires->indexOf(eTQAcheteur), QApplication::translate("MainWindow", "En tant qu'Acheteur", 0));
        tabMonCompte->setTabText(tabMonCompte->indexOf(mesStats), QApplication::translate("MainWindow", "Mes Statistiques", 0));
        l_id->setText(QApplication::translate("MainWindow", "ID Utilisateur :", 0));
        l_name->setText(QApplication::translate("MainWindow", "Nom :", 0));
        l_surname->setText(QApplication::translate("MainWindow", "Pr\303\251nom :", 0));
        l_pseudo->setText(QApplication::translate("MainWindow", "Pseudo :", 0));
        l_adresse->setText(QApplication::translate("MainWindow", "Adresse :", 0));
        l_mdp->setText(QApplication::translate("MainWindow", "Mot de passe :", 0));
        l_tel->setText(QApplication::translate("MainWindow", "T\303\251l\303\251phone :", 0));
        l_ddn->setText(QApplication::translate("MainWindow", "Date de naissance :", 0));
        l_no_carte->setText(QApplication::translate("MainWindow", "Num\303\251ro de Carte :", 0));
        l_dexp->setText(QApplication::translate("MainWindow", "Date d'expiration :", 0));
        l_crypt->setText(QApplication::translate("MainWindow", "Cryptogramme :", 0));
        v_id->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">ID</p></body></html>", 0));
        v_name->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">name</p></body></html>", 0));
        v_surname->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">surname</p></body></html>", 0));
        v_pseudo->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">pseudo</p></body></html>", 0));
        v_adresse->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">adresse</p></body></html>", 0));
        v_mdp->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">mdp</p></body></html>", 0));
        v_tel->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">tel</p></body></html>", 0));
        v_ddn->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">ddn</p></body></html>", 0));
        v_no_carte->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">no_carte</p></body></html>", 0));
        v_dexp->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">dexp</p></body></html>", 0));
        v_crypt->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">crypt</p></body></html>", 0));
        tabMonCompte->setTabText(tabMonCompte->indexOf(mesCoord), QApplication::translate("MainWindow", "Mes Coordonn\303\251es", 0));
        tabAppli->setTabText(tabAppli->indexOf(monCompte), QApplication::translate("MainWindow", "Mon Compte", 0));
        tabAppli->setTabText(tabAppli->indexOf(mesProduits), QApplication::translate("MainWindow", "Mes Produits", 0));
        tabAppli->setTabText(tabAppli->indexOf(lesLitiges), QApplication::translate("MainWindow", "Les Litiges", 0));
        tabAppli->setTabText(tabAppli->indexOf(mesCommandes), QApplication::translate("MainWindow", "Mes Commandes", 0));
        menuConnexion->setTitle(QApplication::translate("MainWindow", "Authentification", 0));
        menuAjouter->setTitle(QApplication::translate("MainWindow", "Ajouter", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
