#include <iostream>

using namespace std;

int area(int l,int b){
	return l*b;
}

int perimeter(int l,int b){
	int p;
	p=2*(l+b);
	return p;
	}

int main(){
	int length=0,breadth=0;
	
	cout<<"Enter length and breadth"<<endl;
	cin>>length>>breadth;
	
	int a = area(length,breadth);
	int peri=perimeter(length,breadth );
	
	cout<<"area "<< a <<"\nperimeter "<<peri<<endl;
	
	return 0;
}
