#pragma once
#include "Shape.h"
class Circule :
    public Shape
{
private:
    int redius;


public:
    Circule(int r, string c);
    void area();

    void draw();

    void erase();
};

