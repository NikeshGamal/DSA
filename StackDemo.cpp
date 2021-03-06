#include<iostream>
using namespace std;
#define size 10
  
  int top=-1;
    int arr[size];
  
  bool isEmpty(){
         if(top<0){
             return true;
         }else{
             return false;
         }
    }

     bool isFull(){
      if(top==size-1){
            return true;
      }else{
            return false;
      }
    }
    
    void push(int data){
        if(isFull()){
             cout<<"Stack is full. Can't Push"<<endl;
        }else{
              top++;
              arr[top]=data;
        }
    }

     int pop(){
        if(isEmpty()){
            cout<<"Stack is Empty. Can't Pop"<<endl;
            return 0;
        }else{
            int popData = arr[top];
            top--;
            return popData;
        }  
    }

    

     void showStack(){
       cout<<"Stack is: "<<endl;
        for(int i=0;i<=top; i++){
            cout<<arr[i]<<" ";
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
                 if(!isFull()){
                  int element;
                  cout<<"Enter element you want to push to the stack"<<endl;
                  cin>>element;
                  push(element);
                 }else{
                    cout<<"Can't Push. Stack is Full"<<endl;
                 }
                  
                  break;
                case 2:
                if(!isEmpty()){
                  cout<<pop()<<" is poped out from stack."<<endl;
                 }else{
                    cout<<"Can't Pop. Stack is Empty"<<endl;
                 }
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
