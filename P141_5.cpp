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

int degrees1(Node *node){
    if(node == NULL)
        return 0;
    if (node->left!=NULL&&node->right==NULL||node->right!=NULL&&node->left==NULL)
        return 1+degrees1(node->left)+degrees1(node->right);
    else
        return  degrees1(node->left)+degrees1(node->right);
}

int degrees2(Node *node){
    if(node == NULL)
        return 0;
    if (node->left!=NULL&&node->right!=NULL)
        return 1+degrees2(node->left)+degrees2(node->right);
    else
        return  degrees2(node->left)+degrees2(node->right);
}

int degrees0(Node *node){
    if(node == NULL)
        return 0;
    if(node->left==NULL&&node->right==NULL)
        return 1;
    else
        return degrees0(node->left)+degrees0(node->right);
}

int heightCounter(Node *node){
    if(node==NULL)
        return 0;
    int leftW =1, rightW =1;
    leftW+=heightCounter(node->left);
    rightW+=heightCounter(node->right);
    return leftW>rightW?leftW:rightW;
}

void levelCounter(Node *node,int a[],int h) {
    if (node != NULL) {
        a[h] = a[h] + 1;
        levelCounter(node->left, a, h + 1);
        levelCounter(node->right, a, h + 1);
    };
}

int widthCounter(Node *node){
    int a[10], i, wid;
    for(i=0;i<10;i++)
        a[i] = 0;
    levelCounter(node, a, 1);
    wid = a[0];
    for(i=0;i<10;i++)
        if(a[i]>wid)
            wid = a[i];
    return wid;
}

int maxValue(Node *node){
    int max = 0;
    queue<Node*> treeQueue;
    treeQueue.push(node);
    Node *p = NULL;
    while(!treeQueue.empty()){
        p = treeQueue.front();
        treeQueue.pop();
        if(p->value>max)
            max = p->value;
        if(p->left)
            treeQueue.push(p->left);
        if(p->right)
            treeQueue.push(p->right);
    }
    return max;
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
//    system("Pause");
//    cout<<degrees1(root)<<endl;
//    system("Pause");
//    cout<<degrees2(root)<<endl;
//    system("Pause");
//    cout<<degrees0(root)<<endl;
//    system("Pause");
//    cout<<heightCounter(root)<<endl;
//    system("Pause");
//    cout<<widthCounter(root)<<endl;
//    system("Pause");
//    cout<<maxValue(root)<<endl;
//    system("Pause");
//    breadthFirst(swap(root));
    system("Pause");
    deleteLeaves(root);
    breadthFirst(root);

}

































//                            _ooOoo_
//                           o8888888o
//                           88" . "88
//                           (| -_- |)
//                            O\ = /O
//                        ____/`---'\____
//                      .   ' \\| |// `.
//                       / \\||| : |||// \
//                     / _||||| -:- |||||- \
//                       | | \\\ - /// | |
//                     | \_| ''\---/'' | |
//                      \ .-\__ `-` ___/-. /
//                   ___`. .' /--.--\ `. . __
//                ."" '< `.___\_<|>_/___.' >'"".
//               | | : `- \`.;`\ _ /`;.`/ - ` : | |
//                 \ \ `-. \_ __\ /__ _/ .-` / /
//         ======`-.____`-.___\_____/___.-`____.-'======
//                            `=---='
//
//         .............................................
//                  佛祖保佑             永无BUG

