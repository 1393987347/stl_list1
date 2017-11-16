#include <iostream>
#include <list>

using namespace std;

int main(void)
{
    list<double> v1;
    v1.push_front(42);
    v1.push_back(43);
    v1.push_front(93);
    v1.push_back(75);
    v1.push_front(84);
    v1.push_back(54);

    list<double> :: iterator itr = v1.begin();
    for(;itr < v1.end(); itr++)
    {
         cout << *itr << '\t';
    }
    cout << endl;
}