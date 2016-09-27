#include "mystring.hpp"
#include <iostream>

int main()
{
    MyString str1;
    cout << "give string: ";
    cin >> str1;

    MyString str2;
    cout << "give string: ";
    cin >> str2;

    bool equal;
    if (str1 == str2)
    {
        equal = true;
    }
    else 
    {
        equal = false;
    }
    cout << equal << '\n';

    str2 = str1;

    cout << str2 << '\n';

    if (str1 == str2)
    {
        equal = true;
    }
    else 
    {
        equal = false;
    }
    cout << equal << '\n';

    MyString str3 = str1 + str2;

    cout << str3 << '\n';



}
