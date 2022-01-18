#include <iostream>
using namespace std;


void Foo(int *pa, int *pb, int *pc ){
    (*pa)++;
    (*pb) = 5;
    (*pc) = 19;
}

int main()
{
    int a = 1, b = 2, c = 3;
    cout << a << ", "<< b << ", "<< c << ", "<<endl;
    
    Foo(&a, &b, &c);
    cout << a << ", "<< b << ", "<< c << ", "<<endl;
    
    cout << a << endl;

    return 0;
}
