#include <iostream>

using namespace std;
int power(int m,int n){
	if(n==0)
		return 1;
		
	return m*power(m,n-1);
	}
	
int fastPower(int m,int n){
	if(n==0)
		return 1;
	
	if(n%2==0)
		return fastPower(m*m,n/2);

	return fastPower(m*m,(n-1)/2)*m;
	}
int main(){
	//cout << power(2,9) << endl;
	cout << fastPower(2,9) << endl;
	return 0;
}
