#include <iostream>
#include <queue>

using namespace std;

struct Node{
    int value;
    struct Node *left;
    struct Node *right;
    Node(int x): value(x),left(0),right(0){};
};

void CreatTree(Node *&node){
    int val;
    cin>>val;
    if(val==-1)
        node = NULL;
    else{
        node = new Node(val);
        CreatTree(node->left);
        CreatTree(node->right);
    }
}

Node* swap(Node *node) {
    if (node == NULL)
        return 0;
    if(node->left||node->right) {
        Node *tmp = NULL;
        if (node->left) {
            tmp = node->right;
            node->right = swap(node->left);
        }
        if (tmp)
            node->left = swap(tmp);
        else node->left = NULL;
    }
    return node;
}

void deleteLeaves(Node *&node){
    if(node==NULL)
        return ;
    if(node->left==NULL&&node->right==NULL){
        delete node;
        node = NULL;
    }
    else{
        deleteLeaves(node->left);
        deleteLeaves(node->right);
    }
}


void breadthFirst(Node *node){
    queue<Node *> treeQueue;
    treeQueue.push(node);
    Node* p = NULL;
    while(!treeQueue.empty()){
        p = treeQueue.front();
        treeQueue.pop();
        cout<<p->value<<" ";
        if(p->left){
            treeQueue.push(p->left);
        }
        if(p->right){
            treeQueue.push(p->right);
        }
    }
}


int main(){
    Node *root;
    CreatTree(root);
    breadthFirst(root);
    system("Pause");
    breadthFirst(swap(root));
    system("Pause");
    deleteLeaves(root);
    breadthFirst(root);

}
