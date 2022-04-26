#include <iostream>
#include <string>
using namespace std;
int main(){
	string var = "GANAUSI";
	char* varPtr = &var[0];
	cout << *varPtr;
	for (int i = 0; i <6; i++){
		varPtr++;
	} 
	cout << *varPtr;
}
