#include<bits/stdc++.h>
using namespace std;
struct node
{
    /* data */
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
node*insertatbegin(node*head,int x){
    node*temp=new node(x);
    temp->next=head;
    return temp;
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
    head=insertatbegin(head,1);
    head=insertatbegin(head,2);
    head=insertatbegin(head,3);
    head=insertatbegin(head,4);
    head=insertatbegin(head,5);
    printlist(head);
    return 0;
}