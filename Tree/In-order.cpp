//
// Created by puppet on 2020/10/2.
//
#include <stdio.h>
struct ElemType{int value;};
typedef struct BiTNode{
    ElemType data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;


ElemType visit(BiTree T){
    return T->data;
}

void InOrder(BiTree T){
    if(T!=NULL){
        InOrder(T->lchild);
        visit(T);
        InOrder(T->rchild);
    }
}
