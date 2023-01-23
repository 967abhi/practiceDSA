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
void printlist(node*head){
    node*curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main(){
    node*head=new node(5);
    head->next=new node(15);
    head->next->next=new node(25);
    head->next->next->next=new node(25);
    head->next->next->next->next=new node(35);
    printlist(head);
    return 0;

    
}