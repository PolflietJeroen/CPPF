#include <iostream>
#include <utility>
using namespace std;

template<class T> T sum_of(const T* array, size_t f, size_t l, T value) {
    const T* stop=array+l;
    T sum = value;
    for (array = array+f; array <= stop; ++array)
    {
        sum += *array;
    }
    return sum;
}


template<class T> T sum(T one, T two) {
    return one + two;
}

template<class T> void my_swap(T& one, T& two) {
    T three = one;
    one = two;
    two = three;
}

template<class T> T my_max(T one, T two) {
    return one > two ? one : two;
}

int main()
{
    int a = 4;
    int b = 9;
    int c = my_max(a, b);
    cout << c << '\n';
    cout << a << " " << b << '\n';
    my_swap(a, b);
    cout << a << " " << b << '\n';
    int d = sum(a, b);
    cout << d << '\n';
    int al[] = { a, b, d };
    int as = sum_of(al, 0, 2, 0);
    cout << "as: " << as << '\n' << '\n';

    float m = 0;
    float i = 4.98;
    float j = 9.75;
    float k = my_max(i, j);
    cout << k << '\n';
    cout << i << " " << j << '\n';
    my_swap(i, j);
    cout << i << " " << j << '\n';
    float l = sum(i, j);
    cout << l << '\n';
    float ll[] = { i, j, l};
    float ls = sum_of(ll, 0, 2, m);
    cout << "ls: " << ls << '\n' << '\n';


    return 0;
}
