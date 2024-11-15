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

int Binary_search(struct Array arr,int key)
{
	int l,mid,h;
	l=0;
	h= arr.length-1;
	
	while(l<=h){
		mid = (l+h)/2;
		if(key == arr.A[mid])
			return mid;
			
		else if(key < arr.A[mid])
			h=mid-1;
			
		else
			l=mid+1;
		}
	return -1;
	}
	
int RBinary_search(int a[],int l,int h,int key)
{
	int mid;
	
	
	if(l<=h){
		mid = (l+h)/2;
		if(key == a[mid])
			return mid;
			
		else if(key < a[mid])
			return RBinary_search(a,l,mid-1,key);
			
		else
			return RBinary_search(a,mid+1,h,key);
		}
	return -1;
	}


int main(){
	
	struct Array arr{{2,3,4,5,6},20,5};
	
	cout<< RBinary_search(arr.A,0,arr.length,9)<<endl;
	//cout<< Binary_search(arr.A,0,arr.length,9)<<endl;

	Display(arr);
	return 0;
}
