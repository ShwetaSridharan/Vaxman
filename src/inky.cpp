#include "app.h"

#include "inky.h"





Inky::Inky(VaxMan* input_vaxmanPointer) : Ghost (input_vaxmanPointer, 9, 10)
{
    setPixmap(QPixmap(":/pics/inky"));

    add_graphics_item_to_scene((QGraphicsItem *) this);

    direction = LEFT;

    timer = new QTimer(this);
    QObject::connect (timer, &QTimer::timeout, this, &Ghost::move_ghost);
    timer->start (400);
}


Inky::~Inky()
{
    delete timer;
}

