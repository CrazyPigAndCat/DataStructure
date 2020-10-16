//
// Created by puppet on 2020/10/16.
//
#include <stdio.h>
int main(){
    int data[] = {5,6,1,4,3,5,6,5,6,5,5,5,5,4,8,9};
    int length = 16,index=0;
    int new_data[length];
    for(int i=0;i<16;i++){
        if(data[i]!=5){
            new_data[index++] = data[i];
            length--;
        }
    }
    for(int i=0;i<length;i++){
        printf("%d ",new_data[i] );
    }
}
