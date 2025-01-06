#include <iostream>

using namespace std;
//void fun(int A*,int n) //or
//void fun(int A[],int n){
//	for(int i=0; i<5; i++){
//		cout<<A[i]<<" ";
//	}
//	A[0]=10;
//	cout <<endl<< sizeof(A)/sizeof(int)<<endl;
//	}

int * fun(int size){
	int *p;
	p = new int[size];
	for(int i=0; i<size; i++){
	p[i]=i+1;
	}
	return p;
}
int main(){
	
//	int A[]={2,4,6,8,10};
//	int n = 5;
//	
//	fun(A,n);
//	cout << sizeof(A)/sizeof(int)<<endl;
//	for(int x:A)
//		cout<<x<<" "<<endl;
	int *ptr,sz=7;
	ptr = fun(sz);
	
	for(int i=0; i<sz; i++)
		cout<<ptr[i]<<endl;
	
	return 0;
}
