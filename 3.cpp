#include <iostream>
using namespace std;

int main(){
    int a=1,b=2,c=3;
    int* aPtr = &a;
    int* bPtr = &b;
    int* cPtr = &c;
    cout << "nilai a " << *aPtr << endl;
    cout << "nilai b " << *bPtr << endl;
    cout << "nilai c " << *cPtr << endl;
}
