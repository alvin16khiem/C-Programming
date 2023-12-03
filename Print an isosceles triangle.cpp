//input 3 15 1 5 
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
          printf("*");  
      }  
      for(int star=2;star<=k;star++){  
          printf("*");  
      }  
      printf("\n");  
    }  
  }  
}  
