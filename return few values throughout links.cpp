#include <iostream>
using namespace std;

void Foo(int &a, int &b, int &c){
    a = 10;
    b*=2;
    c-=100;
}


int main()
{
    int a = 0, b = 1, c = 2;
    cout << "a = : " << a << endl;
    cout << "b = : " << b << endl;
    cout << "c = : " << c << endl<<endl;
    
    Foo(a,b,c);
    cout << "a = : " << a << endl;
    cout << "b = : " << b << endl;
    cout << "c = : " << c << endl;
    
    return 0;
}
