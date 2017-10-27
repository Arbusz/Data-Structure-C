////
//// Created by arbus on 2017/10/18.
////

#include <iostream>
#include "CircleQueue.h"
using namespace std;
CircleQueue::CircleQueue(int qsize){
    size = qsize;
    front = 0;
    rear = 0;
    count = 0;
    tag=0;
    cq = new int[qsize];
}
CircleQueue::~CircleQueue(){
    delete []cq;
    cq = NULL;
}
void CircleQueue::clearCircleQueue(){
    front = 0;
    rear = 0;
    count = 0;
    tag = 0;
}
bool CircleQueue::IsEmpty() const {
    return count == 0 ? true : false;
}
bool CircleQueue::IsFull() const {
    return count == size ? true : false;
}
int CircleQueue::queueLength() const{
    return count;
}
bool CircleQueue::EnQueue(int data){
    if(IsFull()){
        return false;
    }
    else{
        cq[rear] = data;//插入元素到队列尾
        rear++;
        rear = rear % size;
        count++;
        return true;
    }
}
bool CircleQueue::DeQueue(int &data){
    if(IsEmpty()){
        return false;
    }
    else{
        data = cq[front];
        front++;
        front = front % size;
        count--;
        return true;
    }
}
void CircleQueue::TraverseQueue(){
    for(int i = front; i < count + front; i++){
        cout<<cq[i % size] << endl;
    }
    cout << endl;
}