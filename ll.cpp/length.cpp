#include <bits/stdc++.h>
using namespace std;
struct node{
public:
    int data;
    node* next;
    node(int data1,node* next1){
        data=data1;
        next=next1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
    }
};
node* convert2ll(vector<int> &arr){
    node* head= new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int lengthofll(node* head){
    int cnt=0;
    node* temp=head;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
int main() {
	vector<int>arr={12,5,7,6};
	node* head=convert2ll(arr);
	cout<<head->data<<endl;
    cout<<lengthofll(head);
}