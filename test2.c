#include <stdio.h>

void main(){
    /* int a[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int *p=a;
    int i;
    for(i=0;i<20;i++){
        (*p)++;
        p++;
        printf("p=%d----------*p=%d\n",p,a[i]);
    } */

    char b='A';
    char c='C';
    char * p=0;
    //printf("%d",*p);
    p=&b;
    //*p=c;
    //char **ptr=&p;
    printf("&b=%x\n",&b);
    //printf("&p=%d\n",&p);
    printf("p=%d\n",p);
    printf("*p=%d\n",*p);
    printf("-b=%d\n",b);
    //printf("ptr=%d\n",ptr);
    //printf("&ptr=%d\n",&ptr);
    //printf("*ptr=%d\n",*ptr);
    //printf("**ptr1=%c\n",**ptr);

    //ptr++;
    //printf("ptr++\n");
    //printf("ptr=%d\n",ptr);
    //printf("*ptr=%d\n",*ptr);
    //printf("**ptr2=%c\n",**ptr);




    struct MyStruct
    {
        int a;
        int b;
        int c;
    };
    struct MyStruct ss={20,30,40};
    struct MyStruct *ptr=&ss;
    ptr->b = 90;
    printf("1111:%d    2222:%d    3333:%d",ptr->a,ss.b,ptr->c);




}
