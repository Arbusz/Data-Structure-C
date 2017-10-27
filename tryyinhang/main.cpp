#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<queue>
#include<Windows.h>
using namespace std;
class User
{
public:
int userID;
int type;//0为普通用户，1为VIP用户,2为对公用户.
User() { type = 0; userID = 1000; }
User(int t, int id) { userID = id, type = t; }
};
class BankWindow
{
public:
int id;//0,1,2,为普通窗口,3为VIP窗口,4为对公窗口.
bool isBusy;
User client;
int serviceStartTime=0;
BankWindow() { isBusy = false; }
BankWindow(int i)  { id = i; isBusy = false; }
};
class Simulater
{
private:
int serviceTime[3] = {4,6,8};
int initID = 1000;
BankWindow bankWindow0;
BankWindow bankWindow1;
BankWindow bankWindow2;
BankWindow bankWindow3;
BankWindow bankWindow4;
queue<User> NormalUserQueue, VIPUserQueue, OfficialUserQueue;
public:
Simulater()
{
bankWindow0.id = 0;
bankWindow1.id = 1;
bankWindow2.id = 2;
bankWindow3.id = 3;
bankWindow4.id = 4;
srand(unsigned(time(0)));
}
void enterQueue(User user)
{
if (user.type == 0)
{
cout << "普通客户 进入排队， 编号:" <<user.userID<< endl;
NormalUserQueue.push(user);
}
else if(user.type==1)
{
cout << "VIP客户  进入排队,  编号:"<<user.userID<<endl;
VIPUserQueue.push(user);
}
else if (user.type == 2)
{
cout << "对公客户 进入排队,  编号:" <<user.userID<< endl;
OfficialUserQueue.push(user);
}
else
{
cout << "用户类型出错!";
}
}
void output(User user)
{
if (user.type == 0)
{
cout << "普通客户 " << "编号为: " << user.userID;
}
else if (user.type == 1)
{
cout << "VIP客户 " << " 编号为: " << user.userID;
}
else if (user.type == 2)
{
cout << "对公客户 " << "编号为: " << user.userID;
}
else
{
cout << "用户类型错误!" << endl;
}
}
void output2(User user)
{
if (user.type == 0)
{
cout << "  客户类型: " << "普通  "<< "客户编号: " << user.userID;
}
else if (user.type == 1)
{
cout << "  客户类型: " << "VIP   " << "客户编号: " << user.userID;
}
else if (user.type == 2)
{
cout << "  客户类型: " << "对公  " << "客户编号: " << user.userID;
}
else
{
cout << "  用户类型错误!" << endl;
}
}
void enterWindow(int time)
{
if (bankWindow0.isBusy == false && !NormalUserQueue.empty())
{
bankWindow0.client = NormalUserQueue.front();
output(bankWindow0.client);
cout<<" 请进入0号普通窗口服务" << endl;
bankWindow0.isBusy = true;
bankWindow0.serviceStartTime = time;
NormalUserQueue.pop();
}
if (bankWindow1.isBusy == false && !NormalUserQueue.empty())
{
bankWindow1.client = NormalUserQueue.front();
output(bankWindow1.client);
cout << " 请进入1号普通窗口服务" << endl;
bankWindow1.isBusy = true;
bankWindow1.serviceStartTime = time;
NormalUserQueue.pop();
}
if (bankWindow2.isBusy == false && !NormalUserQueue.empty())
{
bankWindow2.client = NormalUserQueue.front();
output(bankWindow2.client);
cout << " 请进入2号普通窗口服务" << endl;
bankWindow2.isBusy = true;
bankWindow2.serviceStartTime = time;
NormalUserQueue.pop();
}
if (bankWindow3.isBusy == false)
{
if (!VIPUserQueue.empty())
{
bankWindow3.client = VIPUserQueue.front();
bankWindow3.isBusy = true;
bankWindow3.serviceStartTime = time;
VIPUserQueue.pop();
}
else if (!NormalUserQueue.empty())
{
bankWindow3.client = NormalUserQueue.front();
bankWindow3.isBusy = true;
bankWindow3.serviceStartTime = time;
NormalUserQueue.pop();
}
else
{


}
output(bankWindow3.client);
cout << " 请进入3号VIP窗口服务" << endl;
}
if (bankWindow4.isBusy == false)
{
if (!OfficialUserQueue.empty())
{
bankWindow4.client = OfficialUserQueue.front();
bankWindow4.isBusy = true;
bankWindow4.serviceStartTime = time;
OfficialUserQueue.pop();
}
else if (!NormalUserQueue.empty())
{
bankWindow4.client = NormalUserQueue.front();
bankWindow4.isBusy = true;
bankWindow4.serviceStartTime = time;
NormalUserQueue.pop();
}
else {}
output(bankWindow4.client);
cout << " 请进入4号对公窗口服务" << endl;
}
}
void display(int time)
{
cout << "-当前模拟时间:" << time << "s -" << endl;
windowCondition(bankWindow0);
windowCondition(bankWindow1);
windowCondition(bankWindow2);
windowCondition(bankWindow3);
windowCondition(bankWindow4);
}
void customerEnter()
{
int type = rand() % 12;//不同概率生成用户.
if (type >= 0 && type <= 5)
{
User u(0, initID);
enterQueue(u);
}
if (type >= 6 && type <= 9)
{
User u(1, initID);
enterQueue(u);
}
if (type >= 10 && type <= 11)
{
User u(2, initID);
enterQueue(u);
}
initID++;
}
void windowCondition(BankWindow bankWindow)
{
cout << "窗口号:" << bankWindow.id<<"   ";
if (bankWindow.isBusy == true)
{
cout << "-正在服务-";
output2(bankWindow.client);
}
else
{
cout << "-等待服务-";
}
cout << endl;
}
void isBusy(int time)//扫描一遍窗口,检测服务是否结束
{
if (bankWindow0.isBusy == true)
{
if (time - bankWindow0.serviceStartTime >= serviceTime[bankWindow0.client.type])
{
bankWindow0.isBusy = false;
}
}
if (bankWindow1.isBusy == true)
{
if (time - bankWindow1.serviceStartTime >= serviceTime[bankWindow1.client.type])
{
bankWindow1.isBusy = false;
}
}
if (bankWindow2.isBusy == true)
{
if (time - bankWindow2.serviceStartTime >= serviceTime[bankWindow2.client.type])
{
bankWindow2.isBusy = false;
}
}
if (bankWindow3.isBusy == true)
{
if (time - bankWindow3.serviceStartTime >= serviceTime[bankWindow3.client.type])
{
bankWindow3.isBusy = false;
}
}
if (bankWindow4.isBusy == true)
{
if (time - bankWindow4.serviceStartTime >= serviceTime[bankWindow4.client.type])
{
bankWindow4.isBusy = false;
}
}
}
void simulate()
{
int time = 0;
cout << "--------模拟开始--------" << endl;
cout << "初始化用户:" << endl;
for (int i = 0; i < 10; i++)
{
customerEnter();
}
enterWindow(time);
while (1)
{
display(time);
enterWindow(time);
isBusy(time);
if (time/2 != 0)
{
customerEnter();//没间隔两秒进入一位客户.
}
Sleep(1000);
time++;
if (time == 21)
{
getchar();
}
}
}
};
int main()
{
Simulater simulater;
simulater.simulate();
}