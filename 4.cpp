#include <iostream>
using namespace std;

int main(){
    int var[]={1,2,3,4,5,6,7,8,9,10};
    int* ptr = var;
    for(int i=0; i<10; i++){
    	cout << *ptr << " ";
    	ptr++;
	}
}
