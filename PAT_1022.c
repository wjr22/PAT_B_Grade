#include<stdio.h>
int main(){
    unsigned int A,B,D;
    int ans_d,ans[30],i,remainder,quotient;
    scanf("%d %d %d",&A,&B,&D);
    ans_d=A+B;
    for(i=0;i<30;i++){
        ans[i]=-1;
    }
    for(i=29;i>=0;i--){
        remainder=ans_d%D;
        ans[i]=remainder;
        if(ans_d<D){
            break;
        }
        ans_d=ans_d/D;
    }
    for(i=0;i<30;i++){
        if(ans[i]>=0){
            printf("%d",ans[i]);
        }
    }
    return 0;
}
