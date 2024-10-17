#include <iostream>

using namespace std;

int main(){
	int a=10;
	int &r=a;
	a=25;
	cout<< a <<endl;
	cout<< r <<endl;
	r=20;
	cout<< a <<endl;
	cout<< r <<endl;
	int b=30;
	r=b;
	cout<< a <<endl;
	cout<< r <<endl;

	
	return 0;
}
