#include <iostream>
#include "CircleQueue.h"
using namespace std;

int main(){
    CircleQueue *cqueue = new CircleQueue(4);
    cqueue->EnQueue(100);
    cqueue->EnQueue(200);
    cqueue->EnQueue(300);
    cqueue->EnQueue(400);
    //cqueue->EnQueue(500);

    cqueue->TraverseQueue();
    int e = 0;
    cqueue->DeQueue(e);
    cout << e << endl;

    cqueue->DeQueue(e);
    cout << e << endl;

    cqueue->clearCircleQueue();
    cqueue->TraverseQueue();

    cqueue->EnQueue(3);
    cqueue->EnQueue(2);
    cqueue->TraverseQueue();

}
