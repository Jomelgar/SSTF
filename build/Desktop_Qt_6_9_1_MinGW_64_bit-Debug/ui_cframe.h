/********************************************************************************
** Form generated from reading UI file 'cframe.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFRAME_H
#define UI_CFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cframe
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *Lbl_DNI;
    QLabel *Lbl_Nombre;
    QLabel *Lbl_Apellidos;
    QLabel *Lbl_Cargo;
    QLabel *Lbl_Edad;
    QLabel *Lbl_Genero;
    QLabel *Lbl_Salario;
    QLineEdit *Tbx_DNI;
    QLineEdit *Tbx_Nombre;
    QLineEdit *Tbx_Apellidos;
    QLineEdit *Tbx_Cargo;
    QSpinBox *Spbx_Edad;
    QComboBox *Cbx_Genero;
    QDoubleSpinBox *Spbx_Salario;
    QPushButton *Btn_Ingresar;
    QWidget *tab_2;
    QTableWidget *Tw_Mostrar;
    QPushButton *BtnIniciar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName("cframe");
        cframe->resize(800, 600);
        centralwidget = new QWidget(cframe);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        Lbl_DNI = new QLabel(tab);
        Lbl_DNI->setObjectName("Lbl_DNI");
        Lbl_DNI->setGeometry(QRect(50, 10, 54, 17));
        Lbl_Nombre = new QLabel(tab);
        Lbl_Nombre->setObjectName("Lbl_Nombre");
        Lbl_Nombre->setGeometry(QRect(50, 50, 54, 17));
        Lbl_Apellidos = new QLabel(tab);
        Lbl_Apellidos->setObjectName("Lbl_Apellidos");
        Lbl_Apellidos->setGeometry(QRect(50, 100, 54, 17));
        Lbl_Cargo = new QLabel(tab);
        Lbl_Cargo->setObjectName("Lbl_Cargo");
        Lbl_Cargo->setGeometry(QRect(50, 150, 54, 17));
        Lbl_Edad = new QLabel(tab);
        Lbl_Edad->setObjectName("Lbl_Edad");
        Lbl_Edad->setGeometry(QRect(50, 200, 54, 17));
        Lbl_Genero = new QLabel(tab);
        Lbl_Genero->setObjectName("Lbl_Genero");
        Lbl_Genero->setGeometry(QRect(50, 250, 54, 17));
        Lbl_Salario = new QLabel(tab);
        Lbl_Salario->setObjectName("Lbl_Salario");
        Lbl_Salario->setGeometry(QRect(50, 300, 54, 17));
        Tbx_DNI = new QLineEdit(tab);
        Tbx_DNI->setObjectName("Tbx_DNI");
        Tbx_DNI->setGeometry(QRect(110, 10, 113, 25));
        Tbx_Nombre = new QLineEdit(tab);
        Tbx_Nombre->setObjectName("Tbx_Nombre");
        Tbx_Nombre->setGeometry(QRect(110, 50, 331, 25));
        Tbx_Apellidos = new QLineEdit(tab);
        Tbx_Apellidos->setObjectName("Tbx_Apellidos");
        Tbx_Apellidos->setGeometry(QRect(110, 100, 331, 25));
        Tbx_Cargo = new QLineEdit(tab);
        Tbx_Cargo->setObjectName("Tbx_Cargo");
        Tbx_Cargo->setGeometry(QRect(110, 150, 661, 25));
        Spbx_Edad = new QSpinBox(tab);
        Spbx_Edad->setObjectName("Spbx_Edad");
        Spbx_Edad->setGeometry(QRect(110, 200, 42, 26));
        Spbx_Edad->setMaximum(127);
        Cbx_Genero = new QComboBox(tab);
        Cbx_Genero->addItem(QString());
        Cbx_Genero->addItem(QString());
        Cbx_Genero->addItem(QString());
        Cbx_Genero->addItem(QString());
        Cbx_Genero->addItem(QString());
        Cbx_Genero->addItem(QString());
        Cbx_Genero->addItem(QString());
        Cbx_Genero->addItem(QString());
        Cbx_Genero->addItem(QString());
        Cbx_Genero->setObjectName("Cbx_Genero");
        Cbx_Genero->setGeometry(QRect(110, 250, 181, 25));
        Spbx_Salario = new QDoubleSpinBox(tab);
        Spbx_Salario->setObjectName("Spbx_Salario");
        Spbx_Salario->setGeometry(QRect(110, 300, 81, 26));
        Spbx_Salario->setMaximum(99999.990000000005239);
        Spbx_Salario->setValue(13000.000000000000000);
        Btn_Ingresar = new QPushButton(tab);
        Btn_Ingresar->setObjectName("Btn_Ingresar");
        Btn_Ingresar->setGeometry(QRect(90, 370, 80, 25));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        Tw_Mostrar = new QTableWidget(tab_2);
        Tw_Mostrar->setObjectName("Tw_Mostrar");
        Tw_Mostrar->setGeometry(QRect(-90, -160, 771, 491));
        BtnIniciar = new QPushButton(tab_2);
        BtnIniciar->setObjectName("BtnIniciar");
        BtnIniciar->setGeometry(QRect(220, 70, 90, 29));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        cframe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cframe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        cframe->setMenuBar(menubar);
        statusbar = new QStatusBar(cframe);
        statusbar->setObjectName("statusbar");
        cframe->setStatusBar(statusbar);

        retranslateUi(cframe);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(cframe);
    } // setupUi

    void retranslateUi(QMainWindow *cframe)
    {
        cframe->setWindowTitle(QCoreApplication::translate("cframe", "cframe", nullptr));
        Lbl_DNI->setText(QCoreApplication::translate("cframe", "DNI:", nullptr));
        Lbl_Nombre->setText(QCoreApplication::translate("cframe", "Nombre:", nullptr));
        Lbl_Apellidos->setText(QCoreApplication::translate("cframe", "Apellidos:", nullptr));
        Lbl_Cargo->setText(QCoreApplication::translate("cframe", "Cargo:", nullptr));
        Lbl_Edad->setText(QCoreApplication::translate("cframe", "Edad:", nullptr));
        Lbl_Genero->setText(QCoreApplication::translate("cframe", "G\303\251nero:", nullptr));
        Lbl_Salario->setText(QCoreApplication::translate("cframe", "Salario:", nullptr));
        Cbx_Genero->setItemText(0, QCoreApplication::translate("cframe", "M\303\241sculino", nullptr));
        Cbx_Genero->setItemText(1, QCoreApplication::translate("cframe", "Famenino", nullptr));
        Cbx_Genero->setItemText(2, QCoreApplication::translate("cframe", "Binario", nullptr));
        Cbx_Genero->setItemText(3, QCoreApplication::translate("cframe", "Otro", nullptr));
        Cbx_Genero->setItemText(4, QCoreApplication::translate("cframe", "Ninguno", nullptr));
        Cbx_Genero->setItemText(5, QCoreApplication::translate("cframe", "Hexadecimal", nullptr));
        Cbx_Genero->setItemText(6, QCoreApplication::translate("cframe", "Asexual", nullptr));
        Cbx_Genero->setItemText(7, QCoreApplication::translate("cframe", "Planta", nullptr));
        Cbx_Genero->setItemText(8, QCoreApplication::translate("cframe", "Decepticon", nullptr));

        Btn_Ingresar->setText(QCoreApplication::translate("cframe", "Ingresar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("cframe", "Tab 1", nullptr));
        BtnIniciar->setText(QCoreApplication::translate("cframe", "Iniciar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("cframe", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
