#include<iostream>
using namespace std;
class ArrayStack
{
private:
    int maxSize;
    int top;
    int *array;
    int size;
public:
    ArrayStack(int size)
    {
        maxSize=size;
        top=-1;
        array=new int[maxSize];
        size=0;
    }
    ArrayStack()
    {
        array=new int[32];
        top=-1;
        size=0;
    }
    ~ArrayStack()
    {
        delete []array;
    }
    bool Push(const int num)
    {
        if(top==maxSize-1)
        {
            cout<<"栈满溢出"<<endl;
            return false;
        }
        else
        {
            array[++top]=num;
            size++;
            return true;
        }
    }
    int Pop()
    {
        if(top==-1)
        {
            //cout<<"栈为空，不能进行删除操作"<<endl;
            exit(0);
        }
        else
        {
            int num=array[top--];
            return num;
        }
    }
    bool Top(int &num)
    {
        if(top==-1)
        {
            cout<<"栈为空，不能读取栈顶元素"<<endl;
            return false;
        }
        else
        {
            num=array[top];
            return true;
        }
    }
    bool isEmpty()
    {
        if(top==-1)
            return true;
        else
            return false;

    }
};
int main()
{
    int num,d,div,temp;
    cout<<"请输入一个十进制整数"<<endl;
    cin>>num;
    cout<<"请输入需要转化的进制(2-9)"<<endl;
    cin>>d;
    ArrayStack as;
    if(d>=2&&d<=9)
    {
        if(num==0)
        {
            cout<<'0'<<endl;
        }
        while(num)
        {
            div=num%d;
            as.Push(div);
            num/=d;
        }
        while(!as.isEmpty())
        {
            temp=as.Pop();
            cout<<temp;
        }
        cout<<endl;
    }
    else
        cout<<"转化的进制输入错误"<<endl;
    return 0;
}
