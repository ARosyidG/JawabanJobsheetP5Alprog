#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    int* aPtr = &a;
    int* bPtr = &b;
    int* cPtr = &c;
    cout << "alamat variable a " << &a << endl;
    cout << "alamat variable b " << &b << endl;
    cout << "alamat variable c " << &c << endl;
    cout << "nilai aPtr " << aPtr << endl;
    cout << "nilai bPtr " << bPtr << endl;
    cout << "nilai cPtr " << cPtr << endl;
}
