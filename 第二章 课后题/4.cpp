#include <iostream>
using namespace std;
const int MinNumber=-1000000;
struct Node
{
	Node(int x)
	{
		value=x;
		next=NULL;
	}
	int value;
	Node* next;
};
int GetMax(Node* a)
{
	if(a==NULL) // 空链表 这时返回 MinNumber
		return MinNumber;
	int bValue=GetMax(a->next);
	if(a->value > bValue) // 作为递归出口
		return a->value;
	else
		return bValue;
}
int GetNodeNum(Node* a)
{
	if(a==NULL) // 作为递归出口
		return 0;
	return 1+GetNodeNum(a->next);
}
double GetAvg(Node* a,int n) //主要思想为：平均数公式 (a1+ a2+... +an)/n = a1/n+ a2/n+... +an/n
{
	if(a==NULL)
		return 0;
	return a->value/(double)n+GetAvg(a->next,n);
}
int main()
{
	Node* a=new Node(1);
	a->next=new Node(2);
	a->next->next=new Node(3);
	a->next->next->next=new Node(4);
	a->next->next->next->next=new Node(5);
	int max=GetMax(a);
	cout << max << endl;
	int nodeNum=GetNodeNum(a);
	cout << nodeNum << endl;
	double avg=GetAvg(a,nodeNum);
	cout << avg << endl;
	return 0;
}
