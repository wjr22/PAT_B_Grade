#clude<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char a[1010][30];
    int m,n,s;
    int b[1010] = {0};
    scanf("%d %d %d",&m,&n,&s);
    if(m<s){
        printf("Keep going...");
        return 0;
    }
    for(int i=1;i<=m;i++){
        scanf("%s",a[i]);
    }
    int h = n-1;
    for(int i=s;i<=m;i++){
        if(!b[i]){
            h++;
            if(h==n){
                printf("%s\n",a[i]);
                h = 0;
                for(int j=i;j<=m;j++){
                    if(strcmp(a[i],a[j])==0){
                        b[j] = 1;
                    }
                }
            }
        }
    }
} 
//����ӵ�һ�����name��ʼ ����¼��ʣ��name�����е���֮��ͬ��name
//�洢��b[1010]��
