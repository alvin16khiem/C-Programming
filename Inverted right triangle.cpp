// input 3 15 1 5 
#include <stdio.h>  
main(){  
  int b;  
  scanf("%d",&b);  
  for(int a=1;a<=b;a++){  
    int n,line;  
    scanf("%d",&n);  
    line=n;  
  for(int k=1;k<=line;k++){  
      for(int space=1;space<k;space++){  
          printf(" ");  
      }  
      for(int star=1;star<=line-k+1;star++){  
          printf("*");  
      }  
      printf("\n");  
  }  
    }  
  }  
