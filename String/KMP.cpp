//
// Created by puppet on 2020/10/2.
//
#include <stdio.h>
#define MAXLEN 255
typedef struct{
    char ch[MAXLEN];
    int length;
}SString;

int Index_KMP(SString S,SString T,int next[]){
    int i=1,j=1;
    while (i<=S.length&&j<T.length){
        if(j==0||S.ch[i]==T.ch[j]){
            ++i;
            ++j;
        }else{
            j=next[j];
        }
    }
    if(j>T.length)
        return i-T.length;
    else
        return 0;
}

void get_next(SString T,int next[]){
    int i=1,j=0;
    next[1]=0;
    while (i<T.length){
        if{j==0||T.ch[i]==Y.ch[j]}{
            ++i;
            ++j;
            next[i]=j;
        }else{
            j=next[j];
        }
    }
}


