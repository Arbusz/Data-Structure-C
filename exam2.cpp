#include <iostream>
using namespace std;
struct DoublyNode{
    int value;
    DoublyNode *next;
    DoublyNode *pre;
    DoublyNode(){
        value = 0;
        next = NULL;
        pre = NULL;
    }
};

//creating func
DoublyNode* CreatDoublyList(int *array,int length){
    DoublyNode*p, *q, *head;
    q = head = new DoublyNode();
    head->pre = NULL;
    if(length==0)
        head = NULL;
    else {//链表的值跟数组中的值顺序相反
        for(int i=0;i<length;i++){
            p = new DoublyNode();
            p->value = array[i];
            q->next = p;
            p->pre = q;
            q = p;
        }
        q->next = NULL;
    }
    return head;
}

void RemoveNode(DoublyNode* head,int value){
    if(head==NULL){
        cout<<"There is no enough node!"<<endl;
        return;
    }
    DoublyNode* p = head;
    DoublyNode* tobeDelete = NULL;
    if(head->value==value){
        tobeDelete = head;
        if(head->next!=NULL)
            head = head->next;
    }
    while (p->next!=NULL&&p->next->value!=value)
        p = p->next;
    if(p->next!=NULL&&p->next->value==value){
        tobeDelete = p->next;
        p->next->next->pre = p;
        p->next=p->next->next;
    } else
        cout<<"404 not found"<<endl;
    if(tobeDelete!=NULL){
        delete tobeDelete;
        tobeDelete = NULL;
    }
}

void PrintList(DoublyNode* head){
    if(head==NULL) {
        cout<<"The list is empty!"<<endl;
        return;
    } else {
        DoublyNode* p = head;
        while (p!=NULL){
            cout<<p->value<<" ";
            p = p->next;
        }
    }
    cout<<endl;
}

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    DoublyNode* head = CreatDoublyList(a,10);
    cout<<"The new DoublyNodeList's values are:"<<endl;
    PrintList(head);
    system("Pause");
    RemoveNode(head,8);
    cout<<"The new DoublyNodeList's values after removed are:"<<endl;
    PrintList(head);
    return 0;
}
