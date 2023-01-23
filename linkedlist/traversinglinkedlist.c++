#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void printlist(node*head){
    if(head==NULL){
        return ;

    }
    cout<<(head->data)<<" ";
    printlist(head->next);
    
}
int main(){
    node*head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    printlist(head);
    return 0;

}