//
// Created by puppet on 2020/10/16.
//
#include <stdio.h>

int main(){
    int data[] = {0,1,2,3,4,5,6,7,8,9};
    int length = 10;
    int temp = 0 ;
    for(int i=0;i<length/2;i++){
        temp = data[i];
        data[i] = data[length-1-i];
        data[length-1-i] = temp;
    }
    for(int i=0;i<length;i++){
        printf("%d ",data[i]);
    }
}


