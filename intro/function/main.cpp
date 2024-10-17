#include <iostream>

using namespace std;
int add(int a,int b){
	int c;
	c=a+b;
	return c;
}
int main(){
	int num1=5,num2=10,sum;
	
	sum = add(num1,num2);
	
	cout<<"sum is"<<sum<<endl;
	
	return 0;
}
