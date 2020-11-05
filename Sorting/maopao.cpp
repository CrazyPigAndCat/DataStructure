//
// Created by puppet on 2020/10/24.
//
#include <stdio.h>
int data[] = {9,5,3,7,2,9,1,0,3,4,3,8,2,15,16};
int main(){
    int temp;
    for(int i=0;i<15;i++){
        for(int j=0;j<14;j++){
            if(data[j]>data[j+1]){
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
    for (int k = 0; k < 15; k++) {
        printf("%d ",data[k]);
    }
    return 0;
}
