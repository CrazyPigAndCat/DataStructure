//
// Created by puppet on 2020/10/2.
//
#include <stdio.h>
struct ElemType{int value;};
typedef struct BiTNode{
    ElemType data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;


ElemType visit(BiTNode T){
    return T.data;
}

void PostOrder(BiTree T){
    if(T!=NULL){
        PostOrder(T->lchild);
        PostOrder(T->rchild);
        visit(*T);
    }
}
