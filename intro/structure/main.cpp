#include <iostream>

using namespace std;

struct Rectangle
{
	int lenght;
	int breath;
	char x;
}r1,r2,r3;

struct Rectangle r4;
int main(){
	struct Rectangle r5={5,5};
	
	r5.lenght=15;

	cout << sizeof(r5) << endl;
	cout << r5.lenght <<endl;
	cout << r5.breath <<endl;
	return 0;
}
