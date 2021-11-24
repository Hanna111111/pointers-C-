#include <iostream>
using namespace std;
/*
The function that swaps the values of variables using pointers.
*/

void Swap(int *a, int *b){
    int temp = *a;//5
    *a = *b;//4
    *b = temp;//5
}
int main()
{
    int a = 5;
    int b = 4;
    
    int *pa = &a;
    int *pb = &b;
    
    cout <<"First a: " << a << endl;
    cout <<"First b: " << b << endl<<endl;
    
    cout << "Swap: " << endl<< endl;
    Swap(&a, &b);
    
    cout <<"a : " << a << endl;
    cout <<"b : " << b << endl;
    
    return 0;
}
