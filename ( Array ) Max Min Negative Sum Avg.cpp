// input  5 -5 -2 7 8 19
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n); // n = 5
    int a[n];
    for(int i=0;i<n;i++){ // i < 5 ( 5 value)
        scanf("%d",&a[i]); 
    }
    int negative = 0;
    // MAX MIN 
    int max = a[0], min =a[0];
    int sum = 0;
    int avg ;
    
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]<0){
            negative++;
        }
        sum=sum+a[i];
        avg = sum/5;
    }
    printf("max = %d min = %d negative = %d sum = %d avg = %d \n",max,min,negative,sum,avg);
}
