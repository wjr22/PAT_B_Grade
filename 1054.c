#include<stdio.h>
int main(){
    int N,k=0;
    double average=0.0,temp;
    char format[120],Input[120];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%s",Input);
        sscanf(Input,"%lf",&temp);
        sprintf(format,"%.2lf",temp);
	int flag=0;
	for(int j=0;Input[j]!='\0';j++){
	    if(*(Input+j)!=*(Input+j)){
		    flag=1;
	    }
	}
	if(flag==1||temp>1000||temp<-1000){
		printf("ERROR: %s is not a legal number\n",Input);
		continue;
	}
	else{
		average+=temp;
		k++;
	}
    }
    if(k==1){
	    printf("The average of 1 number is %.2lf",average);
    }else if(k>1){
	    printf("The average of %d number is %.2lf",k,average);
    }else{
	    printf("The average of 0 number is Undefined");
    }
    return 0;
}
