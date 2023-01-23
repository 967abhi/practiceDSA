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
node*deletelast(node*head){
    if(head==NULL){
        return NULL;
    }
    if(head->next=NULL){
        delete head;
        return NULL;
    }
    node*curr=head;
    while(curr->next->next!=NULL)
    curr=curr->next;

    delete(curr->next);
    curr->next=NULL;
    return head;

}
void printlist(node*head){
    node*curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main(){
    node*head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    deletelast(head);
    printlist(head);
    return 0;
    
} // namespace name
