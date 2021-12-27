#include<iostream>
using namespace std;
#define MAX 10

int Queue[MAX];
int front=-1,rear=-1;




bool isEmpty(){
  if(front==-1 && rear==-1){
  	return 1;
  }else{
  	return 0;
  }
}

bool isFull(){
  if(rear==MAX-1){
  	return 1;
  }else{
  	return 0;
  }
}

void enqueue(){
	  int ele;
	if(!isFull()){
	   if(isEmpty()){
	   	  front=rear=front+1;
	   	  cout<<"Enter a element you want to enqueue:"<<endl;
	   	  cin>>ele;
	   	  Queue[rear]=ele;
	   }else{
	   	  cout<<"Enter a element you want to enqueue no empty:"<<endl;
	   	  cin>>ele;
	      Queue[++rear]=ele;
	   }
	}else{
		cout<<"Can't Enqueue. Queue is full"<<endl;
	}
}


int dequeue(){
	if(!isEmpty()){
	      int ele;
	      ele=Queue[front++];
	      return ele;
	   }else{
	   	 cout<<"Can't Dequeue. Queue is full"<<endl;
	     return 0;
	   }
	}


  void showQueue(){
       cout<<"Queue is: "<<endl;
        for(int i=front;i<=rear;i++){
            cout<<Queue[i]<<" ";
        }
    }
    

  
int main(){
 
  while(1){
    cout<<"\n\n************Menu Option*****************"<<endl;
    cout<<"1. Enqueue an element"<<endl;
    cout<<"2. Dequeue an element"<<endl;
    cout<<"3.Check whether the Queue is empty or not"<<endl;
    cout<<"4Check whether the Queue is full or not"<<endl;
    cout<<"5.Display Queue"<<endl;
    cout<<"6.Exit"<<endl;

    cout<<"Choose your option"<<endl;
    int choice;
    cin>>choice;
    
          switch(choice){
                 case 1:
                  enqueue();
                  break;
                case 2:
                   cout<<dequeue()<<"is dequed from Queue"<<endl;
                   break;
                case 3:
                  if(isEmpty()){
                        cout<<"Queue is empty"<<endl;
                  }else{
                        cout<<"Queue is not empty"<<endl;
                  }
                  break;
                case 4:
                  if(isFull()){
                      cout<<"Queue is Full"<<endl;
                  }else{
                        cout<<"Queue is not Full"<<endl;
                  }
                  break;
                case 5:
                    showQueue();
                    break;
                 case 6:
                    exit(0);
                    break;
                default:
                   cout<<"Entered choice is invalid"<<endl;
                   break;
          }
  }   
    return 0;
}
