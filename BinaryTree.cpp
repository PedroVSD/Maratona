#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Node{
    int data;
    Node *left, *right;

    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int data);
bool search(Node* root, int data);

int main(void){

}

Node* insert(Node* root, int data){
    if(root == NULL){
        return new Node(data);
    }

    if(data < root->data){
        root -> left = insert(root-> left, data);
    } else {
        root -> right = insert(root->right, data);
    }
    return root;
}

bool search(Node* root, int data){
    if(root == NULL){
        return false;
    }

    if(root -> data == data){
        return true;
    }
    if(data < root -> data){
        return search(root -> left, data);
    }else{
        return search(root -> right, data);
    }
}