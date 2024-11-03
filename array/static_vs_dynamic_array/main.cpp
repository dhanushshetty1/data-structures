#include <iostream>

using namespace std;

int main(){
	int A[10];
	int *p;
	
	p= new int[5];
	
	A[0]=5;
	p[0]=6;
	
	cout<<A[0]<<" "<<p[0]<<endl;
	return 0;
}
