#include <iostream>

using namespace std;
//using loop
double e(int x,int n){
	double s=1;
	while(n>0){
		s=1+x*s/n;
		n--;
		}
	return s;
	}
//using recursion
double e1(int x,int n){
	static double s;
	if(n==0)
		return s;
	s=1+x*s/n;
	return e1(x,n-1);
	}	
int main(){
	cout << e(2,10) << endl;
	cout << e1(2,10) << endl;
	cout << "hello" << endl;
	return 0;
}
