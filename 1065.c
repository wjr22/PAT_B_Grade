/*  25 fen  */
#include<stdio.h>
int main(){
    int N,M,output[10000],marriage[100000],client[10000],index[100000],isPair[10000];
    int i,j,k,a,b,num;
    scanf("%d",&N);
    for(i=0;i<100000;i++){
        marriage[i]=100000;
        if(i<10000){
            client[i]=100000;
            isPair[i]=0;
        }
    }
    for(i=0;i<N;i++){
        scanf("%d %d",&a,&b);
        marriage[a]=b;
        marriage[b]=a;
    }
    scanf("%d",&M);
    for(i=0;i<M;i++){
        scanf("%d",&client[i]);
        if(marriage[client[i]]!=100000){
            isPair[client[i]]=1;
        }
    }
    for(i=0,j=0;i<M;i++){
        if(isPair[client[i]]==1&&isPair[marriage[client[i]]]==1){
            j++;
        }else{
            output[i-j]=client[i];
        }
    }
    num=M-j;
    for(i=0;i<num-1;i++){
        for(j=0;j<num-1-i;j++){
            if(output[j]>output[j+1]){
                k=output[j];
                output[j]=output[j+1];
                output[j+1]=k;
            }
        }
    }
    printf("%d\n",num);
    for(i=0;i<num;i++){
        if(output[i]==0){
            printf("00000 ");
        }else if(i==num-1){
            printf("%d",output[i]);
        }else{
            printf("%d ",output[i]);
        }
    }
    return 0;
}
