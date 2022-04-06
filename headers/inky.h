#pragma once


#include <QTimer>


#include "ghost.h"





class Inky : public Ghost
{
    Q_OBJECT


    public:

        Inky(VaxMan* input_vaxmanPointer);
       ~Inky();


    private:

        QTimer *timer;
};

