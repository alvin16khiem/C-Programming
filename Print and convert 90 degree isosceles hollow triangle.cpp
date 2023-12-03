#include <stdio.h>  
main(){  
  int b;  
  scanf("%d",&b);  
  for(int a=1;a<=b;a++){  
    int n,line;  
    scanf("%d",&n);  
    line=n/2+1;  
for(int k=1;k<=line;k++){  
  for(int space=1;space<=line-k;space++){  
      printf(" ");  
  }  
  for(int star=1;star<=k;star++){  
      if(star!=1 && star !=k){  
          printf(" ");  
      }else{  
          printf("*");  
      }  
  }  
  printf("\n");  
}  
  
    
 for (int k = 1; k <= line - 1; k++) {  
        for (int space = 1; space <= k; space++) {  
            printf(" ");  
        }  
        for (int star = 1; star <= line - k; star++) {  
            if (star != 1 && star != line - k) {  
                printf(" ");  
            } else {  
                printf("*");  
            }  
        }  
        printf("\n");  
  
    }  
    
    }  
  }  
