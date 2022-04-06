#pragma once


#include <QTimer>


#include "ghost.h"





class Pinky : public Ghost
{
    Q_OBJECT


    public:

        Pinky(VaxMan* input_vaxmanPointer);
       ~Pinky();


    private:

        QTimer *timer;
};

