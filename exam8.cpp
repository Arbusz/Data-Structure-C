#include <iostream>
#include <queue>
#include <stack>

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
    cout<<endl;
}

void PostOrder(Node* T)  // 后序遍历的非递归
{
    stack<Node*> S;
    Node* curr = T ;           // 指向当前要检查的节点    
    Node* previsited = NULL;    // 指向前一个被访问的节点    
    while(curr != NULL || !S.empty())  // 栈空时结束      
    {
        while(curr != NULL)            // 一直向左走直到为空    
        {
            S.push(curr);
            curr = curr->left;
        }
        curr = S.top();
        // 当前节点的右孩子如果为空或者已经被访问，则访问当前节点    
        if(curr->right == NULL || curr->right == previsited)
        {
            cout<<curr->value<<"  ";
            previsited = curr;
            S.pop();
            curr = NULL;
        }
        else
            curr = curr->right;      // 否则访问右孩子    
    }
    cout<<endl;
}


int main(){
    Node *root;
    CreatTree(root);
    breadthFirst(root);
    PostOrder(root);
}
