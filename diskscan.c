#include<stdio.h>
#include<stdlib.h>

void main(){
    int head,limit,i,distance=0,seektime=0,temp,j,direction,size,pos;
    printf("Enter initial head position\n");
    scanf("%d",&head);
    printf("Enter the no.of requests\n");
    scanf("%d",&limit);
    limit=limit+1;
    printf("Enter total size of disk\n");
    scanf("%d",&size);
    int req[limit];
    req[0]=head;
    printf("Enter request string\n");
    for(i=1;i<limit;i++){
        scanf("%d",&req[i]);
    }
    for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++){
            if(req[i]>req[j]){
                temp=req[i];
                req[i]=req[j];
                req[j]=temp;
            }

        }
    }

     printf("Sorted Array: ");
    for(i=0;i<limit;i++){
        printf("%d ",req[i]);
    }

     for(i=0;i<=limit;i++){
        if(req[i]==head){
            pos=i;
            break;
        }
    }

    printf("\nEnter the direction of movement 0 for low,1 for high\n");
    scanf("%d",&direction);
    if(direction==1){
       for(i=pos+1;i<limit;i++){
        printf("Head moves from %d to %d with movement of %d\n",head,req[i],abs(head-req[i]));
        seektime+=abs(head-req[i]);
        head=req[i];
       }
       if(head!=size-1&&pos>0){
        printf("Head jumps from %d to %d with movement of %d\n",head,size-1,abs(head-(size-1)));
        seektime+=abs(head-(size-1));
        head=size-1;
       }

       for(i=pos-1;i>=0;i--){

        printf("Head moves from %d to %d with movement of %d\n",head,req[i],abs(head-req[i]));
        seektime+=abs(head-req[i]);
        head=req[i];

       }


    }
    else{

        for(i=pos-1;i>=0;i--){

        printf("Head moves from %d to %d with movement of %d\n",head,req[i],abs(head-req[i]));
        seektime+=abs(head-req[i]);
        head=req[i];

        }

        if(head!=0&&pos<limit-1){
             printf("Head jumps from %d to %d with movement of %d\n",head,0,head);
             seektime+=head;
             head=0;

        }
        for(i=pos+1;i<limit;i++){
        printf("Head moves from %d to %d with movement of %d\n",head,req[i],abs(head-req[i]));
        seektime+=abs(head-req[i]);
        head=req[i];
       }

       
       
    }
    printf("Total disk movement:%d\n",seektime);

}
