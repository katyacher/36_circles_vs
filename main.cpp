#include <QApplication>
#include <QVBoxLayout>
#include <QSlider>
#include "circle.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *window = new QWidget;
    auto *circle = new ImageCircle(window);
    auto *slider = new QSlider(Qt::Horizontal);
    slider->setMinimum(0);
    slider->setMaximum(100);

    auto *layout = new QVBoxLayout(window);
    layout->addWidget(circle);
    layout->addWidget(slider);

    QObject::connect(slider, &QSlider::valueChanged, circle, [&slider, &circle](int newValue){
        if( newValue < 33)  circle->setGreen();
        if( newValue >= 33 && newValue < 66)  circle->setYellow();
        if( newValue >= 66)  circle->setRed();
    });

    window->resize(250,250);
    window->move(1000,500);

    window->show();
    return a.exec();
}
