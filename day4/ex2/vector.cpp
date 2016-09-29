#include<iostream>
#include<vector>
//#include<functional>
//#include<numeric>
//#include<string>

#include <boost/bind.hpp>
#include <boost/lexical_cast.hpp>


using namespace std;
using namespace boost;

int main(int argc, char** argv)
{
    vector<int> argsvec;
    argsvec.reserve(argc-1);
    

    for (int i=1; i<argc; ++i)
    {
        try
        {
            argsvec.push_back(lexical_cast<int>(argv[i]));
        }
        catch(std::exception& except)
        {
            cout << "\n\t" << except.what() << "\n\n";
        }
    }
    cout << argsvec.size() << '-' <<  argsvec.capacity() << "\n \n" ;


    vector<int>::const_reverse_iterator reviter;
    for (reviter = argsvec.rbegin(); reviter!=argsvec.rend(); ++reviter)
        cout << *reviter << '\n';

    cout << '\n';
    cout << *min_element(argsvec.begin(), argsvec.end()) << '\n';
    cout << *max_element(argsvec.begin(), argsvec.end()) << "\n\n";

    sort(argsvec.begin(), argsvec.end(), std::less<int>());
    vector<int>::const_iterator iter;
    for (iter = argsvec.begin(); iter!=argsvec.end(); ++iter)
        cout << *iter << endl;
    cout << '\n';




    return 0;
}
