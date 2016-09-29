#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s3("abc");
    string s10("abcdefghij");
    string s15("abcdefghijklmno");
    string s20("abcdefghijklmnopqrst");
    string s30("abcdefghijklmnopqrstuvwxyzabcd");
    string s40("abcdefghijklmnopqrstuvwxyzabcdefghijklmn");
    cout << s3.capacity() << " " << s3.size() << '\n';
    cout << s10.capacity() << " " << s10.size() << '\n';
    cout << s15.capacity() << " " << s15.size() << '\n';
    cout << s20.capacity() << " " << s20.size() << '\n';
    cout << s30.capacity() << " " << s30.size() << '\n';
    cout << s40.capacity() << " " << s40.size() << '\n';
    int i = 1;
    string smax;
    for (i = 1; i < 20000000; i++)
    {
        smax.append(1, 42);
//        cout << smax.capacity() << " " << smax.size() << '\n';
    }
    string smax2(i,42);
    cout << smax.capacity() << " " << smax.size() << '\n';
    cout << smax2.capacity() << " " << smax2.size() << '\n';
    return 0;
}
