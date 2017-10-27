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
    int type;
    User() { type = 0; userID = 1000; }
    User(int t, int id) { userID = id, type = t; }
};
class BankWindow
{
public:
    int id;
    bool isBusy;
    User client;
    int serviceStartTime=0;
    BankWindow() { isBusy = false; }
    BankWindow(int i)  { id = i; isBusy = false; }
};
class Simulator
{
private:
    int serviceTime[3]={3,5,7};
    int initID = 0000;
    BankWindow bankWindow0;
    BankWindow bankWindow1;
    BankWindow bankWindow2;
    BankWindow bankWindow3;
    BankWindow bankWindow4;
    queue<User> NormalUserQueue, VIPUserQueue, OfficialUserQueue;
public:
    Simulator()
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
            cout << "NormalCustomer enqueue， number:" <<user.userID<< endl;
            NormalUserQueue.push(user);
        }
        else if(user.type==1)
        {
            cout << "VIPCustomer  enqueue,  number:"<<user.userID<<endl;
            VIPUserQueue.push(user);
        }
        else if (user.type == 2)
        {
            cout << "OfficalCustomer enqueue,  number:" <<user.userID<< endl;
            OfficialUserQueue.push(user);
        }
        else
        {
            cout << "UserType Error!";
        }
    }
    void output(User user)
    {
        if (user.type == 0)
        {
            cout << "NormalCustomer " << "Number: " << user.userID;
        }
        else if (user.type == 1)
        {
            cout << "VIPCustomer " << " number: " << user.userID;
        }
        else if (user.type == 2)
        {
            cout << "OfficalCustomer " << "Number: " << user.userID;
        }
        else
        {
            cout << "CustomerType Error!" << endl;
        }
    }
    void output2(User user)
    {
        if (user.type == 0)
        {
            cout << "  CustomerType: " << "Normal  "<< "CustomerNumber: " << user.userID;
        }
        else if (user.type == 1)
        {
            cout << "  CustomerType: " << "VIP   " << "CustomerNumber: " << user.userID;
        }
        else if (user.type == 2)
        {
            cout << "  CustomerType: " << "Offical  " << "CustomerNumber: " << user.userID;
        }
        else
        {
            cout << "  UserType Error!" << endl;
        }
    }
    void enterWindow(int time)
    {
        if (bankWindow0.isBusy == false && !NormalUserQueue.empty())
        {
            bankWindow0.client = NormalUserQueue.front();
            output(bankWindow0.client);
            cout<<" Please Enter 0 Normal Window" << endl;
            bankWindow0.isBusy = true;
            bankWindow0.serviceStartTime = time;
            NormalUserQueue.pop();
        }
        if (bankWindow1.isBusy == false && !NormalUserQueue.empty())
        {
            bankWindow1.client = NormalUserQueue.front();
            output(bankWindow1.client);
            cout <<" Please Enter 1 Normal Window" << endl;
            bankWindow1.isBusy = true;
            bankWindow1.serviceStartTime = time;
            NormalUserQueue.pop();
        }
        if (bankWindow2.isBusy == false && !NormalUserQueue.empty())
        {
            bankWindow2.client = NormalUserQueue.front();
            output(bankWindow2.client);
            cout << " Please Enter 2 Normal Window" << endl;
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
            cout << " Please Enter 3 Normal Window" << endl;
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
            cout << " Please Enter 4 Normal Window" << endl;
        }
    }
    void display(int time)
    {
        cout << "-Now:" << time << "s -" << endl;
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
        cout << "Window Number:" << bankWindow.id<<"   ";
        if (bankWindow.isBusy == true)
        {
            cout << "-Severing-";
            output2(bankWindow.client);
        }
        else
        {
            cout << "-Waiting-";
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
        cout << "--------Start--------" << endl;
        cout << "Init:" << endl;
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
                customerEnter();
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
    Simulator Simulator;
    Simulator.simulate();
}