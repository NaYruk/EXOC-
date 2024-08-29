#include <iostream>
using namespace std;

int main ()

{
int a;
int b;
int c;
cout << "saisir trois nombres entiers" << endl;
cin >> a >> b >> c;

    if (a >= b && a >= c) 
    {
        cout << "Le plus grand nombre est : " << a << endl;
    } 
    else if (b >= a && b >= c) 
    {
        cout << "Le plus grand nombre est : " << b << endl;
    } 
    else 
    {
        cout << "Le plus grand nombre est : " << c << endl;
    }

    return 0;
}
