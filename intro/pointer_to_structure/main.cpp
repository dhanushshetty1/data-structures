#include <iostream>

using namespace std;
struct Rectangle
{
	int length;
	int breadth;
};
int main(){
	//struct Rectangle r={10,5};
	//or
	Rectangle r={10,5};
	cout<<r.length<<endl;
	cout<<r.breadth<<endl;
	
	Rectangle *p=&r;
	cout<<p->length<<endl;
	cout<<p->breadth<<endl;
	
	//in heap
	Rectangle *heap;
	heap = new Rectangle;
	
	heap->length=15;
	heap->breadth=7;
	
	cout<<heap->length<<endl;
	cout<<heap->breadth<<endl;
	
	return 0;
}
