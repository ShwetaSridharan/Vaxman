#pragma once


#include <QTimer>


#include "ghost.h"





class Clyde : public Ghost
{
    Q_OBJECT


    public:

        Clyde(VaxMan* input_vaxmanPointer);
       ~Clyde();


    private:

        QTimer *timer;
};

