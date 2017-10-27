#include <iostream>
#include <queue>
using namespace std;
struct link
{
    queue<int> *q;
    struct link *next;
};
int main()
{
    queue<int> *Q;
    Q=new queue<int>[10];
    int n,i,count=0;
    struct link *front, *l1, *l2;
    cin>>n;
    while(n>=0 && n<=9)
    {
        Q[n].push(n);
        cin>>n;
    }
    front=l2=new struct link;
    for(i=0;i<10;i++)
    {
        if(!Q[i].empty())
        {
            count++;
            l1=l2;
            l1->q=&Q[i];
            l2=new struct link;
            l1->next=l2;
        }
    }
    l1->next=NULL;
    delete l2;
    l1=front;
    for(i=0;i<count;i++)
    {
        while(!l1->q->empty())
        {
            cout<<l1->q->front()<<" ";
            l1->q->pop();
        }
        cout<<endl;
        l1=l1->next;
    }
    return 0;
}