// input 12 
// in put 1 -> 12 

#include <stdio.h>
#include <stdlib.h>
int*loadArray(
int n
){
  
// nhap vao
int size = sizeof(int)*n; // size = 4*5
int*a=(int*)malloc(size);
printf("allocate %d bytes to form an integer array from a[0] to a[%d]. ",size,n-1); // n = 12
int i;
for(int i=0;i<n;++i){
    scanf("%d",&a[i]); // a[0],a[1]a[2]...a[n-1]
}
return a;

}
void freeArray(int a[]){
  free(a);
}
void dumpArray(
int a[],int n,int k
){
  
// in ra
for(int i=0;i<n;++i){
if(i%k==0) printf("\n");
if(i%k==0) printf("a[%02d]~a[%02d]=",i, i+k>=n ? n-1 : i+k-1);
    printf("%5d",a[i]);
}
printf("\n");

}
int main(){
  
int n,caseno=0;
int*a;

  for(;;) {
    scanf("%d",&n);
    
if(n==0) break;
if(caseno>0) printf("\n");
printf("Case #%d: sort %d items by selection sort algorithm. \n",++caseno,n);

    a = loadArray(n); // load n integers and store into new memory of a[]
    dumpArray(a, n, 10); // dump a[] with 10 integers per line
    freeArray(a); // recycle memory of a[]
  }
}
