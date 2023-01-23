#include<bits/stdc++.h>
using namespace std;
struct node
{
    /* data */
    int data;
    node*prev;
    node*next;
    node(int d ){
        data=d;
        prev=NULL;
        next=NULL;
    }
};
printlist(node*head){
    node*curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main(){
    node*head=new node(10);
    node*temp1=new node(20);
    node*temp2=new node(30);
   head->next=temp1;
   temp1->next=temp2;
   temp2->prev=temp1;
   printlist(head);
   0
   return 0;
}