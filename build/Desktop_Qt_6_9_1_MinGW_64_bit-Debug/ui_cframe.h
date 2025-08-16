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
#include <QtWidgets/QListWidget>
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
    QPushButton *btnAccept;
    QTableWidget *tw_data;
    QSpinBox *sb_value;
    QLabel *label;
    QPushButton *btnPlus;
    QPushButton *btnMinus;
    QListWidget *lw_res;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName("cframe");
        cframe->resize(800, 600);
        cframe->setStyleSheet(QString::fromUtf8("/* Radio button general */\n"
"QRadioButton {\n"
"    spacing: 8px;  /* espacio entre el c\303\255rculo y el texto */\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"}\n"
"\n"
"/* Indicador (c\303\255rculo) */\n"
"QRadioButton::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border-radius: 9px;        /* c\303\255rculo perfecto */\n"
"    border: 2px solid #1E90FF; /* borde azul */\n"
"    background-color: #fff;    /* fondo blanco */\n"
"}\n"
"\n"
"/* Cuando est\303\241 seleccionado */\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #1E90FF; /* relleno azul */\n"
"    border: 2px solid #1E90FF; \n"
"}\n"
"\n"
"/* Hover sobre el radio button */\n"
"QRadioButton::indicator:hover {\n"
"    border: 2px solid #187bcd;\n"
"}\n"
"\n"
"QSpinBox{\n"
"	font-size: 14px;\n"
"	padding: 6px 12px;\n"
" 	font-family: \"Segoe UI\", sans-serif;\n"
"	border: 2px solid #555555;\n"
"	border-radius: 5px;\n"
"    background-color: #555555;\n"
"    color"
                        ": white;\n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;  /* Arriba derecha */\n"
"    width: 20px;\n"
"}\n"
"\n"
"QSpinBox::up-button:hover {\n"
"    background-color: #AAAAAA;      /* Hover */\n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;  /* Abajo derecha */\n"
"    width: 20px;\n"
"}\n"
"\n"
"QSpinBox::down-button:hover {\n"
"    background-color: #AAAAAA;\n"
"}\n"
"\n"
"QPushButton {\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    font-size: 14px;\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"    border: 2px solid #4CAF50;\n"
"    background-color: #4CAF50;\n"
"    color: white;\n"
"    transition: all 0.3s;\n"
"}\n"
"\n"
"/* Hover efecto */\n"
"QPushButton:hover {\n"
"    background-color: #45a049;\n"
"    border-color: #45a049;\n"
"}\n"
"\n"
"/* Bot\303\263n Aceptar */\n"
"QPushButton#btnAccept {\n"
"    background-color: #1E90FF; /* Azul */\n"
"    b"
                        "order: 2px solid #1E90FF;\n"
"}\n"
"\n"
"QPushButton#btnAccept:hover {\n"
"    background-color: #187bcd;\n"
"    border-color: #187bcd;\n"
"}\n"
"\n"
"/* Bot\303\263n + */\n"
"QPushButton#btnPlus {\n"
"    background-color: #4CAF50; /* Verde */\n"
"    border: 2px solid #4CAF50;\n"
"}\n"
"\n"
"QPushButton#btnPlus:hover {\n"
"    background-color: #45a049;\n"
"    border-color: #45a049;\n"
"}\n"
"\n"
"/* Bot\303\263n - */\n"
"QPushButton#btnMinus {\n"
"    background-color: #f44336; /* Rojo */\n"
"    border: 2px solid #f44336;\n"
"}\n"
"\n"
"QPushButton#btnMinus:hover {\n"
"    background-color: #da2c2c;\n"
"    border-color: #da2c2c;\n"
"}\n"
"\n"
"/* ===========================\n"
"   LABELS\n"
"=========================== */\n"
"QLabel {\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    font-size: 18px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"/* ===========================\n"
"   QTABLEWIDGET\n"
"=========================== */\n"
"QTableWidget {\n"
"    border: 2px solid #ccc;\n"
"    border-radius: 8p"
                        "x;\n"
"	color: #000000;\n"
"    background-color: #f9f9f9;\n"
"    gridline-color: #ddd;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    font-size: 13px;\n"
"}\n"
"\n"
"/* Encabezados */\n"
"QHeaderView::section {\n"
"    background-color: #1E90FF;\n"
"	border: 2px solid #FFFFFF;\n"
"    color: white;\n"
"    padding: 4px;\n"
"    border: none;\n"
"}\n"
"\n"
"/* Selecci\303\263n de fila */\n"
"QTableWidget::item:selected {\n"
"    background-color: #87CEFA;\n"
"    color: #000;\n"
"}\n"
"\n"
"/* ===========================\n"
"   QLISTWIDGET\n"
"=========================== */\n"
"QListWidget {\n"
"    border: 2px solid #ccc;\n"
"    border-radius: 8px;\n"
"	color: #000000;\n"
"    background-color: #fefefe;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    font-size: 13px;\n"
"}\n"
"\n"
"/* Selecci\303\263n */\n"
"QListWidget::item:selected {\n"
"    background-color: #1E90FF;\n"
"    color: white;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"/* Hover en items */\n"
"QListWidget::item:hover {\n"
"   "
                        " background-color: #add8e6;\n"
"}\n"
""));
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
        Tw_Mostrar->setGeometry(QRect(-90, -160, 871, 651));
        btnAccept = new QPushButton(tab_2);
        btnAccept->setObjectName("btnAccept");
        btnAccept->setGeometry(QRect(590, 410, 90, 29));
        tw_data = new QTableWidget(tab_2);
        tw_data->setObjectName("tw_data");
        tw_data->setGeometry(QRect(20, 110, 471, 351));
        sb_value = new QSpinBox(tab_2);
        sb_value->setObjectName("sb_value");
        sb_value->setGeometry(QRect(20, 60, 151, 41));
        label = new QLabel(tab_2);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 241, 31));
        btnPlus = new QPushButton(tab_2);
        btnPlus->setObjectName("btnPlus");
        btnPlus->setGeometry(QRect(210, 70, 41, 29));
        btnMinus = new QPushButton(tab_2);
        btnMinus->setObjectName("btnMinus");
        btnMinus->setGeometry(QRect(260, 70, 41, 29));
        lw_res = new QListWidget(tab_2);
        lw_res->setObjectName("lw_res");
        lw_res->setGeometry(QRect(510, 110, 241, 271));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(510, 80, 241, 20));
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
        btnAccept->setText(QCoreApplication::translate("cframe", "Iniciar", nullptr));
        label->setText(QCoreApplication::translate("cframe", "Ingreso de Datos: ", nullptr));
        btnPlus->setText(QCoreApplication::translate("cframe", "+", nullptr));
        btnMinus->setText(QCoreApplication::translate("cframe", "-", nullptr));
        label_2->setText(QCoreApplication::translate("cframe", "Resultado:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("cframe", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
