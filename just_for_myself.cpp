#include <iostream>
using namespace std;


void Foo(int *pa/*pa*/  ){
    (*pa)++;
    //pa;
}

int main()
{
    int a = 0;
    cout << a << endl;
    
    Foo(&a);
    //Foo(a);
    cout << a << endl;

    return 0;
}
