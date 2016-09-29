#include "shape.h"
#include "circle.h"
#include <iostream>

#define PI = 3.14159

using namespace std;

Circle::Circle(float radius)
{
    radius = radius;
}

float Circle::get_area()
{
    return radius*PI*radius;
}
