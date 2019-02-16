/********************************************************************************
** Form generated from reading UI file 'writerQosForm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITERQOSFORM_H
#define UI_WRITERQOSFORM_H

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

class Ui_WriterQoS
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
    QRadioButton *ownershipSharedRButt;
    QRadioButton *ownershipExclusiveRButt;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *strengthSpinBox;
    QGroupBox *groupBox_3;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpinBox *prioritySpinBox;
    QGroupBox *groupBox_4;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *durabilityComboBox;
    QButtonGroup *reliabilityButtonGroup;
    QButtonGroup *ownershipButtonGroup;

    void setupUi(QDialog *WriterQoS)
    {
        if (WriterQoS->objectName().isEmpty())
            WriterQoS->setObjectName(QStringLiteral("WriterQoS"));
        WriterQoS->setWindowModality(Qt::ApplicationModal);
        WriterQoS->resize(221, 335);
        buttonBox = new QDialogButtonBox(WriterQoS);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(20, 290, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(WriterQoS);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 201, 51));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 181, 21));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        reliableRButt = new QRadioButton(horizontalLayoutWidget);
        reliabilityButtonGroup = new QButtonGroup(WriterQoS);
        reliabilityButtonGroup->setObjectName(QStringLiteral("reliabilityButtonGroup"));
        reliabilityButtonGroup->addButton(reliableRButt);
        reliableRButt->setObjectName(QStringLiteral("reliableRButt"));
        reliableRButt->setChecked(true);

        horizontalLayout->addWidget(reliableRButt);

        bestEffortRButt = new QRadioButton(horizontalLayoutWidget);
        reliabilityButtonGroup->addButton(bestEffortRButt);
        bestEffortRButt->setObjectName(QStringLiteral("bestEffortRButt"));

        horizontalLayout->addWidget(bestEffortRButt);

        groupBox_2 = new QGroupBox(WriterQoS);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 80, 201, 81));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 181, 51));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        ownershipSharedRButt = new QRadioButton(verticalLayoutWidget);
        ownershipButtonGroup = new QButtonGroup(WriterQoS);
        ownershipButtonGroup->setObjectName(QStringLiteral("ownershipButtonGroup"));
        ownershipButtonGroup->addButton(ownershipSharedRButt);
        ownershipSharedRButt->setObjectName(QStringLiteral("ownershipSharedRButt"));
        ownershipSharedRButt->setChecked(true);

        horizontalLayout_3->addWidget(ownershipSharedRButt);

        ownershipExclusiveRButt = new QRadioButton(verticalLayoutWidget);
        ownershipButtonGroup->addButton(ownershipExclusiveRButt);
        ownershipExclusiveRButt->setObjectName(QStringLiteral("ownershipExclusiveRButt"));

        horizontalLayout_3->addWidget(ownershipExclusiveRButt);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        strengthSpinBox = new QSpinBox(verticalLayoutWidget);
        strengthSpinBox->setObjectName(QStringLiteral("strengthSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(strengthSpinBox->sizePolicy().hasHeightForWidth());
        strengthSpinBox->setSizePolicy(sizePolicy);
        strengthSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        strengthSpinBox->setValue(50);

        horizontalLayout_2->addWidget(strengthSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox_3 = new QGroupBox(WriterQoS);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 230, 201, 51));
        horizontalLayoutWidget_4 = new QWidget(groupBox_3);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 20, 171, 20));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_2);

        prioritySpinBox = new QSpinBox(horizontalLayoutWidget_4);
        prioritySpinBox->setObjectName(QStringLiteral("prioritySpinBox"));
        prioritySpinBox->setValue(50);

        horizontalLayout_5->addWidget(prioritySpinBox);

        groupBox_4 = new QGroupBox(WriterQoS);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 170, 201, 51));
        horizontalLayoutWidget_5 = new QWidget(groupBox_4);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 20, 171, 21));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_3);

        durabilityComboBox = new QComboBox(horizontalLayoutWidget_5);
        durabilityComboBox->setObjectName(QStringLiteral("durabilityComboBox"));

        horizontalLayout_6->addWidget(durabilityComboBox);


        retranslateUi(WriterQoS);
        QObject::connect(buttonBox, SIGNAL(accepted()), WriterQoS, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WriterQoS, SLOT(reject()));

        QMetaObject::connectSlotsByName(WriterQoS);
    } // setupUi

    void retranslateUi(QDialog *WriterQoS)
    {
        WriterQoS->setWindowTitle(QApplication::translate("WriterQoS", "Writer QoS", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("WriterQoS", "Reliability QoS", Q_NULLPTR));
        reliableRButt->setText(QApplication::translate("WriterQoS", "Reliable", Q_NULLPTR));
        bestEffortRButt->setText(QApplication::translate("WriterQoS", "Best Effort", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("WriterQoS", "Ownership QoS", Q_NULLPTR));
        ownershipSharedRButt->setText(QApplication::translate("WriterQoS", "Shared", Q_NULLPTR));
        ownershipExclusiveRButt->setText(QApplication::translate("WriterQoS", "Exclusive", Q_NULLPTR));
        label->setText(QApplication::translate("WriterQoS", "Strength:", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("WriterQoS", "Transport Priority QoS", Q_NULLPTR));
        label_2->setText(QApplication::translate("WriterQoS", "Priority:", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("WriterQoS", "Durability QoS", Q_NULLPTR));
        label_3->setText(QApplication::translate("WriterQoS", "Durability:", Q_NULLPTR));
        durabilityComboBox->clear();
        durabilityComboBox->insertItems(0, QStringList()
         << QApplication::translate("WriterQoS", "Volatile", Q_NULLPTR)
         << QApplication::translate("WriterQoS", "Transient_Local", Q_NULLPTR)
         << QApplication::translate("WriterQoS", "Transient", Q_NULLPTR)
         << QApplication::translate("WriterQoS", "Persistent", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class WriterQoS: public Ui_WriterQoS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITERQOSFORM_H
