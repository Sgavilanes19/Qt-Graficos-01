#include "principal.h"
#include "ui_principal.h"

#include <QPainter>

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}

void Principal::paintEvent(QPaintEvent *event)
{
    // Objeto que permite dibujar (Picaso)
    // Se envía como dispositivo a este (this) objeto (Principal)
    QPainter painter(this);

    // Establecer un pincel azul
    painter.setPen(Qt::darkGray);

    // Establecer un tipo de letra y tamaño
    painter.setFont(QFont("Arial", 30));

    // Dibujar un texto
    painter.drawText(rect(), Qt::AlignCenter, "Stefany");
    painter.drawText(0,30, "Hola");

    // Crear un pincel
    QPen pincel;
    pincel.setColor(Qt::red);
    pincel.setWidth(10);
    pincel.setCapStyle(Qt::RoundCap);

    // establecer nuevo pincel
    painter.setPen(pincel);

    // Dibujar una línea
    painter.drawLine(100,100, 200,200);

    // Estableer una brocha
    painter.setBrush(Qt::lightGray);

    // Dibujar un rectangulo
    painter.drawRect(300,100,50,100);

    // Dibujar
    painter.drawLine(650,425, 400,525);
    painter.drawEllipse(650,400,50, 50);
    painter.drawEllipse(400,500,50, 50);
    painter.drawLine(400,700,550,450);
    painter.drawLine(700,700,550,450);
    painter.drawLine(400,700,550,450);
    painter.drawLine(400,698,700,698);



    // Crear un nuevo pincel
    QPen pincel2;
    pincel2.setWidth(5);
    pincel2.setColor(Qt::cyan);
    pincel2.setStyle(Qt::DotLine);

    // Establecer nuevo pincel
    painter.setPen(pincel2);
    painter.setBrush(Qt::green);

    // Dibujar una circunferencia
    painter.drawEllipse(400,100,50, 50);

    // Dibujar un arco
    QRectF rectangle(500.0, 100.0, 50.0, 50.0);
      int startAngle = 30 * 16;
      int spanAngle = 120 * 16;
    painter.drawArc(rectangle,startAngle, spanAngle);
}

