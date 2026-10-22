// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     struct Node* left;
//     struct Node* right;
//     Node(int val){
//         data=val;
//         left=right=nullptr;
//     }
// };
// int main(){
//     struct Node* root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->right=new Node(5);
//     cout<<"Tree is created";
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node* left;
    node* right;
};
node* newNode(int val){
    node* temp=new node();
    temp->val=val;
    temp->left = NULL;
    temp->right = NULL;
}
int main(){
    node* root=new newNode(0);
    root->left=newNode(1); 
}
