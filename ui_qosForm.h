/********************************************************************************
** Form generated from reading UI file 'qosForm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QOSFORM_H
#define UI_QOSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *reliableRButt;
    QRadioButton *bestEffortRButt;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *ownershipStrengthSpinBox;
    QGroupBox *groupBox_3;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpinBox *spinBox;
    QGroupBox *groupBox_4;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *comboBox;
    QButtonGroup *reliabilityButtonGroup;
    QButtonGroup *ownershipButtonGroup;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(445, 416);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(120, 380, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 201, 71));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 181, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        reliableRButt = new QRadioButton(horizontalLayoutWidget);
        reliabilityButtonGroup = new QButtonGroup(Dialog);
        reliabilityButtonGroup->setObjectName(QStringLiteral("reliabilityButtonGroup"));
        reliabilityButtonGroup->addButton(reliableRButt);
        reliableRButt->setObjectName(QStringLiteral("reliableRButt"));

        horizontalLayout->addWidget(reliableRButt);

        bestEffortRButt = new QRadioButton(horizontalLayoutWidget);
        reliabilityButtonGroup->addButton(bestEffortRButt);
        bestEffortRButt->setObjectName(QStringLiteral("bestEffortRButt"));
        bestEffortRButt->setChecked(true);

        horizontalLayout->addWidget(bestEffortRButt);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 100, 201, 121));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 181, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButton = new QRadioButton(verticalLayoutWidget);
        ownershipButtonGroup = new QButtonGroup(Dialog);
        ownershipButtonGroup->setObjectName(QStringLiteral("ownershipButtonGroup"));
        ownershipButtonGroup->addButton(radioButton);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(verticalLayoutWidget);
        ownershipButtonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_3->addWidget(radioButton_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        ownershipStrengthSpinBox = new QSpinBox(verticalLayoutWidget);
        ownershipStrengthSpinBox->setObjectName(QStringLiteral("ownershipStrengthSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ownershipStrengthSpinBox->sizePolicy().hasHeightForWidth());
        ownershipStrengthSpinBox->setSizePolicy(sizePolicy);
        ownershipStrengthSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ownershipStrengthSpinBox->setValue(50);

        horizontalLayout_2->addWidget(ownershipStrengthSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 230, 201, 61));
        horizontalLayoutWidget_4 = new QWidget(groupBox_3);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 20, 181, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_2);

        spinBox = new QSpinBox(horizontalLayoutWidget_4);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setValue(50);

        horizontalLayout_5->addWidget(spinBox);

        groupBox_4 = new QGroupBox(Dialog);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(240, 20, 201, 61));
        horizontalLayoutWidget_5 = new QWidget(groupBox_4);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 20, 181, 31));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_3);

        comboBox = new QComboBox(horizontalLayoutWidget_5);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_6->addWidget(comboBox);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Dialog", "Reliability QoS", Q_NULLPTR));
        reliableRButt->setText(QApplication::translate("Dialog", "Reliable", Q_NULLPTR));
        bestEffortRButt->setText(QApplication::translate("Dialog", "Best Effort", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Dialog", "Ownership QoS", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Dialog", "Shared", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Dialog", "Exclusive", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "Strength:", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Dialog", "Transport Priority QoS", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog", "Priority:", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Dialog", "Durability QoS", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "Durability:", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Volatile", Q_NULLPTR)
         << QApplication::translate("Dialog", "Transient_Local", Q_NULLPTR)
         << QApplication::translate("Dialog", "Transient", Q_NULLPTR)
         << QApplication::translate("Dialog", "Persistent", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QOSFORM_H
