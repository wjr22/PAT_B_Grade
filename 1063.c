#include<stdio.h>
#include<math.h>
int main(){
    int N,input[10000][2],i,j;
    double ans[10000],index;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d %d",&input[i][0],&input[i][1]);
    }
    for(i=0;i<N;i++){
       ans[i]=(input[i][0]*input[i][0]+input[i][1]*input[i][1])*1.0;
    }
    index=ans[0];
    for(i=0;i<N;i++){
        if(ans[i]>index){
            index=ans[i];
        }
    }
    index=sqrt(index);
    printf("%.2f",index);
    return 0;
}
