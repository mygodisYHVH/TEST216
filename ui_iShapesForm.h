/********************************************************************************
** Form generated from reading UI file 'iShapesForm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISHAPESFORM_H
#define UI_ISHAPESFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShapesDialog
{
public:
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *wShapeLabel;
    QLabel *colorLabel;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QComboBox *wShapeList;
    QComboBox *colorList;
    QSlider *sizeSlider;
    QSlider *speedSlider;
    QPushButton *pubQosButton;
    QPushButton *createWriterButton;
    QFrame *frame_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *rShapeList;
    QPushButton *subQosButton;
    QPushButton *filterButton;
    QPushButton *createReaderButton;
    QFrame *renderFrame;

    void setupUi(QDialog *ShapesDialog)
    {
        if (ShapesDialog->objectName().isEmpty())
            ShapesDialog->setObjectName(QStringLiteral("ShapesDialog"));
        ShapesDialog->setWindowModality(Qt::NonModal);
        ShapesDialog->setEnabled(true);
        ShapesDialog->resize(518, 378);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ShapesDialog->sizePolicy().hasHeightForWidth());
        ShapesDialog->setSizePolicy(sizePolicy);
        ShapesDialog->setMinimumSize(QSize(518, 378));
        ShapesDialog->setMaximumSize(QSize(518, 378));
        ShapesDialog->setFocusPolicy(Qt::ClickFocus);
        ShapesDialog->setSizeGripEnabled(true);
        ShapesDialog->setModal(false);
        frame = new QFrame(ShapesDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 171, 201));
        QFont font;
        font.setPointSize(10);
        frame->setFont(font);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 151, 181));
        layoutWidget->setFont(font);
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        wShapeLabel = new QLabel(layoutWidget);
        wShapeLabel->setObjectName(QStringLiteral("wShapeLabel"));
        QFont font1;
        font1.setFamily(QStringLiteral("Sans Serif"));
        font1.setPointSize(9);
        font1.setKerning(false);
        font1.setStyleStrategy(QFont::PreferAntialias);
        wShapeLabel->setFont(font1);
        wShapeLabel->setLayoutDirection(Qt::LeftToRight);
        wShapeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(wShapeLabel);

        colorLabel = new QLabel(layoutWidget);
        colorLabel->setObjectName(QStringLiteral("colorLabel"));
        colorLabel->setFont(font1);
        colorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(colorLabel);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        wShapeList = new QComboBox(layoutWidget);
        wShapeList->setObjectName(QStringLiteral("wShapeList"));
        wShapeList->setFont(font1);

        verticalLayout_2->addWidget(wShapeList);

        colorList = new QComboBox(layoutWidget);
        colorList->setObjectName(QStringLiteral("colorList"));
        colorList->setFont(font1);

        verticalLayout_2->addWidget(colorList);

        sizeSlider = new QSlider(layoutWidget);
        sizeSlider->setObjectName(QStringLiteral("sizeSlider"));
        sizeSlider->setMinimum(10);
        sizeSlider->setMaximum(100);
        sizeSlider->setSingleStep(10);
        sizeSlider->setPageStep(20);
        sizeSlider->setValue(45);
        sizeSlider->setSliderPosition(45);
        sizeSlider->setOrientation(Qt::Horizontal);
        sizeSlider->setTickPosition(QSlider::TicksBelow);
        sizeSlider->setTickInterval(5);

        verticalLayout_2->addWidget(sizeSlider);

        speedSlider = new QSlider(layoutWidget);
        speedSlider->setObjectName(QStringLiteral("speedSlider"));
        speedSlider->setMinimum(10);
        speedSlider->setMaximum(100);
        speedSlider->setSingleStep(10);
        speedSlider->setPageStep(20);
        speedSlider->setValue(45);
        speedSlider->setSliderPosition(45);
        speedSlider->setOrientation(Qt::Horizontal);
        speedSlider->setTickPosition(QSlider::TicksBelow);
        speedSlider->setTickInterval(5);

        verticalLayout_2->addWidget(speedSlider);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        pubQosButton = new QPushButton(layoutWidget);
        pubQosButton->setObjectName(QStringLiteral("pubQosButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pubQosButton->sizePolicy().hasHeightForWidth());
        pubQosButton->setSizePolicy(sizePolicy1);
        pubQosButton->setFont(font1);
        pubQosButton->setFlat(false);

        verticalLayout_3->addWidget(pubQosButton);

        createWriterButton = new QPushButton(layoutWidget);
        createWriterButton->setObjectName(QStringLiteral("createWriterButton"));
        sizePolicy1.setHeightForWidth(createWriterButton->sizePolicy().hasHeightForWidth());
        createWriterButton->setSizePolicy(sizePolicy1);
        createWriterButton->setFont(font1);

        verticalLayout_3->addWidget(createWriterButton);

        frame_2 = new QFrame(ShapesDialog);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 220, 171, 151));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        layoutWidget2 = new QWidget(frame_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 10, 151, 137));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        rShapeList = new QComboBox(layoutWidget2);
        rShapeList->setObjectName(QStringLiteral("rShapeList"));
        rShapeList->setFont(font1);

        horizontalLayout_2->addWidget(rShapeList);


        verticalLayout_4->addLayout(horizontalLayout_2);

        subQosButton = new QPushButton(layoutWidget2);
        subQosButton->setObjectName(QStringLiteral("subQosButton"));
        subQosButton->setFont(font1);

        verticalLayout_4->addWidget(subQosButton);

        filterButton = new QPushButton(layoutWidget2);
        filterButton->setObjectName(QStringLiteral("filterButton"));
        filterButton->setFont(font1);

        verticalLayout_4->addWidget(filterButton);

        createReaderButton = new QPushButton(layoutWidget2);
        createReaderButton->setObjectName(QStringLiteral("createReaderButton"));
        createReaderButton->setFont(font1);

        verticalLayout_4->addWidget(createReaderButton);

        renderFrame = new QFrame(ShapesDialog);
        renderFrame->setObjectName(QStringLiteral("renderFrame"));
        renderFrame->setGeometry(QRect(190, 10, 321, 361));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(renderFrame->sizePolicy().hasHeightForWidth());
        renderFrame->setSizePolicy(sizePolicy2);
        renderFrame->setMinimumSize(QSize(240, 360));
        renderFrame->setMaximumSize(QSize(500, 380));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        renderFrame->setPalette(palette);
        renderFrame->setAutoFillBackground(true);
        renderFrame->setFrameShape(QFrame::StyledPanel);
        renderFrame->setFrameShadow(QFrame::Raised);
        frame_2->raise();
        renderFrame->raise();
        frame->raise();

        retranslateUi(ShapesDialog);
        QObject::connect(createWriterButton, SIGNAL(clicked()), ShapesDialog, SLOT(onPublishButtonClicked()));
        QObject::connect(createReaderButton, SIGNAL(clicked()), ShapesDialog, SLOT(onSubscribeButtonClicked()));
        QObject::connect(pubQosButton, SIGNAL(clicked()), ShapesDialog, SLOT(onWriterQosButtonClicked()));
        QObject::connect(subQosButton, SIGNAL(clicked()), ShapesDialog, SLOT(onReaderQosButtonClicked()));
        QObject::connect(filterButton, SIGNAL(clicked()), ShapesDialog, SLOT(onFilterButtonClicked()));

        pubQosButton->setDefault(false);


        QMetaObject::connectSlotsByName(ShapesDialog);
    } // setupUi

    void retranslateUi(QDialog *ShapesDialog)
    {
        ShapesDialog->setWindowTitle(QApplication::translate("ShapesDialog", "OpenDDS - iShapes Demo", Q_NULLPTR));
        wShapeLabel->setText(QApplication::translate("ShapesDialog", "Shape:", Q_NULLPTR));
        colorLabel->setText(QApplication::translate("ShapesDialog", "Color:", Q_NULLPTR));
        label->setText(QApplication::translate("ShapesDialog", "Size:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ShapesDialog", "Speed:", Q_NULLPTR));
        wShapeList->clear();
        wShapeList->insertItems(0, QStringList()
         << QApplication::translate("ShapesDialog", "Circle", Q_NULLPTR)
         << QApplication::translate("ShapesDialog", "Square", Q_NULLPTR)
         << QApplication::translate("ShapesDialog", "Triangle", Q_NULLPTR)
        );
        colorList->clear();
        colorList->insertItems(0, QStringList()
         << QApplication::translate("ShapesDialog", "Blue", Q_NULLPTR)
         << QApplication::translate("ShapesDialog", "Red", Q_NULLPTR)
         << QApplication::translate("ShapesDialog", "Green", Q_NULLPTR)
         << QApplication::translate("ShapesDialog", "Orange", Q_NULLPTR)
         << QApplication::translate("ShapesDialog", "Yellow", Q_NULLPTR)
         << QApplication::translate("ShapesDialog", "Magenta", Q_NULLPTR)
         << QApplication::translate("ShapesDialog", "Cyan", Q_NULLPTR)
         << QApplication::translate("ShapesDialog", "Gray", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        pubQosButton->setToolTip(QApplication::translate("ShapesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Click to set custom QoS</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pubQosButton->setText(QApplication::translate("ShapesDialog", "QoS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        createWriterButton->setToolTip(QApplication::translate("ShapesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Click Publish Topic</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        createWriterButton->setText(QApplication::translate("ShapesDialog", "Publish", Q_NULLPTR));
        label_3->setText(QApplication::translate("ShapesDialog", "Shape:", Q_NULLPTR));
        rShapeList->clear();
        rShapeList->insertItems(0, QStringList()
         << QApplication::translate("ShapesDialog", "Circle", Q_NULLPTR)
         << QApplication::translate("ShapesDialog", "Square", Q_NULLPTR)
         << QApplication::translate("ShapesDialog", "Triangle", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        subQosButton->setToolTip(QApplication::translate("ShapesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Click to set custom QoS</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        subQosButton->setText(QApplication::translate("ShapesDialog", "QoS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        filterButton->setToolTip(QApplication::translate("ShapesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Click to set custom filters</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        filterButton->setText(QApplication::translate("ShapesDialog", "Filter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        createReaderButton->setToolTip(QApplication::translate("ShapesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Click Subscribe to Topic</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        createReaderButton->setText(QApplication::translate("ShapesDialog", "Subscribe", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShapesDialog: public Ui_ShapesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISHAPESFORM_H
