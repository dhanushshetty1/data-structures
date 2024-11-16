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

int get(struct Array arr,int index)
{
	if(index>=0 && index < arr.length)
		return arr.A[index];
		
	return -1;
	}

int max(struct Array arr){
	int i;
	int max=arr.A[0];
	for(i=0; i<arr.length; i++){
		if(arr.A[i]>max)
			max=arr.A[i];
		}
	return max;
	}

int min(struct Array arr){
	int i;
	int min=arr.A[0];
	for(i=0; i<arr.length; i++){
		if(arr.A[i]<min)
			min=arr.A[i];
		}
	return min;
	}

int sum(struct Array arr)
{
	int s=0;
	int i;
	for(i=0; i<arr.length; i++)
		s+=arr.A[i];
		
	return s;
	}

float avg(struct Array arr)
{
	return (float)sum(arr)/arr.length;
	}

void set(struct Array *arr,int index,int x){
	if(index >=0 && index > arr->length)
		arr->A[index]=x;
	}

int main(){
	
	struct Array arr{{2,3,4,5,6},20,5};
	
	cout<<get(arr,4)<<endl;
	set(&arr,0,10);
	cout<<max(arr)<<endl;
	cout<<min(arr)<<endl;
	cout<<sum(arr)<<endl;
	cout<<avg(arr)<<endl;
	
	Display(arr);
	return 0;
}
