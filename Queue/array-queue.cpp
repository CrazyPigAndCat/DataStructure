//
// Created by puppet on 2020/9/21.
//
#include <stdio.h>
#define MaxSize 10
typedef struct {
    int data[MaxSize];
    int front,rear;
} SqQueue;

void InitQueue(SqQueue &Q){
    Q.front = Q.rear = 0;
}

bool QueueEmpty(SqQueue &Q){
    if(Q.front == Q.rear)
        return true;
    else
        return false;
}

bool InQueue(SqQueue &Q,int x){
    if((Q.rear+1)%MaxSize == Q.front)
        return false;
    Q.data[Q.rear] = x;
    Q.rear = (Q.rear+1)%MaxSize;
    return true;
}

bool OutQueue(SqQueue &Q,int &x){
    if(Q.rear == Q.front)
        return false;
    x = Q.data[Q.front];
    Q.front = (Q.front+1)%MaxSize;
    return true;
}

int QueueLength(SqQueue &Q){
    return (Q.rear+MaxSize-Q.front)%MaxSize;
}