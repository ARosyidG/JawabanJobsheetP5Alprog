#include <iostream>
#include <string>
using namespace std;
void kuadrat(int *ptr){
	*ptr = (*ptr) * (*ptr);
}
int main(){
	int a=10;
	kuadrat(&a);
	cout << "kuadrat dari a : " << a;
}
