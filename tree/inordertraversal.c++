 #include<bits/stdc++.h>
 using namespace std;
 struct node
 {
    /* data */
    int data;
    node *left,*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    } 
 };
 int main(){
    struct*node root=new node(1);
    root->right=new node(2);
    root->left=new node(3);
    
 }
 