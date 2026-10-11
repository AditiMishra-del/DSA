#include <bits/stdc++.h>
using namespace std;
//with array
class Stack{

    int *arr;
    int size;
    int top;
    
    public:    
    
    bool flag;
    //constructor
    Stack(int s){
         size=s;
         top=-1;
         arr=new int[s];
         flag=1;
    }
     
    void push(int value){
        if(top==size-1){
          cout<<"stack overflow";
          return;
        } 
        else{
          top++;
          arr[top]=value;
          cout<<"pushed"<<value<<"into the stack\n";
          flag=0;
        }
 
    }
    
    void pop(){
        if(top==-1){
          cout<<"stack underflow";
          return;
        }
        else{
            top--;
            flag=1;
        }
          
    }
    
    int peek(){
        if(top==-1){
          cout<<"stack is empty\n";
          return -1;
        }
        else{
          return arr[top];
        }
    }    
        
    //isempty
    bool isempty(){
        return top==-1;
    }
    
    //issize
    int issize(){
        return top+1;
    }

};

int main() {
	Stack S(5);
	S.push(6);
	S.push(7);
	S.push(8);
	S.push(6);
	S.push(7);
	S.push(8);	
	S.pop();
	cout<<S.peek()<<endl;
	S.pop();
	cout<<S.peek()<<endl;

}
