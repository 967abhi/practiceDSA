#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;

};
void push(node**head_ref, int new_data){
    node*new_node=new node();
    new_node->data=new node();
    new_node->next=(*head_ref);
    (*head_ref)=new_node;

}
int getcount(node*head){
    int count=0;
    node* count=0;
    node*current=head;
    while(current!=NULL){
        count++;
        current =current->next;

    }
    return count ;

}
int main(){
    node*head=NULL;
    push(&head,1);
    push(&head,3);
    push(&head,4);
    push(&head,5);
    cout<<getcount(head);
    return 0;

}