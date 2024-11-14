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
		
void Append(struct Array *arr,int x){
	if(arr->length<arr->size)
		arr->A[arr->length++]=x;
	
	}

void Insert(struct Array *arr,int index,int x){
	int i;
	if(index>=0 && index <= arr->length)
	{
		for(i=arr->length; i>index; i--)
			arr->A[i]=arr->A[i-1];
			
		arr->A[index]=x;
		arr->length++;
		}
	}

int Delete(struct Array *arr,int index){
	int x=0;
	int i;
	
	if(index >= 0 && index < arr->length){
		x=arr->A[index];
		for(i=index; i<arr->length-1; i++){
			arr->length--;
			}
		return x;
		}
	
	return x;
	}
int main(){
	
	struct Array arr{{2,3,4,5,6},10,5};
	
	//Insert(&arr,5,10);
	//Append(&arr,10);
	cout << Delete(&arr,4)<<endl;
	//Display(arr);
	return 0;
}
