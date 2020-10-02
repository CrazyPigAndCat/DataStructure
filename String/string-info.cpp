//
// Created by puppet on 2020/10/1.
//
#include <stdio.h>
#include <malloc.h>

#define MAXLEN 255
typedef struct{
    char ch[MAXLEN];
    int length;
}SString;

bool SubString(SString &Sub,SString S,int pos,int  len){
    if(pos+len-1>S.length)
        return false;
    for(int i=pos;i<S.length;i++){
        Sub.ch[i-pos+1] = S.ch[i];
    }
    Sub.length = len;
    return true;
}

int StrCompare(SString S,SString T){
    for (int i = 0; i < S.length&&i<T.length; i++) {
        if(S.ch[1]!=T.ch[i])
            return S.ch[i]-T.ch[i];
    }
    return S.length - T.length;
}

int Index(SString S,SString T){
    int i=1,n=S.length,m=T.length;
    SString sub;
    while (i<=n-m+1){
        SubString(sub,S,i,m);
        if(StrCompare(sub,T)!=0)
            ++i;
        else
            return i;
    }
    return 0;
}
