#include <iostream>

using namespace std;

struct Rectangle{
	int length;
	int breadth;
	};

void initialise(struct Rectangle *r,int l,int b){
	r->length=l;
	r->breadth=b;
	}
int area(struct Rectangle r){
	return r.breadth*r.length;
}

int perimeter(Rectangle r){
	int p;
	p=2*(r.breadth+r.length);
	return p;
	}

int main(){
	Rectangle r={0,0};
	
	int l,b;
	cout<<"Enter length and breadth"<<endl;
	cin>>l>>b;
	
	initialise(&r,l,b);
	
	int a = area(r);
	int peri=perimeter(r);
	
	cout<<"area "<< a <<"\nperimeter "<<peri<<endl;
	
	return 0;
}
