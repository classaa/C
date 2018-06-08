#include <stdio.h>
#include <string.h>
//#define GET_ARRAY_LEN(array,len) {len = (sizeof(array) / sizeof(array[0]));}

void main(){
    char a[20]="helloworld";
    char b[10]="ellow";
    int flag,k,i;
    //GET_ARRAY_LEN(b,len);
    flag=0;
    for(i=0;i<strlen(a)-strlen(b);i++)
    {
        printf("i=%d\n",i);
        if( flag == 1 )
            break;
        for(k=0;k<strlen(b);k++)
        {
            printf("k=%d\n",k);
            if(a[i+k]==b[k])
            {
                if( k == (strlen(b)-1) )
                {
                    flag = 1;
                    printf("OK\n");
                    break;
                }
            }
            else
                break;
        }
        if (i==strlen(a)-strlen(b)-1)
            printf("fail\n");
    }
}
