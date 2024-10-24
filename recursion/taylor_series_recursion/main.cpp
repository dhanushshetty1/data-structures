#include <iostream>

using namespace std;
double fun(int x,int n)
{
	static double p=1,f=1;
	double r{0};
	if (n==0)
		return 1;
		
	else{
		r=fun(p,n-1);
		p=p*x;
		f=f*n;
		return r+p/f;
		}
	}

int main(){
	cout << fun(1,10) << endl;
	return 0;
}
