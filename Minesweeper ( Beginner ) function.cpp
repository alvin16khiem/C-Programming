// input»Î 10 9 9 
// and input (2,1)  (4,1)(   9,1)(7   ,4)(1,   5)(1,6   ) ( 7 , 6 ) (2,8)(9,8)(2,9)

#include <stdio.h>

int hasNextCase(){ // in ra mines 10
    int mines;
    if(scanf("%d",&mines)!=1) return 0;// // scanf khong doc dc mot gia tri so nguyen tu dau vao se tra ve 0
   // printf("mines=%d\n",mines);
    return mines;
}

int getHeight(){ // in ra height 9
int n;
scanf("%d",&n);
//printf("height=%d\n",n);
return n;
}

int getWidth(){ // in ra width 9
int n;
scanf("%d",&n);
//printf("width=%d\n",n);
return n;
}

void showCaseInfo(int c,int m,int w, int h){ // xuat ra case 
    printf("Case #%d: %d mines in a map of %dx%d",c,m,w,h);
return;
}

void loadMines(int m){
int i;
int x,y;
for(i=0;i<m;i++){
scanf(" (%d ,%d )",&x,&y);
printf("mine[%d]=(%d,%d) \n",i+1,x,y);
}
return;
    return;
}


int main(){
  int caseno=0, mines, width, height;//  trong truong hop hasNextCase() tra ve 0, no se lam cho if  trong vong lap while tro thanh false, va vong lap se dung lai.
  while((mines=hasNextCase())!=0){ // tra ve mines nen tiep tuc chay
    height=getHeight();
    width=getWidth();
    showCaseInfo(++caseno, mines, width, height);
    loadMines(mines);
  }
}


