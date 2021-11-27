#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *pa = &a;
    
    int &aref = a;
    
    cout << "*pa\t" << pa << endl;
    cout << "*pa\t" << *pa << endl;
    cout << "&aref\t" << a << endl;
    
    pa++;
    *pa = a++;
    aref = 55;
    
    cout << "&aref\t" << aref << endl;
    cout << "*pa\t" << pa << endl;
    cout << "*pa\t" << *pa << endl;
    cout << "&aref\t" << a << endl;

    return 0;
}
