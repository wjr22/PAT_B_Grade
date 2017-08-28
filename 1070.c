#include<stdio.h>
//#define swap(a,b) a=a+b ; b=a-b ; a=a-b ;
int partition(int Array[],int l,int r){
	int index,i=l-1,j=l,major=Array[r];
	for(j=l;j<=r-1;j++){
        if(Array[j] < major ){
		    i++;
		    index=Array[i];
		    Array[i]=Array[j];
		    Array[j]=index;
	    }
	}
	index=Array[i+1];
    Array[i+1]=Array[r];
    Array[r]=index;
	return i+1;
}
int sort(int Array[],int l,int r){
    if(l>=r){
		return;
	}
	else{
		int p=partition(Array,l,r);
		sort(Array,l,p-1);
		sort(Array,p+1,r);

	}
}
int main(){
	int n,i;
	double ans;
	int Array[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",Array+i);
	}
	sort(Array,0,n-1);
	ans=Array[0];
    for(i=0;i<n;i++){
              ans=(ans+Array[i])/2;
	}
	printf("%d",(int)ans);
    return 0;
}
