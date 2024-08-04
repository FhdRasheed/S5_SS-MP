#include<stdio.h>
#include<stdlib.h>

void main(){
    int head,limit,i,distance=0,seektime=0;
    printf("Enter initial head position\n");
    scanf("%d",&head);
    printf("Enter the no.of requests\n");
    scanf("%d",&limit);
    int req[limit];
    req[0]=head;
    printf("Enter request string\n");
    for(i=1;i<=limit;i++){
        scanf("%d",&req[i]);
    }

    for(i=0;i<limit;i++){
        distance=abs(req[i]-req[i+1]);
        printf("Head moves from %d to %d with movement %d\n",req[i],req[i+1],distance);
        seektime+=distance;
    }
    printf("Total head movement:%d\n",seektime);
}
