#include <stdio.h>
#define MAXSIZE 20
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int ElemType;
typedef int Status;

Status InitList(*L){

    typedef struct
    {
        ElemType data[MAXSIZE];
        int length;
    }SqList;

    *L = SqList.data;
    return OK;
}

Status GetElem(SqList L,int i,ElemType *e){
    if(L.length == 0 || i > L.length || i < 1)
        return ERROR;

    *e = L.data[i-1];
    return OK;
}

Status ListInsert(SqList L,int i,ElemType e){
    if(i < 1 || i >= MAXSIZE)
        return ERROR;

    if( i <=L.length){
        for(h=L.length;h>=i;h--)
            L.data[h] = L.data[h-1];
        L.data[i-1] = *e;
        L.length++;
        return OK;
    }else{
        L.data[i-1] = e;
        L.length++;
        return OK;
    }

}

Status ListDel(SqList L,int i){
    if(i>L.length || i <1)
        return ERROR;
    if(i<L.length){
        for(h=i;h<L.length;h++)
            L.data[h-1] = L.data[h];
    }
    L.length--;
    return OK;
}
