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
    Commerce/Produit/Vente/Vente.cpp \
    Commerce/Produit/Vente/VenteNormal.cpp \
    Commerce/Produit/Vente/VenteEnchere.cpp

HEADERS  += mainwindow.h \
    Commerce/Produit/Vente/Vente.h \
    Commerce/Produit/Vente/VenteNormal.h \
    Commerce/Produit/Vente/VenteEnchere.h

FORMS    += mainwindow.ui
