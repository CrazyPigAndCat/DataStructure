//
// Created by puppet on 2020/9/21.
//
#include <stdio.h>
#define MaxSize 50 //定义栈中元素的最大个数
#define Elemtype int;
typedef struct {
    int data[MaxSize];
    int top;
} SqStack;

void InitStack(SqStack &S){//初始化栈
    S.top = -1;
}

bool StackEmpty(SqStack S){//判断栈空
    if(S.top == -1)
        return true;
    else
        return false;
}

bool Push(SqStack &S,int x){//进栈
    if(S.top == MaxSize-1)
        return false;
    S.data[++S.top] = x;
    return true;
}

bool Pop(SqStack &S,int &x){//出栈
    if(S.top == -1)
        return false;
    x = S.data[S.top--];
    return true;
}

bool GetTop(SqStack S,int &x){//获取栈顶元素
    if(S.top == -1)
        return false;
    x = S.data[S.top];
    return true;
}

int StackLength(SqStack &S){
    return S.top+1;
}

void PrintStack(SqStack &S){
    int top = S.top;
    for(;S.top != -1;){
        printf("%d ",S.data[S.top--]);
    }
    S.top = top;
    printf("\n");
}


int main(){
    SqStack Stack;
    int x;
    InitStack(Stack);//初始化栈
    Push(Stack,0);//数据“1”进栈
    Push(Stack,1);//数据“1”进栈
    Pop(Stack,x);
    Push(Stack,2);
    Push(Stack,3);
    Push(Stack,4);
    Pop(Stack,x);
    Pop(Stack,x);
    Push(Stack,5);
    PrintStack(Stack);
    GetTop(Stack,x);
    printf("栈顶元素为：%d\n",x);
    printf("栈的深度：%d",StackLength(Stack));
    return 0;
}

