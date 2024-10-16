#include <iostream>

using namespace std;
struct rect{
	int length;
	int breath;
};

int main(){
	int a = 10;
	int *p;
	p = &a;
	//p=(int *)malloc(5*sizeof(int)); for c
	
	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<p<<endl;
	cout<<*p<<endl;
	
	int A[5]={2,3,4,5,6};
	int *po;
	po=A;
	for(int i=0; i<5; i++){
		cout << A[i] << endl;
		cout << po[i] << endl;
		}
		

	int *heap = new int[5];
	heap[0]=3;
	heap[1]=5;
	heap[2]=6;
	heap[3]=7;
	heap[4]=12;
	
	for(int j=0; j<5; j++){
		cout<<heap[j]<<endl;
	}
	//free(heap) in c
	delete []heap;
	
	int *p1;
	char *p2;
	float *p3;
	double *p4;
	struct rect *p5;
	
	cout << sizeof(p1)<<endl;
	cout << sizeof(p2)<<endl;
	cout << sizeof(p3)<<endl;
	cout << sizeof(p4)<<endl;
	cout << sizeof(p5)<<endl;
	//every pointer same bytes of memory
	return 0;
}
