#include <stdio.h>  
main(){  
    int a;  
    scanf("%d",&a);  
    for(int b=1;b<=a;b++){  
        int c;  
        scanf("%d",&c);  
        for(int v=1;v<=9;v++){  
             printf("%d * %d=%d \n",c,v,c*v);  
        }  
    }  
}  
