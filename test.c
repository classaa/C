#include <stdio.h>
#define MAXSIZE 20
typedef int ElemType;

/*void InitList(*L){


    typedef struct
    {
        ElemType data[MAXSIZE];
        int length;
    }SqList;

    *L = SqList;
} */



void main() {
    /*int min,max,fahr,step,celsius;
    min = 0;
    max = 300;
    step = 20;

    fahr = min;
    while (fahr <= max){
        celsius = 5 * (fahr-32) / 9;
        printf("%3d\t%6d\n",fahr,celsius);
        fahr = fahr + step;
    } */
    int hh,zb,kg;
    int c;
    hh,zb,kg=0;
    while ((c = getchar()) != EOF)
    {
        if(c == '\n')
            hh++;
        if(c == ' ')
            kg++;
        if(c=='\t')
            zb++;
    }
    printf("kongge:%d\thuanhang:%d\tzhibiao:%d",kg,hh,zb);

    //putchar(c);
    //printf("%d\n",c);

    //printf("sfsfsdf");
}
