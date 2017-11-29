#include<iostream>
using namespace std;
template<class T>
class LinkNode{
public:
    T data;
    LinkNode<T>*next;
    LinkNode(const T&el,LinkNode<T>*ptr=0)
    {
        data=el;
        next=ptr;
    }
};
template<class T>
class LinkQueue{
public:
    int size;
    LinkNode<T>* front;
    LinkNode<T>* rear;
    LinkQueue()
    {
        size=0;
        front=rear=NULL;
    }
    ~LinkQueue()
    {
        Clear();
    }
    void Clear()
    {
        while(front!=NULL)
        {
            rear=front;
            front=front->next;
            delete rear;
        }
        rear=front;
        size=0;
    }
    bool EnQueue(const T& item)
    {
        if(rear==NULL)
        {
            front=rear=new LinkNode<T>(item,NULL);
        }
        else
        {
            rear->next=new LinkNode<T>(item,NULL);
            rear=rear->next;
        }
        size++;
        return true;
    }
    bool DeQueue(T& item)
    {
        LinkNode<T>* temp;
        if(size==0)
        {
            cout<<"The Queue is Empty!"<<endl;
            return false;
        }
        item=front->data;
        temp=front;
        front=front->next;
        delete temp;
        if(front==NULL)
        {
            rear=NULL;
        }
        size--;
        return true;
    }
    bool GetFront(T& item)
    {
        if(size==0)
        {
            cout<<"The Queue is Empty!"<<endl;
            return false;
        }
        item=front->data;
        return true;
    }
    LinkNode<T>* getFront()
    {
        return front;
    }
    LinkNode<T>* getRear()
    {
        return rear;
    }
    int getSize()
    {
        return size;
    }
    void show()
    {
        LinkNode<T>*temp;
        temp=front;
        while(temp!=NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
    }
};
int main(){
    int a[10]={0},num,i,j;
    bool wrong=false;//判断输入的数字是否符合要求
    char c;
    LinkQueue<int> *lq=new LinkQueue<int>[10];
    do{
        do{
            cout<<"Input a number(0<=number<=9)"<<endl;
            cin>>num;
            if(num>=0&&num<=9)
                wrong=true;
            else
                cout<<"The number is not qualified!"<<endl;
        }while(wrong==false);
        a[num]=1;
        lq[num].EnQueue(num);
        cout<<"If continue?(y or n)"<<endl;
        cin>>c;
    }while(c=='y');
    for(i=0;a[i]!=1;)
    {
        i++;
    }
    j=i;//记录第一个非空队列的序号
    for(i=j+1;i<10;i++)
    {
        if(a[i]!=0)
        {
            lq[j].rear->next=lq[i].getFront();
            lq[j].rear=lq[i].getRear();
        }
    }
    lq[j].show();
    return 0;
}
