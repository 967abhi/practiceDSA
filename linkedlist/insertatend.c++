#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node(int x){
        data=x;
        next=NULL;
    }
};
node*insertatend(node*head, int x){
    node*temp=new node(x);
    if(head==NULL){
        return temp;
    }
    node*curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
        curr->next=temp;
        return head; 
    }
}
void printlist(node*head){
    node*curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main(){
  node*head=NULL;
  head=insertatend(head,10);
  head=insertatend(head,20);
  head=insertatend(head,30);
  printlist(head);
  return 0;
}