#include<stdio.h>
/**
 *　　　　　　　　�芥掘　　？芥�+ +
 *　　　　　　　�芥食潯ォォォ食潯� + +
 *　　　　　　　�А　　　　　　？� 　
 *　　　　　　　�А　　？ァ　　？� ++ + + +
 *　　　　　　 ���������エ������� ��+
 *　　　　　　　�А　　　　　　？� +
 *　　　　　　　�А　　？漾　　？�
 *　　　　　　　�А　　　　　　？� + +
 *　　　　　　　�皐ォ掘　　？芥ォ�
 *　　　　　　　　　�А　　？А　　　　　　　　　　�
 *　　　　　　　　　�А　　？� + + + +
 *　　　　　　　　　�А　　？А　　　�Code is far away from bug with the animal protecting　　　　　　　
 *　　　　　　　　　�А　　？� + 　　　　舞舗隠嗷,旗鷹涙bug　　
 *　　　　　　　　　�А　　？�
 *　　　　　　　　　�А　　？А　�+　　　　　　　　　
 *　　　　　　　　　�А� 　　�皐ォォォ� + +
 *　　　　　　　　　�� 　　　　　　　�禰�
 *　　　　　　　　　�� 　　　　　　　�芥�
 *　　　　　　　　　�皐粂粂芥ォ廩粂芥� + + + +
 *　　　　　　　　　　�З路蓮？З路�
 *　　　　　　　　　　�皐潯拭？皐潯�+ + + +
 */
 typedef struct{
     unsigned int repertory;
     unsigned int price;
     double unitprice;
 }mooncake;
int main(){
        mooncake moon[1000];
        int N,D,i,j,k;
        int index[1000];
        double unitP[1000],flag,ans=0;
        scanf("%d %d",&N,&D);
        for(i=0;i<N;i++){
            scanf("%d",&(moon[i].repertory));
        }
        for(i=0;i<N;i++){
            scanf("%d",&(moon[i].price));
            index[i]=i;
        }
        for(i=0;i<N;i++){
            moon[i].unitprice=1.0*moon[i].price/moon[i].repertory;
            unitP[i]=moon[i].unitprice;
        }
        for(i=0;i<N-1;i++){
            for(j=0;j<N-i-1;j++){
                if(unitP[j]*10000<unitP[j+1]*10000){
                    flag=unitP[j];
                    unitP[j]=unitP[j+1];
                    unitP[j+1]=flag;
                    k=index[j];
                    index[j]=index[j+1];
                    index[j+1]=k;
                }
            }
        }
        for(i=0,k=0;i<D;i++,moon[index[k]].repertory--){
            if(moon[index[k]].repertory==0){
                k++;
            }
            ans+=moon[index[k]].unitprice;
        }
        printf("%.2f",ans);
        return 0;
}
