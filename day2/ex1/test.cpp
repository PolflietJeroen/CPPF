#include "shape.h"
#include "circle.h"
#include "triangle.h"
#include "square.h"
#include <iostream>

using namespace std;

float Call_get_area(const Shape& bp);

int main()
{
    Shape s = Shape();
/*    Circle a = Circle(9);
    Square b = Square(7);
    Triangle c = Triangle(4,5);
    float d = Call_get_area(a);
    cout << d << '\n';

    cout << Call_get_area(b) << '\n';

    cout << Call_get_area(c) << '\n';
    */cout << Call_get_area(s) << '\n';
    return 0;
}

float Call_get_area(const Shape& bp)
{
   float u = bp.get_area();
   return u;
}
