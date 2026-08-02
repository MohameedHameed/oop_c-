#pragma once
#include "Shape.h"
class Circule :
    public Shape
{
private:
    int reduis;


public:
    Circule(int r, string c);
    int area();
    void draw();
    void erase();
};

