#include <iostream>
#include <math.h>
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

//求节点个数
int NodeNumber(Node *node){
    queue<Node*> treeQueue;
    int count = 0;
    treeQueue.push(node);
    Node *p = NULL;
    while(!treeQueue.empty()){
        p = treeQueue.front();
        treeQueue.pop();
        count++;
        if(p->left){
            treeQueue.push(p->left);
        }
        if(p->right){
            treeQueue.push(p->right);
        }
    }
    return count;
}

//计算二叉树深度
int depthCounter(Node *node){
    if(node==NULL)
        return 0;
    int leftW =1, rightW =1;
    leftW+=depthCounter(node->left);
    rightW+=depthCounter(node->right);
    return leftW>rightW?leftW:rightW;
}

//判断左子树的深度是否都不小于右子树
bool IsLDR(Node *node){
    Node *p = node;
    bool tag =true;
    if(p&&tag){
        int l = depthCounter(p->left);
        int r = depthCounter(p->right);
        if(r>l||IsLDR(p->left)== false||IsLDR(p->right)==false)
            tag = false;
    }
    return tag;
}
//判断条件
//1.具有n个结点的完全二叉树的深度k满足：2^(k-1)-1 < n <= 2^k-1 ；
//2.所有左子树高度不小于右子树
bool IsCBT(Node *node){
    int count,depth;
    bool tag1,tag2 = false;
    tag1 = IsLDR(node);
    count = NodeNumber(node);
    depth = depthCounter(node);
    if((pow(2,depth)-1<count)&&(pow(2,depth)-1>=count))
        tag2 = true;
    return (tag1&&tag2);
}

void Preorder(Node *node){
    if(node!=NULL){
        Preorder(node->left);
        cout<<node->value<<" ";
        Preorder(node->right);
    }
}



int main(){
    Node *root;
    CreatTree(root);
    Preorder(root);
    system("Pause");
    cout<<IsCBT(root);
    return 0;
}