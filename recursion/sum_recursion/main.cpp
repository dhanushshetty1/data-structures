#include <iostream>

using namespace std;

int sum(int n){
	if(n==0)
		return 0;
	return sum(n-1)+n;
	}
int Isum(int n){
	int s=0;
	int i;
	for(i=1; i<=n; i++){
		s=s+i;
		}
	return s;
	}
int main(){
	
	cout << sum(5) << endl;
	cout << Isum(5) << endl;
	return 0;
}
