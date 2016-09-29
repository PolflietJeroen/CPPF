#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec (10,0);
    cout << vec.capacity() << " " << vec.size() << '\n';
    int i = 1;
    vector<int> vect;
    for (i = 1; i < 200000000000; i++)
    {
        vect.push_back(42);
        cout << vect.capacity() << " " << vect.size() << '\n';
    }
    cout << vect.capacity() << " " << vect.size() << '\n';

    return 0;
}
