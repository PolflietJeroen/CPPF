#include <iostream>

using namespace std;
int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;
    int year = 2016 - age;
    cout << "You were born in: " << year << "\n";
    return 0;
}
