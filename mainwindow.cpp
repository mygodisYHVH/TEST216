#include "config.hpp"

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <BouncingShapeDynamics.hpp>
#include <DDSShapeDynamics.hpp>
#include <dds/DCPS/Marked_Default_Qos.h>
#include <dds/DdsDcpsInfrastructureC.h>

#include "ace/config-all.h"
#include "ShapeTypeTypeSupportImpl.h"

#ifdef ACE_HAS_CPP11
# include <string>
# define TO_STRING std::to_string
#else
# include <boost/lexical_cast.hpp>
# define TO_STRING boost::lexical_cast<std::string>
#endif

using org::omg::dds::demo::ShapeType;
using org::omg::dds::demo::ShapeTypeTypeSupport_var;
using org::omg::dds::demo::ShapeTypeTypeSupportImpl;
using org::omg::dds::demo::ShapeTypeDataWriter;
using org::omg::dds::demo::ShapeTypeDataWriter_var;
using org::omg::dds::demo::ShapeTypeDataReader;
using org::omg::dds::demo::ShapeTypeDataReader_var;

static const float PI = 3.1415926535F;

static QColor  color_[CN];

const char* const colorString_[] = {
  "BLUE",
  "RED",
  "GREEN",
  "ORANGE",
  "YELLOW",
  "MAGENTA",
  "CYAN",
  "GRAY",
  "BLACK"
};

static const std::string circleTopicName("Circle");
static const std::string squareTopicName("Square");
static const std::string triangleTopicName("Triangle");

//MainWindow::MainWindow(QWidget *parent) :
//    QMainWindow(parent),
//    ui(new Ui::MainWindow)
//{
//    ui->setupUi(this);
//}

MainWindow::MainWindow(DDS::DomainParticipant_var participant,
                       const std::string &partition, int defaultSize)
    :   timer(this),
        participant_(participant),
        filterExpression_("(x BETWEEN %0 AND %1) AND (y BETWEEN %2 AND %3)")
{
    DDS::TopicQos topic_qos;
    participant->get_default_topic_qos(topic_qos);
    topic_qos.history.kind = DDS::KEEP_LAST_HISTORY_QOS;
    topic_qos.history.depth = 100;
    // Register TypeSupport (ShapeType)
    ShapeTypeTypeSupport_var ts =
      new ShapeTypeTypeSupportImpl;

    CORBA::String_var type_name = "ShapeType";
    if (ts->register_type(participant, type_name) != DDS::RETCODE_OK) {
//        std::cout << "Could not register type " << std::endl;
    }

//    circleTopic_ =
//      participant->create_topic(circleTopicName.c_str(),
//                                type_name,
//                                topic_qos,
//                                0,
//                                OpenDDS::DCPS::DEFAULT_STATUS_MASK);
//    if (!circleTopic_) {
//        std::cerr << "Could not create topic " << circleTopicName << std::endl;
//    }

//    squareTopic_ =
//      participant->create_topic(squareTopicName.c_str(),
//                                type_name,
//                                topic_qos,
//                                0,
//                                OpenDDS::DCPS::DEFAULT_STATUS_MASK);
//    if (!squareTopic_) {
//        std::cerr << "Could not create topic " << squareTopicName << std::endl;
//    }

//    triangleTopic_ =
//      participant->create_topic(triangleTopicName.c_str(),
//                                type_name,
//                                topic_qos,
//                                0,
//                                OpenDDS::DCPS::DEFAULT_STATUS_MASK);
//    if (!triangleTopic_) {
//        std::cerr << "Could not create topic " << triangleTopicName << std::endl;
//    }

    DDS::PublisherQos pub_qos;
    participant->get_default_publisher_qos(pub_qos);
    if (!partition.empty()) {
      pub_qos.partition.name.length(1);
      pub_qos.partition.name[0] = partition.c_str();
    }
    // Create Publisher
    publisher_ =
      participant->create_publisher(pub_qos,
                                    0,
                                    OpenDDS::DCPS::DEFAULT_STATUS_MASK);

    if (!publisher_) {
//        std::cerr << "Could not create publisher " << std::endl;
    }
    writerQos_.setPublisher(publisher_);

    DDS::SubscriberQos sub_qos;
    participant->get_default_subscriber_qos(sub_qos);
    if (!partition.empty()) {
      sub_qos.partition.name.length(1);
      sub_qos.partition.name[0] = partition.c_str();
    }
    // Create Subscriber
    subscriber_ =
      participant->create_subscriber(sub_qos,
                                     0,
                                     OpenDDS::DCPS::DEFAULT_STATUS_MASK);

    if (!subscriber_) {
//        std::cerr << "Could not create subscriber " << std::endl;
    }

    readerQos_.setSubscriber(subscriber_);

    ui->setupUi(this);
//    shapesWidget = new ShapesWidget(mainWidget.renderFrame);
//    shapesWidget->resize(mainWidget.renderFrame->size());
//    filterDialog_ = new FilterDialog(shapesWidget);
//    connect(&timer, SIGNAL(timeout()),
//      shapesWidget, SLOT(nextAnimationFrame()));

    color_[BLUE] = QColor(0x33, 0x66, 0x99);
    color_[RED] = QColor(0xCC, 0x33, 0x33);
    color_[GREEN] = QColor(0x99, 0xCC, 0x66);
    color_[ORANGE] = QColor(0xFF, 0x99, 0x33);
    color_[YELLOW] = QColor(0xFF, 0xFF, 0x66);
    color_[MAGENTA] = QColor(0xCC, 0x99, 0xCC);
    color_[CYAN] = QColor(0x99, 0xCC, 0xFF);
    color_[GRAY] = QColor(0x99, 0x99, 0x99);
    color_[BLACK] = QColor(0x33, 0x33, 0x33);

//    const int index = ui->colorList->findText("Orange");
//    ui->colorList->setCurrentIndex(index);

//    if (defaultSize) {
//      ui->sizeSlider->setValue(defaultSize);
//    }

    timer.start(40);

    if (partition.length()) {
      QString title = this->windowTitle();
      title += (" PARTITION: " + partition).c_str();
      this->setWindowTitle(title);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
