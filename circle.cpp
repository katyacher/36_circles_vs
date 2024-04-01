#include "circle.h"

ImageCircle::ImageCircle(QWidget *parent){
    setParent(parent);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    mGreenCircle = QPixmap("../circles/green_circle.png");
    mYellowCircle = QPixmap("../circles/yellow_circle.png");
    mRedCircle  = QPixmap("../circles/red_circle.png");
    mCurrentCircle = mGreenCircle;
    setGeometry(mCurrentCircle.rect());


};

void ImageCircle::paintEvent(QPaintEvent *e){
    QPainter p(this);
    p.drawPixmap(e->rect(), mCurrentCircle);
};

QSize ImageCircle::sizeHint()const{
    return QSize(250,250);
};

QSize ImageCircle::minimumSizeHint() const{
    return sizeHint();
};

void ImageCircle::setYellow() {
   mCurrentCircle = mYellowCircle;
   update();
}

void ImageCircle::setGreen() {
   mCurrentCircle = mGreenCircle;
   update();
}

void ImageCircle::setRed() {
   mCurrentCircle = mRedCircle;
   update();
}
