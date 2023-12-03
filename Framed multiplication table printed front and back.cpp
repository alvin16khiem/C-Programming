//input 2 5 3 1  
#include <stdio.h>  
  
int main() {  
    int caseno, x, y, a, b;  
    for (caseno = 1; scanf("%d%d", &x, &y) == 2; caseno++) {  
        printf("case %d:\n", caseno);  
  
        if (x < y) {  
            printf("+");  
             for (a = x; a <= y; a++) {  
                printf("------+");  
                 }  
                 printf("\n");  
            for(b=1;b<=9;b++){  
                printf("|");  
                 for (a = x; a <= y; a++) {  
                printf("%d*%d=%2d|",a,b,a*b);  
                 }  
                   printf("\n");  
            }  
            printf("+");  
            for (a = x; a <= y; a++) {  
                printf("------+");  
                 }  
        } else {  
           printf("+");  
             for (a = x; a >= y; a--) {  
                printf("------+");  
                 }  
                 printf("\n");  
            for(b=1;b<=9;b++){  
                printf("|");  
                 for (a = x; a >= y; a--) {  
                printf("%d*%d=%2d|",a,b,a*b);  
                 }  
                   printf("\n");  
            }  
            printf("+");  
            for (a = x; a >= y; a--) {  
                printf("------+");  
                 }  
        }  
        printf("\n");  
    }  
  
    return 0;  
}  
