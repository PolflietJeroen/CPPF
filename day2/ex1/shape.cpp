#include "shape.h"
#include "triangle.h"
#include "circle.h"
#include "square.h"
#include <iostream>

using namespace std;

Shape::Shape()
{
    area = 0;
}

float Shape::get_area()
{
    return area;
}
