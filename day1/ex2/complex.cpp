#include <iostream>

using namespace std;

typedef struct _complex
{
    int real;
    int imag;
} complex;

complex operator+(complex a, complex b);
complex operator-(complex a, complex b);
ostream &operator<<(ostream&output, const complex a);

int main()
{
    complex c;
    complex d;
    c.real = 9;
    c.imag = 7;
    d.real = 2;
    d.imag = 1;
    complex e = c+d;
    complex f = c-d;
    cout << e.real << " + " << e.imag << "i\n";
    cout << f.real << " + " << f.imag << "i\n";
    cout << e << "\n" << f << "\n";
    return 0;
}

complex operator+(complex a, complex b)
{
    complex e;
    e.real = a.real + b.real;
    e.imag = a.imag + b.imag;
    return e;
}

complex operator-(complex a, complex b)
{
    complex e;
    e.real = a.real - b.real;
    e.imag = a.imag - b.imag;
    return e;
}

ostream &operator<<(ostream&output, const complex a)
{
    output << a.real << " + " << a.imag << "i";
    return output;
}
