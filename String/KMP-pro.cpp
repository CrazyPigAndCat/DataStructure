//
// Created by puppet on 2020/10/2.
//
#include <stdio.h>
#define MAXLEN 255
typedef struct{
    char ch[MAXLEN];
    int length;
}SString;

int Index(SString S,SString T){
    int k=1;
    int i=k,j=1;
    while (i<=S.length &&j<T.length){
        if(S.ch[i]==T.ch[j]){
            ++i;
            ++j;
        } else{
            k++;
            i=k;
            j=1;
        }
    }
    if(j>T.length)
        return k;
    else
        return 0;
}
