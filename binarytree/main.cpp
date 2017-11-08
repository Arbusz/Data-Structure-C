#include<iostream>
#include <queue>
using namespace std;
struct tree
{
    int data;
    tree *left,*right;
};
class Btree
{
    static int n;
    static int m;
public:
    tree *root;
    Btree()
    {
        root=NULL;
    }
    void create_Btree(int);
    void breadthFirst(tree *root);          //广度优先
    void Preorder(tree *);                  //先序遍历
    void inorder(tree *);                   //中序遍历
    void Postorder(tree *);                 //后序遍历
    void display0() {breadthFirst(root);cout<<endl;}
    void display1() {Preorder(root); cout<<endl;}
    void display2() {inorder(root);cout<<endl;}
    void display3() {Postorder(root); cout<<endl;}

};
int Btree::n=0;
int Btree::m=0;
void Btree::create_Btree(int x)
{
    tree *newnode=new tree;
    newnode->data=x;
    newnode->right=newnode->left=NULL;
    if(root==NULL)
        root=newnode;
    else
    {
        tree *back;
        tree *current=root;
        while(current!=NULL)
        {
            back=current;
            if(current->data>x)
                current=current->left;
            else
                current=current->right;
        }
        if(back->data>x)
            back->left=newnode;
        else
            back->right=newnode;
    }
}

void Btree::breadthFirst(tree *root) {
    queue<tree *> treeQueue;
    treeQueue.push(root);
    tree* p=NULL;
    while(!treeQueue.empty()){
        p = treeQueue.front();
        treeQueue.pop();
        cout<<p->data<<" ";
        if(p->left){
            treeQueue.push(p->left);
        }
        if(p->right){
            treeQueue.push(p->right);
        }
    }

}

void Btree::Preorder(tree *temp)    //先序遍历二叉树。
{
    if(temp!=NULL)
    {
        cout<<temp->data<<" ";
        Preorder(temp->left);
        Preorder(temp->right);
    }
}
void Btree::inorder(tree *temp)      //中序遍历二叉树。
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        cout<<temp->data<<" ";
        inorder(temp->right);
    }
}
void Btree::Postorder(tree *temp)     //后序遍历二叉树。
{
    if(temp!=NULL)
    {
        Postorder(temp->left);
        Postorder(temp->right);
        cout<<temp->data<<" ";
    }
}

int main()
{
    Btree A;
    int array[]={100,4,2,3,15,35,6,45,55,20,1,14,56,57,58};
    int k;
    k=sizeof(array)/sizeof(array[0]);
    cout<<"建立排序二叉树顺序: "<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<array[i]<<" ";
        A.create_Btree(array[i]);
    }
    cout<<endl;
    cout<<endl<<"广度优先遍历序列: "<<endl;
    A.display0();
    cout<<endl<<"先序遍历序列: "<<endl;
    A.display1();
    cout<<endl<<"中序遍历序列: "<<endl;
    A.display2();
    cout<<endl<<"后序遍历序列: "<<endl;
    A.display3();
}