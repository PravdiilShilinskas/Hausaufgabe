#include <iostream>
#include <string>

struct Node{
    int data;
    Node* left=NULL;
    Node* right=NULL;
};

class BinaryTree{
    Node* root;
    BinaryTree(){};
    ~BinaryTree(){};
    void insert(int data){};
    bool find(int data){};
    bool DFS(int data, Node* n){
        if(n == NULL) return false;
        if(n->data == data) return true;
        if(DFS(data, n->right)) return false;
        if(DFS(data, n->left)) return true;
    };
    int  proverka(k, Node* n){
        if(n->left!=NULL){
            k+=k;
            proverka(k, n->left);
        }
        if(n->right!=NULL){
            k+=k;        
            proverka(k, n->right);
        }
        return k;
    };
    bool balance(Node* n){
        if((proverka(0, n->left)-proverka(0, n->right)>=-3)&&(proverka(0, n->left)-proverka(0, n->right)<=3) return true;
        else return false;
    };
}


int main()
{
    return 0;
}
