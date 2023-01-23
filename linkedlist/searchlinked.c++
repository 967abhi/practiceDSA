#include<bits/stdc++.h>
using  namespace std;
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
//For printing the linked list 
void printlinkdelist(node*head){
    node*curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

// for inserting the linked list

node*insertatbegin(node*head,int x){
    node*temp=new node(x);
    temp->next=head;
    return temp;

}
//for searching the linked list 
int  search(node*head,int x){
    int pos=1;
    node*curr=head;
    while(curr!=NULL){
        if(curr->data==x){
            return pos;
        }
        else{
            pos++;
            curr=curr->next;
        }
    }
    return -1;

}




int main(){
        node*head=insertatbegin(head,2);
        head=insertatbegin(head,3);
        head=insertatbegin(head,4);
        head=insertatbegin(head,5);
         printlinkdelist(head);
         int x=3;
         search(head,x);
         
         printlinkdelist(head);
         return 0;


}