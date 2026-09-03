/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogIn
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *Usuario;
    QLabel *label_2;
    QPushButton *IngresarBtn;
    QLineEdit *Clave;
    QLabel *label;
    QLabel *label_utn;

    void setupUi(QDialog *LogIn)
    {
        if (LogIn->objectName().isEmpty())
            LogIn->setObjectName("LogIn");
        LogIn->resize(581, 378);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagenes/utn haedo logo.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        LogIn->setWindowIcon(icon);
        gridLayoutWidget = new QWidget(LogIn);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(160, 120, 241, 155));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Usuario = new QLineEdit(gridLayoutWidget);
        Usuario->setObjectName("Usuario");

        gridLayout->addWidget(Usuario, 2, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        IngresarBtn = new QPushButton(gridLayoutWidget);
        IngresarBtn->setObjectName("IngresarBtn");
        QPalette palette;
        QBrush brush(QColor(170, 255, 127, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush2);
        QBrush brush3(QColor(31, 155, 93, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush1);
        IngresarBtn->setPalette(palette);
        IngresarBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);"));

        gridLayout->addWidget(IngresarBtn, 5, 0, 1, 1);

        Clave = new QLineEdit(gridLayoutWidget);
        Clave->setObjectName("Clave");
        Clave->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(Clave, 4, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_utn = new QLabel(LogIn);
        label_utn->setObjectName("label_utn");
        label_utn->setGeometry(QRect(220, 10, 131, 101));
        label_utn->setMaximumSize(QSize(181, 101));
        label_utn->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/utn haedo logo.jpg")));
        label_utn->setScaledContents(true);

        retranslateUi(LogIn);

        QMetaObject::connectSlotsByName(LogIn);
    } // setupUi

    void retranslateUi(QDialog *LogIn)
    {
        LogIn->setWindowTitle(QCoreApplication::translate("LogIn", "Usuario", nullptr));
        label_2->setText(QCoreApplication::translate("LogIn", "Clave", nullptr));
        IngresarBtn->setText(QCoreApplication::translate("LogIn", "Ingresar", nullptr));
        label->setText(QCoreApplication::translate("LogIn", "Nombre", nullptr));
        label_utn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LogIn: public Ui_LogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
