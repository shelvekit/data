 #include<stdio.h>
 #include<stdlib.h>
void main() { 
int RQ[100],i,j,n,TotalHeadMoment=0,initial,size,move;
 printf("Enter the number of Requests:");
 scanf("%d",&n);
 printf("Enter the Requests sequence:");
 for(i=0;i<n;i++)
 scanf("%d",&RQ[i]);
 printf("Enter initial head position:");
 scanf("%d",&initial);
 printf("Enter total disk size:");
 scanf("%d",&size);
 printf("Enter the head movement direction for high 1 and for low 0:");
 scanf("%d",&move);
for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++)
    {
        if(RQ[j]>RQ[j+1])
        {
            int temp;
temp = RQ[j];
             	RQ[j] = RQ[j+1];
            	RQ[j+1] = temp;
            } 	} 	}
    int index;
    for(i=0;i<n;i++){
        if(initial<RQ[i])  {
            index=i;
            break;
        }	}
    if(move==1){
        for(i=index;i<n;i++){
            TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
            initial=RQ[i];
        }
        TotalHeadMoment=TotalHeadMoment+abs(size-RQ[i-1]-1);
        initial=size-1;
        for(i=index-1;i>=0;i--){
        TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
        initial=RQ[i];
    }	}
else{
    for(i=index-1;i>=0;i--){
        TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
        initial=RQ[i];
    }
    TotalHeadMoment=TotalHeadMoment+abs(RQ[i+1]-0);
    initial=0;
    for(i=index;i<n;i++){
        TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
        initial=RQ[i];
    }	}
printf("Total head movement is %d",TotalHeadMoment);
scanf("%d",&n);
return;
}
