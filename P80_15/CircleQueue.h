//
// Created by arbus on 2017/10/18.
//

#ifndef P80_15_CIRCLEQUEUE_H
#define P80_15_CIRCLEQUEUE_H

class CircleQueue{
private:
    int size,count;
    int *cq;
    int front, rear;
    int tag;
public:
    CircleQueue(int qsize);
    virtual ~CircleQueue();
    void clearCircleQueue();
    bool IsEmpty() const;
    bool IsFull() const;
    int queueLength()const;
    bool EnQueue(int data);
    bool DeQueue(int &data);
    void TraverseQueue();

};
#endif //P80_15_CIRCLEQUEUE_H
