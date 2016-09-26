#include <iostream>

//using namespace std;
short max(short a, short b);
int max (int a, int b);
int main()
{
    char c = 9;
    char d = 2;
    max(c, d);
    //cout << max(c, d) << "\n";
    return 0;
}

int max (int a, int b)
{
    std::cout << " int " << "\n";
    return a > b ? a : b;
}

short max(short a, short b)
{
    std::cout << " short " << "\n";
    return a > b ? a : b;
}

