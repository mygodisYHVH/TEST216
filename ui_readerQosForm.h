/********************************************************************************
** Form generated from reading UI file 'readerQosForm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READERQOSFORM_H
#define UI_READERQOSFORM_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReaderQos
{
public:
    QDialogButtonBox *OKButt;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout11;
    QRadioButton *reliableRButt;
    QRadioButton *bestEffortRButt;
    QGroupBox *groupBox_4;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *durabilityComboBox;
    QGroupBox *groupBox_5;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *keepAllRButt;
    QRadioButton *keepLastRButton;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QSpinBox *depthSpinBox;
    QGroupBox *groupBox_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *sharedRButt;
    QRadioButton *exclusiveRButt;
    QGroupBox *groupBox_6;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QLineEdit *tbFilterInput;
    QButtonGroup *reliabilityButtonGroup;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *ReaderQos)
    {
        if (ReaderQos->objectName().isEmpty())
            ReaderQos->setObjectName(QStringLiteral("ReaderQos"));
        ReaderQos->setWindowModality(Qt::ApplicationModal);
        ReaderQos->resize(222, 421);
        OKButt = new QDialogButtonBox(ReaderQos);
        OKButt->setObjectName(QStringLiteral("OKButt"));
        OKButt->setGeometry(QRect(20, 380, 171, 32));
        OKButt->setOrientation(Qt::Horizontal);
        OKButt->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(ReaderQos);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 201, 51));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 186, 25));
        horizontalLayout11 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout11->setObjectName(QStringLiteral("horizontalLayout11"));
        horizontalLayout11->setContentsMargins(0, 0, 0, 0);
        reliableRButt = new QRadioButton(horizontalLayoutWidget);
        reliabilityButtonGroup = new QButtonGroup(ReaderQos);
        reliabilityButtonGroup->setObjectName(QStringLiteral("reliabilityButtonGroup"));
        reliabilityButtonGroup->addButton(reliableRButt);
        reliableRButt->setObjectName(QStringLiteral("reliableRButt"));

        horizontalLayout11->addWidget(reliableRButt);

        bestEffortRButt = new QRadioButton(horizontalLayoutWidget);
        reliabilityButtonGroup->addButton(bestEffortRButt);
        bestEffortRButt->setObjectName(QStringLiteral("bestEffortRButt"));
        bestEffortRButt->setChecked(true);

        horizontalLayout11->addWidget(bestEffortRButt);

        groupBox_4 = new QGroupBox(ReaderQos);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 240, 201, 51));
        horizontalLayoutWidget_5 = new QWidget(groupBox_4);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 20, 212, 33));
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

        groupBox_5 = new QGroupBox(ReaderQos);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 140, 201, 91));
        verticalLayoutWidget_2 = new QWidget(groupBox_5);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 30, 183, 61));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        keepAllRButt = new QRadioButton(verticalLayoutWidget_2);
        keepAllRButt->setObjectName(QStringLiteral("keepAllRButt"));

        horizontalLayout_7->addWidget(keepAllRButt);

        keepLastRButton = new QRadioButton(verticalLayoutWidget_2);
        keepLastRButton->setObjectName(QStringLiteral("keepLastRButton"));
        keepLastRButton->setChecked(true);

        horizontalLayout_7->addWidget(keepLastRButton);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_4);

        depthSpinBox = new QSpinBox(verticalLayoutWidget_2);
        depthSpinBox->setObjectName(QStringLiteral("depthSpinBox"));
        depthSpinBox->setMinimum(1);
        depthSpinBox->setMaximum(100);

        horizontalLayout_8->addWidget(depthSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_8);

        groupBox_2 = new QGroupBox(ReaderQos);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 80, 201, 51));
        horizontalLayoutWidget_2 = new QWidget(groupBox_2);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 20, 181, 24));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sharedRButt = new QRadioButton(horizontalLayoutWidget_2);
        buttonGroup = new QButtonGroup(ReaderQos);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(sharedRButt);
        sharedRButt->setObjectName(QStringLiteral("sharedRButt"));
        sharedRButt->setChecked(true);

        horizontalLayout->addWidget(sharedRButt);

        exclusiveRButt = new QRadioButton(horizontalLayoutWidget_2);
        buttonGroup->addButton(exclusiveRButt);
        exclusiveRButt->setObjectName(QStringLiteral("exclusiveRButt"));

        horizontalLayout->addWidget(exclusiveRButt);

        groupBox_6 = new QGroupBox(ReaderQos);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 310, 201, 51));
        horizontalLayoutWidget_6 = new QWidget(groupBox_6);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(10, 20, 212, 33));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_5);

        tbFilterInput = new QLineEdit(horizontalLayoutWidget_6);
        tbFilterInput->setObjectName(QStringLiteral("tbFilterInput"));
        tbFilterInput->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_9->addWidget(tbFilterInput);


        retranslateUi(ReaderQos);
        QObject::connect(OKButt, SIGNAL(accepted()), ReaderQos, SLOT(accept()));
        QObject::connect(OKButt, SIGNAL(rejected()), ReaderQos, SLOT(reject()));

        QMetaObject::connectSlotsByName(ReaderQos);
    } // setupUi

    void retranslateUi(QDialog *ReaderQos)
    {
        ReaderQos->setWindowTitle(QApplication::translate("ReaderQos", "Reader QoS", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ReaderQos", "Reliability QoS", Q_NULLPTR));
        reliableRButt->setText(QApplication::translate("ReaderQos", "Reliable", Q_NULLPTR));
        bestEffortRButt->setText(QApplication::translate("ReaderQos", "Best Effort", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("ReaderQos", "Durability QoS", Q_NULLPTR));
        label_3->setText(QApplication::translate("ReaderQos", "Durability:", Q_NULLPTR));
        durabilityComboBox->clear();
        durabilityComboBox->insertItems(0, QStringList()
         << QApplication::translate("ReaderQos", "Volatile", Q_NULLPTR)
         << QApplication::translate("ReaderQos", "Transient_Local", Q_NULLPTR)
         << QApplication::translate("ReaderQos", "Transient", Q_NULLPTR)
         << QApplication::translate("ReaderQos", "Persistent", Q_NULLPTR)
        );
        groupBox_5->setTitle(QApplication::translate("ReaderQos", "History QoS", Q_NULLPTR));
        keepAllRButt->setText(QApplication::translate("ReaderQos", "Keep All", Q_NULLPTR));
        keepLastRButton->setText(QApplication::translate("ReaderQos", "Keep Last", Q_NULLPTR));
        label_4->setText(QApplication::translate("ReaderQos", "Depth:", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ReaderQos", "Ownership QoS", Q_NULLPTR));
        sharedRButt->setText(QApplication::translate("ReaderQos", "Shared", Q_NULLPTR));
        exclusiveRButt->setText(QApplication::translate("ReaderQos", "Exclusive", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("ReaderQos", "Time Based Filter QoS", Q_NULLPTR));
        label_5->setText(QApplication::translate("ReaderQos", "Min Sep:", Q_NULLPTR));
        tbFilterInput->setText(QApplication::translate("ReaderQos", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ReaderQos: public Ui_ReaderQos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READERQOSFORM_H
