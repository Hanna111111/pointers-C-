#include <iostream>
using namespace std;

//simple
void Foo1(int a){
    a=1;//just local
}

//pointer
void Foo2(int *a){
    *a = 2;
}

//link
void Foo3(int &a){
    a = 3;
}

int main()
{
    int value = 5;
    
    int *b = &value;
    
    cout<<b<<endl;
    cout << "Value: " << value << endl;
    
    Foo1(value);
    cout << "Value(Foo1):  " << value << endl;
    
    Foo2(&value);
    cout << "Value(Foo2):  " << value << endl;
    
    Foo3(value);
    cout << "Value(Foo3):  " << value << endl;
    
    return 0;
}
