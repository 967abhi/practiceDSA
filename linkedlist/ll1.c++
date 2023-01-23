#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;

};

void printlist(node*head)
{
    while(head!=NULL){
        cout<<head->data<<"->";
        head= head->next;
    }
}
int main(){
    node*head;
    node*second;
    node*third;
    head=new node();
    second=new node();
    third=new node();
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=5;
    third->next=NULL;
    printlist(head);
    return 0;

}