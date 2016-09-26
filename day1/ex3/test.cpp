#include <iostream>
#include "complex.h"

int main()
{
	Complex a;
	Complex b;
	
	std::cout << "Enter First complex number: ";
	std::cin >> a;
	std::cout << "Enter second complex number: ";
	std::cin >> b;

    Complex c = a+b;

    std::cout << c << "\n";
    c = a-b;
    std::cout << c << "\n";
//    std::cout << a*b << "\n";
//    std::cout << a==b << "\n";
//    std::cout << a/=b << "\n";
//    Complex c = a;
//    std::cout << c << "\n";

	return 0;	
}
