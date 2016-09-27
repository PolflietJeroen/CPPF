#include "shape.h"
#include "triangle.h"
#include <iostream>

using namespace std;


Triangle::Triangle(float base, float height)
{
    base = base;
    height = height;
}

float Triangle::get_area()
{
    return (0.5*base*height);
}
