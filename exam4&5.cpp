#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

char pre[50] = "124567839abc";        //前序序列
char mid[50] = "42675813bac9";        //中序序列
char post[50] = "476852bca931";        //后序序列

typedef struct _Node
{
    char v;
    struct _Node *left;
    struct _Node *right;
}Node;


void PreMidCreateTree(Node* &node, int i, int j, int len);        //利用前序中序序列创建树
void PostMidCreateTree(Node* &node, int i, int j, int len);        //利用后序中序序列创建树
int Position(char c);                //确定c在中序序列mid中的下标




int Position(char c)
{
    return strchr(mid,c)-mid;
}

//i pre下标
//j mid下标
void PreMidCreateTree(Node* &node, int i, int j, int len)
{
    if(len <= 0){
        node = NULL;
        return;
    }

    node = new Node;
    node->v = pre[i];
    int m = Position(pre[i]);
    PreMidCreateTree(node->left, i+1, j, m-j);            //m-j为左子树字符串长度
    PreMidCreateTree(node->right, i+(m-j)+1, m+1, len-1-(m-j));    //len-1-(m-j)为右子树字符串长度
}

//i post下标
//j mid下标
void PostMidCreateTree(Node* &node, int i, int j, int len)
{
    if(len <= 0){
        node = NULL;
        return;
    }

    node = new Node;
    node->v = post[i];
    int m = Position(post[i]);
    PostMidCreateTree(node->left, i-1-(len-1-(m-j)), j, m-j);//m-j左子树的长度,len-1-(m-j)右子树的长度
    PostMidCreateTree(node->right, i-1, m+1, len-1-(m-j));
}


void InOrder(Node* node)   // 中序遍历的非递归
{
    if(!node)
        return ;
    Node* curr = node;    // 指向当前要检查的节点
    stack<Node*> s;
    while(curr != NULL || !s.empty())
    {
        while(curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }//while
        if(!s.empty())
        {
            curr = s.top();
            s.pop();
            cout<<curr->v<<" ";
            curr = curr->right;
        }
    }
}

void PreOrder(Node* node)     //先序遍历的非递归
{
    if(!node)
        return ;

    stack<Node*> s;
    s.push(node);

    while(!s.empty())
    {
        Node* temp = s.top();
        cout<<temp->v<<" ";
        s.pop();
        if(temp->right)
            s.push(temp->right);
        if(temp->left)
            s.push(temp->left);
    }
}

int main()
{
    Node* root1 = NULL;
    Node* root2 = NULL;

    PreMidCreateTree(root1, 0, 0, strlen(mid));
    InOrder(root1);
    cout<<endl;
    PostMidCreateTree(root2, strlen(post)-1, 0, strlen(mid));
    PreOrder(root2);
    cout<<endl;

    return 0;
}

