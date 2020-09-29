//
// Created by puppet on 2020/9/26.
//
#include <stdio.h>
#include <malloc.h>
#define MaxSize 50
typedef  struct {
    int data[MaxSize];
    int length;
} SqList;

SqList InitLinst(){
    return *new SqList ;
}

int Length(SqList L){
    return L.length;
}

bool LocateElem(SqList L,int e){
    int flag = 0;
    for(int i=0;i<=L.length;i++){
        if(L.data[i]==e){
            flag = 1;
            return true;
        }
    }
    if(flag == 0){
        return false;
    }
}


bool GetElem(SqList L,int i,int &addr){
    if(i<0||i>L.length){
        return false;
    } else{
        addr = L.data[++i];
        return false;
    }
}

bool ListInsert(SqList &L,int i,int e){
    if(i>MaxSize||L.length>=MaxSize)
        return false;
    else {
        for(int j=MaxSize-1;j>i;j--){
            L.data[j]=L.data[j-1];
        }
        L.data[--i] = e;
        L.length++;
        return true;
    }
}

bool ListInsertE(SqList &L,int e){
    if(L.length>=MaxSize)
        return false;
    else{
        L.data[L.length] = e;
        L.length++;
        return true;
    }
}

bool ListDelete(SqList &L,int i,int &e){
    if(i>MaxSize||i<0){
        return false;
    } else{
        e = L.data[--i];
        for(;i<MaxSize-1;i++){
            L.data[i-1] = L.data[i];
        }
        L.length--;
        return true;
    }
}

void PrintLinst(SqList L){
    for (int i = 0; i < L.length ; i++) {
        printf("%d\t",L.data[i]);
    }
}

bool Empty(SqList L){
    if(L.length==0)
        return true;
    else
        return false;
}

void DestroyList(SqList *L){
    free(L);
}
int main(){
    SqList linear = InitLinst();
    printf("%d\n",Length(linear));
    if (ListInsert(linear,1,5))
        PrintLinst(linear);
//        printf("%d\n",Length(linear));
    printf("\n");
    ListInsertE(linear,3);
    ListInsertE(linear,9);
    int e;
    ListDelete(linear,3,e);
    printf("删除元素为:%d\n",e);
    PrintLinst(linear);
    return 0;
}

