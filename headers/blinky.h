#pragma once


#include <QTimer>


#include "ghost.h"





class Blinky : public Ghost
{
    Q_OBJECT


    public:

        Blinky(VaxMan* input_vaxmanPointer);
       ~Blinky();


    private:

        QTimer *timer;
};

