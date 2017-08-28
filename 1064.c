#include<stdio.h>
int main(){
    int N,number[10000],output[10000];
    int i,j,k=0,a[4]={0,0,0,0};
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",number+i);
    }
    for(i=0;i<N;i++){
       for(j=0;j<4;j++){
           a[j]=number[i]%10;
           number[i]/=10;
           k+=a[j];
       }
       output[i]=k;
       k=0;
    }
    /*    sort output    */
    for(i=0;i<N-1;i++){
        for(j=0;j<N-1-i;j++){
            if(output[j]==output[j+1]){
                output[j]=-1;
            }
            if(output[j]>output[j+1]){
                k=output[j];
                output[j]=output[j+1];
                output[j+1]=k;
            }
        }
    }
    for(i=0,j=0,k=0;i<N;i++){
        if(output[i]>0){
            j++;
        }else{
            k++;
        }
    }
    /*    print       */
    printf("%d\n",j);
    for(i=k;i<N-1;i++){
        printf("%d ",output[i]);
    }
    printf("%d",output[i]);
    return 0;
}
