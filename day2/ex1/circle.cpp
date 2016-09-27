#include "shape.h"
#include "circle.h"
#include <iostream>

using namespace std;

Circle::Circle(float radius)
{
    radius = radius;
}

float Circle::get_area()
{
    return radius*PI*radius;
}
