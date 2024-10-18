#include <iostream>

using namespace std;

class Rectangle{
	private:
		int length;
		int breadth;
	
	public:
		Rectangle(){
		length=0;
		breadth=0;
		}
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
	void setLength(int l){
		length=l;
		}
	void setbreadth(int b){
		breadth=b;
		}
	int getLength(){
		return length;
		}
	int getbreadth(){
		return breadth;
		}
	~Rectangle(){
		cout<<"Destructor";
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
