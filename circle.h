#ifndef CIRCLE_H
#define CIRCLE_H

#include <QPixmap>
#include <QPainter>
#include <QWidget>
#include <QPaintEvent>


class ImageCircle : public QWidget{
    Q_OBJECT
public:
    ImageCircle() = default;
    ImageCircle(QWidget *perent);
    void paintEvent(QPaintEvent *e) override;
    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;

public slots:
    void setYellow();
    void setGreen();
    void setRed();

private:
    QPixmap mCurrentCircle;
    QPixmap mYellowCircle;
    QPixmap mGreenCircle;
    QPixmap mRedCircle;

    bool isDown = false;

};
#endif // CIRCLE_H
