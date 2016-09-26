#include <iostream>

using namespace std;
int main( int argc, char* argv[])
{
    for( int a = 0; a < argc; a++ )
    {
        cout << argv[a] << endl;
    }
    return 0;
}
