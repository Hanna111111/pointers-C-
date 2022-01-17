
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    cout << a << endl;
    int *px = &a;//адресс а впихиваем в px; звездочка - переменная типа указатель, & - оператор взятия адреса.
    int *px2 = &a;
    
    *px2 = 2;//с помощью указателя поменяли значение
    cout << a << endl;
    
    
    cout << "px adress: " << px << endl;
    cout << "px value: " << *px << endl;
    cout << "px2 adress: " << *px2 << endl;

    return 0;
}
