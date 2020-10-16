//
// Created by puppet on 2020/10/16.
//
#include <stdio.h>
int main(){
    int one[] = {5,4,3,9,9,5,4,6,9,5,};
    int two[] = {8,5,4,3,8,32};
    int same[10];
    int x=0;
    for(int i=0;i<6;i++){
        for(int j=0;j<10;j++){
            if(two[i]==one[j]){
                same[x++]=two[i];
            }
        }
    }
    int same_one = -1;
    for(int i=0;i<x;i++){
        if(same_one!=same[i]){
            printf("%d ",same[i]);
            same_one = same[i];
        }

    }
}