#include <iostream>

using namespace std;

struct Array
{
	int A[20];
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
	
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	}

int LinearSearch(struct Array *arr,int key)
{
	int i;
	for(i=0; i<arr->length; i++){
		if(arr->A[i]==key)
		{
			swap(&arr->A[i],&arr->A[i-1]);
			//swap(&arr->A[i],&arr->A[0]);
			return i;
		}
		}
	return -1;
	}

int main(){
	
	struct Array arr{{2,3,4,5,6},20,5};
	
	cout<<LinearSearch(&arr,5)<<endl;

	Display(arr);
	return 0;
}
