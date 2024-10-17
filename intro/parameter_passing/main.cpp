#include <iostream>

using namespace std;
////call by value
//int add(int a,int b){
//	int c;
//	c = a+b;
//	a++;
//	cout<<a<<endl;
//	return c;
//}

//call by address
//void swap(int *x,int *y)
//{
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}

//call by reference
void swap(int &x,int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
int main(){
	int num1=10,num2=15;
	//int sum = add(num1,num2);
	
	//swap(&num1,&num2);
	
	swap(num1,num2);
	cout<<"1st number is "<<num1<<endl;
	cout<<"2nd number is "<<num2<<endl;
	
	//cout << "Sum is " <<sum<< endl;
	
	return 0;
}
