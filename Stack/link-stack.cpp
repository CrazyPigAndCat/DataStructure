//
// Created by puppet on 2020/9/21.
//
#include <stdio.h>
#include <malloc.h>

typedef struct LinkNode{
    int data;
    LinkNode *next;
} *LinkStack;

void InitStack(LinkStack &S){
    S->next = NULL;
}

bool StackEmpty(LinkStack &S){
    if(S->next == NULL)
        return true;
    else
        return false;
}

bool Push(LinkStack &S,int x){
    LinkNode *node = (LinkNode*)malloc(sizeof(LinkNode));
    node->data = x;
    printf("%d",node->next);
    node->next = S->next;
    S->next = node;
}

bool Pop(LinkStack &S,int &x){
    if(S->next == NULL)
        return false;
    x = S->next->data;
    S->next = S->next->next;
    return true;
}

bool GetTop(LinkStack &S,int &x){
    if(S->next == NULL)
        return false;
    x = S->next->data;
    return true;
}

void PrintStack(LinkStack &S){
    while (S->next != NULL){
        printf("%d ",S->next->data);
        S = S->next;
    }
}

int main(){
    LinkStack *Stack = (LinkStack*)malloc(sizeof(LinkStack));
    int x;
    InitStack(*Stack);
    Push(*Stack,1);
//    Pop(*Stack,x);
    Push(*Stack,2);
//    PrintStack(*Stack);
}


