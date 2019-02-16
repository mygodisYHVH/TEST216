#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTimer>

#include "ShapeTypeTypeSupportC.h"
#include <WriterQosDialog.hpp>
#include <ReaderQosDialog.hpp>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    public:
    enum { CIRCLE = 0, SQUARE = 1, TRIANGLE = 2 };

    enum {
      BLUE    = 0,
      RED     = 1,
      GREEN   = 2,
      ORANGE  = 3,
      YELLOW  = 4,
      MAGENTA = 5,
      CYAN    = 6,
      GRAY    = 7,
      BLACK   = 8
    };

public:
    explicit MainWindow(DDS::DomainParticipant_var participant,
                        const std::string& partition,
                        int defaultSize);
    ~MainWindow();
    ReaderQosDialog   readerQos_;
    WriterQosDialog   writerQos_;
private:
    Ui::MainWindow *ui;
    QTimer                     timer;
    DDS::Topic_var             circleTopic_;
    DDS::Topic_var             squareTopic_;
    DDS::Topic_var             triangleTopic_;
    DDS::DomainParticipant_var participant_;
    DDS::Publisher_var         publisher_;
    DDS::Subscriber_var        subscriber_;
    std::string                filterExpression_;
    DDS::StringSeq             filterParams_;
};

#endif // MAINWINDOW_H
