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

//using ll

class node{
    public:
    int data;
    node *next;
    node(int value){
        data=value;
        next=NULL;
    }
};

class Stack{
    node *top;
    int size;
    public:
    
    Stack(){
        top=NULL;
        size=0;
    }
    
    void push(int value){
        node *temp=new node(value);
        if(temp==NULL){
            cout<<"stack is overflow\n";
            return;
        }
        else{
            temp->next=top;
            top=temp;
            size++;
            cout<<"pushed value"<<value<<"from the stack\n";
        }
    }
    
    void pop(){
        if(top==NULL){
            cout<<"stack underflow";
        }
        else{
            node *temp=top;
            cout<<"popped"<<top->data<<"from the stack\n";
            top=top->next;
            delete temp;
            size--;
        }
    }
    
    int peek(){
        if(top==NULL){
            cout<<"stack is empty\n";
            return -1;
        }
        else{
            return top->data;
        }
    }
    
    bool isempty(){
        return top==NULL;
    }
    
    int issize(){
        return size;
    }
};

int main() {
	Stack s;
	s.push(6);
	s.push(9);
	s.push(16);
    s.push(62);
    s.pop();
    cout<<s.peek()<<endl;
}

// using stl

stack<int>S;

