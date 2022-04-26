#include <iostream>
using namespace std;

int main(){
	int var = 69;
	int* varPtr = &var;
	int** varPtrPtr = &varPtr;
	cout << "nilai dari var :" << var << endl;
	cout << "nilai dari varPtr:" << varPtr << endl;
	cout << "nilai dari varPtrPtr :" << varPtrPtr << endl;
	cout << "Alamat dari variable pointer var :" << &var  << endl;
	cout << "Alamat dari variable pointer varPtr :" << &varPtr  << endl;
	cout << "Alamat dari variable pointer varPtrPtr :" << &varPtrPtr << endl;
	
}
