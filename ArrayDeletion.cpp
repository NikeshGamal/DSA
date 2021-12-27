#include<iostream>
using namespace std;
#define MAX 10
int i;
	
void InputArray(int arr[],int size){
      for(i=0;i<size;i++){
       	  cin>>arr[i];
	   }
}

void displayArray(int arr[],int size){
      for(i=0;i<size;i++){
       	  cout<<arr[i]<<" ";
	   }
}

void arrayDeletion(int arr[],int size,int ind){
	for(i=ind;i<size;i++){
		arr[i]=arr[i+1];
	}
	displayArray(arr,size-1);
}

int main(){
 int array[MAX];
 int noOfEle;
 cout<<"Enter the no of elements you want to enter:"<<endl;
 cin>>noOfEle;
 
 int index;
 cout<<"Enter the index you want to delte:"<<endl;
 cin>>index;
 
 if(index<MAX){
 	 //Enter data elements of an array
 	 cout<<"Enter data elements for array"<<endl;
       InputArray(array,noOfEle);
       cout<<endl;

     //Display Array
      cout<<"The data elements of array"<<endl;
       displayArray(array,noOfEle);	
	        cout<<endl;
	  //Element Deletion
	  arrayDeletion(array,noOfEle,index);   
 }else{
 	cout<<"Enter valid index"<<endl;
 }
 
 return 0;
}
