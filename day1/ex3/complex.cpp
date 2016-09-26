//Definition of Member Functions of the Complex Class

#include <iostream>

using std::cout;
using std::ostream;
using std::istream;

#include "complex.h"

//Constructor
Complex::Complex(int r, int i):real(r), imaginary(i){}

Complex Complex::operator+(const Complex &operand2) const
{
    return Complex(real + operand2.real, imaginary +operand2.imaginary);
}
Complex Complex::operator-(const Complex &operand2) const
{
    return Complex(real - operand2.real, imaginary - operand2.imaginary);
}
/*
const Complex& Complex::operator=(const Complex &right) 
{
    real = right.real;
    imaginary = right.imaginary;
    return *this;
};
Complex Complex::operator*(const Complex &operand2) const
{
    return((real *operand2.real)-(real*operand2.imaginary), (real*operand2.imaginary)-(imaginary*operand2.real));
}

bool Complex::operator==(const Complex &right) const
{

    if ((real == right.real) && (imaginary == right.imaginary))
        return true;
    else
        return false;
 }
bool Complex::operator!=(const Complex &right) const{
    if ((real != right.real) && (imaginary != right.imaginary))
        return true;
    else
        return false;
}
*/
ostream &operator<<(ostream&output, const Complex &complex){
    output << '(' << complex.real << "," << complex.imaginary << ')';
    return output;
};
istream &operator>>(istream&input, Complex &complex){
    input.ignore();
    input >> complex.real;
    input.ignore();
    input >> complex.imaginary;
    input.ignore();
    return input;
}
