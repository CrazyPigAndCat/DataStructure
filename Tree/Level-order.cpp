//
// Created by puppet on 2020/10/2.
//
#include <stdio.h>
#include <malloc.h>
struct ElemType{int value;};
typedef struct BiTNode{
    ElemType data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
typedef struct LinkNode{
    BiTNode *data;
    struct LinkNode *next;
}LinkNode;

typedef struct {
    LinkNode *front,*rear;
}LinkQueue;

ElemType visit(BiTNode T){
    return T.data;
}
void InQueue(LinkQueue &Q){
    LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));
    s->next = NULL;
    Q.rear->next = s;
    Q.rear = s;
}
void EnQueue(LinkQueue Q,BiTNode *T){}
bool IsEmpty(LinkQueue Q){}
void DeQueue(LinkQueue Q,BiTNode T){}
void LevelOrder(BiTree T){
    LinkQueue Q;
    InQueue(Q);
    BiTree p;
    EnQueue(Q,T);
    while (!IsEmpty(Q)){
        DeQueue(Q,*p);
        visit(*p);
        if(p->lchild!=NULL)
            EnQueue(Q,p->lchild);
        if(p->rchild!=NULL)
            EnQueue(Q,p->rchild);
    }
}


