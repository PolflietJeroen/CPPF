/*Definition of Complex Class. This class contains overloading operators.*/
#ifndef COMPLEX_H
#define COMPLEX_H

using std::ostream;
using std::istream;

class Complex
{
    friend ostream &operator<<(ostream&, const Complex &);
    friend istream &operator>>(istream&, Complex &);

public: 
    Complex(int = 0, int = 0);//constructor
    Complex operator+(const Complex &) const;//addition
    Complex operator-(const Complex &) const;//subtraction
//    Complex operator*(const Complex &) const;//multiplication
//    const Complex &operator=(const Complex &);//assignment
//    bool const &operator==(const Complex &) const;//equivalent
//    bool const &operator!=(const Complex &) const;//not equivalent
private:
    double real;//real part
    double imaginary;//imaginary part
}; 

    #endif
