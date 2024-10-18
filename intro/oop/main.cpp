#include <iostream>

using namespace std;

class Rectangle{
	private:
		int length;
		int breadth;
	
	public:
		Rectangle(int l,int b){
			length=l;
			breadth=b;
	}
		int area(){
			return breadth*length;
}

		int perimeter(){
			int p;
			p=2*(breadth+length);
			return p;
	}
};

int main(){
	int l,b;
	cout<<"Enter length and breadth"<<endl;
	cin>>l>>b;
	
	Rectangle r(l,b);
	
	r.area();
	int peri= r.perimeter();
	
	cout<<"area "<< r.area() <<"\nperimeter "<<peri<<endl;
	
	return 0;
}
