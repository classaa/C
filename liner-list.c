#include <stdio.h>
#include <stdlib.h>
//#define MAXNUM 100
typedef char DataType;

struct SeqList
{
    int MAXNUM;
    int n;
    DataType * element;
};

typedef struct SeqList *PSeqList;

PSeqList createNullList_seq(int m){
    PSeqList palist = (PSeqList)malloc(sizeof(struct SeqList));
    if(palist != NULL){
        palist -> element =(DataType *)malloc(sizeof(DataType) * m);
        if(palist ->element){
            palist->MAXNUM = m;
            palist->n=0;
            return(palist);
        }
        else
            free(palist);
    }
    printf("Out of space!! \n");
    return NULL;
}

int isNullList_seq(PSeqList palist){
    return (palist->n == 0);
}

int locate_seq(PSeqList palist,DataType x){
    int q;
    for(q=0;q<palist->n;q++)
        if(palist->element[q] ==x) return(q);
    return (-1);
}

int insertPre_seq(PSeqList palist,int p,DataType x){
    int q;
    if(palist->n >=palist->MAXNUM){
        printf("Overflow! \n");
        return(0);
    }
    if(isNullList_seq(palist)){
        palist->element[0] = x;
        palist->n=1;
        return(1);
    }

    if(p<0||p>palist->n){
        printf("Not exist! \n");
    }

    for(q=palist->n - 1;q >= p;q--){
        palist->element[q+1] = palist->element[q];

        palist->element[p] = x;
        palist->n = palist->n + 1;
        return (1);
    }
}

int insertPost_seq(PSeqList palist,int p,DataType x){
    int q;
    if(palist->n >=palist->MAXNUM){
        printf("Overflow! \n");
        return(0);
    }
    if(isNullList_seq(palist)){
        palist->element[0] = x;
        palist->n=1;
        return(1);
    }

    if(p<0||p>palist->n){
        printf("Not exist! \n");
    }

    for(q=palist->n - 1;q >= p + 1;q--){
        palist->element[q+1] = palist->element[q];

        palist->element[p+1] = x;
        palist->n = palist->n + 1;
        return (1);
    }
}

int deleteP_seq(PSeqList palist,int p){
    int q;
    if(p<0 || p>palist->n-1){
        printf("Not exist! \n");
        return(0);
    }
    for(q=p;q<palist->n-1;q++)
        palist->element[q] = palist->element[q+1];
    palist->n = palist->n-1;
    return(1);
}

void main(){
    int STATUS;
    PSeqList a= createNullList_seq(1000);
    STATUS = insertPre_seq(a,10,'A');
    printf("STATUS=%d\n",STATUS);
    printf("a.elemnet=%c----a.MAXNUM=%d-----a.n=%d\n",a->element[1],a->MAXNUM,a->n);
    printf("a ==%d",a);
}
