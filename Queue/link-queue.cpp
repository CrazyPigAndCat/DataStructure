//
// Created by puppet on 2020/9/21.
//

#include <stdio.h>
#include <malloc.h>

typedef struct LinkNode{
    int data;
    struct LinkNode *next;
}LinkNode;

typedef struct {
    LinkNode *front,*rear;
}LinkQueue;

void InitQueue(LinkQueue &Q){
    Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
    Q.front->next = NULL;
}

bool IsEmpty(LinkQueue Q){
    if(Q.front == Q.rear)
        return true;
    else
        return false;
}

void InQueue(LinkQueue &Q,int x){
    LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
    s->data = x ;
    s->next = NULL;
    Q.rear->next = s;
    Q.rear = s;
}

bool OutQueue(LinkQueue &Q,int &x){
    if(Q.front == NULL)
        return false;
    LinkNode *p = Q.front;
    x = p->data;
    if(Q.rear == p){
        Q.front = NULL;
        Q.rear = NULL;
    }
    free(p);
    return true;
}