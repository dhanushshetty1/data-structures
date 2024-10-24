#include <iostream>
int fact(int n)
{
	if(n==0)
		return 1;
		
	return fact(n-1)*n;
	}
using namespace std;

int Ifact(int n)
{
	int f=1;
	int i;
	for(i=1; i<=n; i++)
		f=f*i;
		
	return f;
	}
int main(){
	
	cout << fact(5) << endl;
	cout << Ifact(5) << endl;
	return 0;
}
