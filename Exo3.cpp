#include <iostream>

using namespace std;

int main ()
{
int a;
int b;
int c;
cout << "saisir deux entiers" << endl;
cin >> a >> b;
c=b;
b=a;
a=c;
cout << a << " " << b << endl;
}
