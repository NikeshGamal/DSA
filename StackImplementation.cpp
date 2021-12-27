#include<iostream>
using namespace std;
#define MAX 10

int stack[MAX];
int tos=-1;

bool isEmpty(){
  if(tos==-1){
  	return 1;
  }else{
  	return 0;
  }
}

bool isFull(){
  if(tos==MAX-1){
  	return 1;
  }else{
  	return 0;
  }
}

void push(){
	if(!isFull()){
		int ele;
		cout<<"Enter element you want to push:"<<endl;
		cin>>ele;
		stack[++tos]=ele;
	}else{
		cout<<"Can't push. Stack is full"<<endl;
	}
}


     int pop(){
        if(isEmpty()){
            cout<<"Stack is Empty. Can't Pop"<<endl;
        }else{
            int popData = stack[tos];
            tos--;
            cout<<popData<<" is poped out from stack."<<endl;
        }  
        return 0;
    }

    

     void showStack(){
       cout<<"Stack is: "<<endl;
        for(int i=tos;i>=0;i--){
            cout<<stack[i]<<" ";
        }
    }
    
    
int main(){
 
  while(1){
    cout<<"\n\n************Menu Option*****************"<<endl;
    cout<<"1. Push an element"<<endl;
    cout<<"2. Pop an element"<<endl;
    cout<<"3.Check whether the stack is empty or not"<<endl;
    cout<<"4Check whether the stack is full or not"<<endl;
    cout<<"5.Display Stack"<<endl;
    cout<<"6.Exit"<<endl;

    cout<<"Choose your option"<<endl;
    int choice;
    cin>>choice;
    
          switch(choice){
                 case 1:
                  push();
                  break;
                case 2:
                   pop();
                   break;
                case 3:
                  if(isEmpty()){
                      cout<<"Stack is Empty"<<endl;
                  }else{
                        cout<<"Stack is not empty"<<endl;
                  }
                  break;
                case 4:
                  if(isFull()){
                      cout<<"Stack is Full"<<endl;
                  }else{
                        cout<<"Stack is not Full"<<endl;
                  }
                  break;
                case 5:
                    showStack();
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
