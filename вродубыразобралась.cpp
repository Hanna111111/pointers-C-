#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *pa = &a;//указатель
    int &shich = *pa;//ссылка на указатель
    int *ppa = &shich;//укaзатель на ссылку
    
    cout << a << endl;
    *ppa += 5; 
    cout << a << endl;
    shich *=2;//чтобы обратиться к ссылке - без указателей
    cout << a << endl;

    return 0;
}
