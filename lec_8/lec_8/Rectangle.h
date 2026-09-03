#pragma once
#include "Shape.h"
class Rectangle :
    public Shape
{
private:
    int width;
    int height;



public:
    Rectangle(int w,int h,string c);
    void area();

    void draw();

    void erase();
    void hi();
};

