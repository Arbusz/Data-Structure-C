#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
class LinkList{
private:
    Node *head,*tail;
public:
    LinkList()
    {
        head = NULL;//不带头结点
    }
    void Inset(int a);
    void show();
    void reverse();
    ~LinkList(){//循环析构头结点
        Node *p=0;
        while(head)
        {
            p = head;
            head = head->next;
            delete p;
        };
    }
};
void LinkList::show()
{
    Node *p = head;
    while(p)
    {
        cout<<p->data<<' ';
        p = p->next;
    }
    cout<< endl;
}
void LinkList::reverse()//1->2->3->4,1<-2 3->4,1<-2<-3 4,1<-2<-3<-4
{
    Node *p,*q;
    if(head && head->next)
    {
        p=head;
        q=p->next;
        p->next=NULL;//断开头指针
        while(q)
        {
            p=q;
            q=q->next;//p,q往后挪一位
            p->next=head;//next指向上一个节点
            head=p;//头结点往后挪一位
        }
    }
}
void LinkList::Inset(int a)
{
    Node *s = new Node;
    s->data = a;
    if(!head)//判断插入的是否为第一个节点
    {
        head = tail = s;
    }
    else
    {
        tail->next=s;
        tail = s;
        s->next=NULL;
    }
}
int main()
{
    LinkList list;
    int n = 0, i = 0, j;
    cout<<"请输入单链表中的节点个数：";
    cin>>n;
    cout<<"请输入所要建立的单链表所包含的元素："<< endl;
    while(i<n)
    {
        cin>>j;
        list.Inset(j);
        i++;
    }
    list.show();
    list.reverse();
    list.show();
    return 0;
}
