#include <iostream>
using namespace std;
#define N 10
struct Node{
    int elem;
    Node *next;
    Node(){
        elem=0;
        next=NULL;
    }
    Node(int _elem){
        elem=_elem;
        next=NULL;
    }
};

//list creating func
Node *CreateNodeList(int data[N]){
    Node *head = new Node();
    head->elem = data[0];
    for(int i=N-1;i>0;i--){
        Node *p = new Node();
        p->elem = data[i];
        p->next = head->next;
        head->next = p;
    }
    return head;

}

Node *reverse(Node *head){
    if(head==NULL||head->next==NULL)
        return head;
    Node *newHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

void PrintList(Node *head){
    if(head==NULL)
        cout<<"It's is empty."<<endl;
    else {
        Node *p = head;
        while(p!=NULL){
            cout<<p->elem<<" ";
            p = p->next;
        }
        cout<<endl;
    }
}

int main(){
    int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Node *head = CreateNodeList(data);
    PrintList(head);
    PrintList(reverse(head));
}
