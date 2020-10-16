//
// Created by puppet on 2020/10/16.
//
#include <stdio.h>
typedef  struct {
    int  data[50];
    int length;
} SqList;

int Del_min(SqList &L){
    int min = 999999999;
    int index = 1;
    for(int i=0;i<L.length;i++){
        if(L.data[i]<min){
            min = L.data[i];
            index = i;
        }
//printf("%d ",L.data[i]);
    }
    L.data[index] = L.data[L.length-1];
//    printf("min: %d;index: %d",min,index);
    return min;
}



int main(){
    SqList sqList = *new SqList();
    for(int i=0;i<5;i++){
        sqList.data[i]=i+1;
        sqList.length++;
    }
    int min = Del_min(sqList);
    printf("min: %d\n",min);
    for(int i=0;i<sqList.length;i++){
        printf("%d  ",sqList.data[i]);
    }
}


