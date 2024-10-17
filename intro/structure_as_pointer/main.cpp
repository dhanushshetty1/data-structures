#include <iostream>

using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};
//call by value
//void fun(struct Rectangle r)
//{
//	r.length=20;
// 	cout <<"length "<<r.length<<endl<<"breadth "<< r.breadth<<endl;
//}
//call by address
//void fun(struct Rectangle *p)
//{
//	p->length=25;
// 	cout <<"length "<<p->length<<endl<<"breadth "<< p->breadth<<endl;
//}
//heap structure
struct Rectangle *fun(){
	struct Rectangle *p;
	p = new Rectangle;
	p->length=15;
	p->breadth=7;
	return p;
}

int main(){
//	struct Rectangle r={10,5};
//	fun(r);
//	fun(&r);
//	cout<<"length "<<r.length<<endl<<"breadth "<<r.breadth<<endl;
//	
	struct Rectangle *ptr=fun();
	cout<<"length "<<ptr->length<<endl<<"breadth "<<ptr->breadth<<endl;
	return 0;
}
