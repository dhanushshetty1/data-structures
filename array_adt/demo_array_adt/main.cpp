#include <iostream>

using namespace std;

struct Array
{
	int *A;
	int size;
	int length;
	};

void Display(struct Array arr){
	int i;
	cout << " elements are : ";
	for(i=0; i<arr.length; i++)
	{
		cout << " " << arr.A[i];
		}
	}

int main(){
	struct Array arr;
	int n,i;
	cout<< "enter the size of the array"<< endl;
	cin >> arr.size;
	
	arr.A = new int[arr.size];
	arr.length = 0;
	
	cout << "Enter the number of element" << endl;
	cin >> n;
	
	cout << "Enter the element in array"<<endl;
	for(i=0; i<n; i++){
		cin >> arr.A[i];
		}
	
	arr.length=n;
	
	Display(arr);
	return 0;
}
