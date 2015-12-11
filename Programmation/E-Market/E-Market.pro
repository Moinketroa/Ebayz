#-------------------------------------------------
#
# Project created by QtCreator 2015-11-09T16:54:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = E-Market
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Modele/Utilisateur/Acheteur.cpp \
    Modele/Utilisateur/Compte.cpp \
    Modele/Utilisateur/LesComptes.cpp \
    Modele/Utilisateur/Mediateur.cpp \
    Modele/Utilisateur/Personne.cpp \
    Modele/Utilisateur/Vendeur.cpp \
    Modele/Commerce/Produit/LesProduits.cpp \
    Modele/Commerce/Produit/Produit.cpp \
    Modele/Commerce/Produit/Vente/Vente.cpp \
    Modele/Commerce/Produit/Vente/VenteEnchere.cpp \
    Modele/Commerce/Produit/Vente/VenteNormal.cpp \
    Modele/Commerce/Produit/Tag/LesTags.cpp \
    Modele/Modele.cpp \
    graphique/Fen_ajout.cpp \
    graphique/fen_inscription.cpp

HEADERS  += \
    Modele/Utilisateur/Acheteur.h \
    Modele/Utilisateur/Compte.h \
    Modele/Utilisateur/LesComptes.h \
    Modele/Utilisateur/Mediateur.h \
    Modele/Utilisateur/Personne.h \
    Modele/Utilisateur/Vendeur.h \
    Modele/Commerce/Produit/LesProduits.h \
    Modele/Commerce/Produit/Produit.h \
    Modele/Commerce/Produit/Vente/Vente.h \
    Modele/Commerce/Produit/Vente/VenteEnchere.h \
    Modele/Commerce/Produit/Vente/VenteNormal.h \
    Modele/Commerce/Produit/Tag/LesTags.h \
    mainwindow.h \
    mainwindow.h \
    Modele/Modele.h \
    graphique/fen_inscription.h \
    graphique/Fen_ajout.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    Modele/Utilisateur/Statistiques/prog.txt
