#include<stdio.h>

void fcfs(){
    int limit,i;
    printf("Enter the no.of processes\n");
    scanf("%d",&limit);
    int pid[limit],wt[limit],bt[limit],tat[limit];
    
    printf("Enter process id & busrt time of processes\n");
    for(i=0;i<limit;i++){
       printf("Enter process id\n");
       scanf("%d",&pid[i]);
       printf("Enter burst time\n");
       scanf("%d",&bt[i]);
       }
    
    wt[0]=0;
    tat[0]=bt[0];
    
    for(i=1;i<limit;i++){
       
       wt[i]=wt[i-1]+bt[i-1];
       tat[i]=tat[i-1]+bt[i];
       
       }
       
        int tot_wt,tot_tat;
    tot_wt=0;
    tot_tat=0;
    for(i=0;i<limit;i++){
        tot_wt=tot_wt+wt[i];
        tot_tat=tot_tat+tat[i];

    }
   

    printf("process  Burst  WT  TAT\n");
    for(i=0;i<limit;i++){
        printf("  %d\t  %d\t%d   %d\n",pid[i],bt[i],wt[i],tat[i]);
    }
     printf("Total waiting time:%d\n",tot_wt);
        printf("Total TAT:%d\n",tot_tat);
         float avg_wt,avg_tat;
    avg_wt=(float)tot_wt/limit;
    avg_tat=(float)tot_tat/limit;
        printf("Average WT:%f\n",avg_wt);
        printf("Average TAT:%f\n",avg_tat);
        
        for(i=0;i<limit;i++){
         printf("  P%d\t",pid[i]);
         }
        printf("\n");
        
        for(i=0;i<limit;i++){
         printf("%d\t",wt[i]);
         }
         printf("%d\n",tat[limit-1]);
    }
    
  void sjf(){
    int limit,i,j,temp;
    printf("Enter the no.of processes\n");
    scanf("%d",&limit);
    int pid[limit],wt[limit],bt[limit],tat[limit];
    
    printf("Enter process id & busrt time of processes\n");
    for(i=0;i<limit;i++){
       printf("Enter process id\n");
       scanf("%d",&pid[i]);
       printf("Enter burst time\n");
       scanf("%d",&bt[i]);
       }
       
     for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++){
           if(bt[i]>bt[j]){
              temp=bt[i];
              bt[i]=bt[j];
              bt[j]=temp;
              temp=pid[i];
              pid[i]=pid[j];
              pid[j]=temp;
              }
              }
              }  
    
    wt[0]=0;
    tat[0]=bt[0];
    
    for(i=1;i<limit;i++){
       
       wt[i]=wt[i-1]+bt[i-1];
       tat[i]=tat[i-1]+bt[i];
       
       }
       
        int tot_wt,tot_tat;
    tot_wt=0;
    tot_tat=0;
    for(i=0;i<limit;i++){
        tot_wt=tot_wt+wt[i];
        tot_tat=tot_tat+tat[i];

    }
   

    printf("process  Burst  WT  TAT\n");
    for(i=0;i<limit;i++){
        printf("  %d\t  %d\t%d   %d\n",pid[i],bt[i],wt[i],tat[i]);
    }
     printf("Total waiting time:%d\n",tot_wt);
        printf("Total TAT:%d\n",tot_tat);
         float avg_wt,avg_tat;
    avg_wt=(float)tot_wt/limit;
    avg_tat=(float)tot_tat/limit;
        printf("Average WT:%f\n",avg_wt);
        printf("Average TAT:%f\n",avg_tat);
        
        for(i=0;i<limit;i++){
         printf("  P%d\t",pid[i]);
         }
        printf("\n");
        
        for(i=0;i<limit;i++){
         printf("%d\t",wt[i]);
         }
         printf("%d\n",tat[limit-1]);
    }
      
  void priority(){
    int limit,i,j,temp;
    printf("Enter the no.of processes\n");
    scanf("%d",&limit);
    int pid[limit],wt[limit],bt[limit],tat[limit],priority[limit];
    
    printf("Enter process id,busrt time & priority of processes\n");
    for(i=0;i<limit;i++){
       printf("Enter process id\n");
       scanf("%d",&pid[i]);
       printf("Enter burst time\n");
       scanf("%d",&bt[i]);
       printf("Enter priority\n");
       scanf("%d",&priority[i]);
       
       }
       
     for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++){
           if(priority[i]>priority[j]){
              temp=bt[i];
              bt[i]=bt[j];
              bt[j]=temp;
              
              temp=pid[i];
              pid[i]=pid[j];
              pid[j]=temp;
              
              temp=priority[i];
              priority[i]=priority[j];
              priority[j]=temp;
              }
              }
              }  
    
    wt[0]=0;
    tat[0]=bt[0];
    
    for(i=1;i<limit;i++){
       
       wt[i]=wt[i-1]+bt[i-1];
       tat[i]=tat[i-1]+bt[i];
       
       }
       
        int tot_wt,tot_tat;
    tot_wt=0;
    tot_tat=0;
    for(i=0;i<limit;i++){
        tot_wt=tot_wt+wt[i];
        tot_tat=tot_tat+tat[i];

    }
   
 printf("process  Burst  Priority  WT  TAT\n");
    for(i=0;i<limit;i++){
        printf("  %d\t  %d\t  %d\t  %d    %d\n",pid[i],bt[i],priority[i],wt[i],tat[i]);
    }
     printf("Total waiting time:%d\n",tot_wt);
        printf("Total TAT:%d\n",tot_tat);
         float avg_wt,avg_tat;
    avg_wt=(float)tot_wt/limit;
    avg_tat=(float)tot_tat/limit;
        printf("Average WT:%f\n",avg_wt);
        printf("Average TAT:%f\n",avg_tat);
        
        for(i=0;i<limit;i++){
         printf("  P%d\t",pid[i]);
         }
        printf("\n");
        
        for(i=0;i<limit;i++){
         printf("%d\t",wt[i]);
         }
         printf("%d\n",tat[limit-1]);
    }
    
    
    void roundrobin(){
     int limit,i,tq;
    printf("Enter the no.of processes\n");
    scanf("%d",&limit);
    int pid[limit],bt[limit],rt[limit],wt[limit],tat[limit];
    printf("Enter process id & Burst time\n");
    for(i=0;i<limit;i++){
        printf("Enter process id\n");
        scanf("%d",&pid[i]);
        printf("Enter burst time\n");
        scanf("%d",&bt[i]);
        rt[i]=bt[i];
    }
    printf("enter the time quantum\n");
    scanf("%d",&tq);
    int time=0;
    int completed=0;
    int p[100],t[100];
    int temp1=0;
    int temp2=1;
    t[0]=0;
    while(completed<limit){
        for(i=0;i<limit;i++){
            if(rt[i]>0){
                if(rt[i]>tq){
                    time=time+tq;
                    t[temp2]=time;
                    temp2++;
                    p[temp1]=i+1;
                    temp1++;
                    rt[i]=rt[i]-tq;
                }
                else{
                    time=time+rt[i];
                     t[temp2]=time;
                    temp2++;
                    p[temp1]=i+1;
                    temp1++;
                    wt[i]=time-bt[i];
                    rt[i]=0;
                    completed++;
                    tat[i]=time;
                }
            }
        }
    }
     int tot_wt,tot_tat;
    tot_wt=0;
    tot_tat=0;
    for(i=0;i<limit;i++){
        tot_wt=tot_wt+wt[i];
        tot_tat=tot_tat+tat[i];

    }
   

    printf("process  Burst  WT  TAT\n");
    for(i=0;i<limit;i++){
        printf("  %d\t  %d\t%d   %d\n",pid[i],bt[i],wt[i],tat[i]);
    }
        printf("Total waiting time:%d\n",tot_wt);
        printf("Total TAT:%d\n",tot_tat);
         float avg_wt,avg_tat;
    avg_wt=(float)tot_wt/limit;
    avg_tat=(float)tot_tat/limit;
        printf("Average WT:%f\n",avg_wt);
        printf("Average TAT:%f\n",avg_tat);
        
         for(i=0;i<temp1;i++){
         printf("  P%d\t",p[i]);
         }
        printf("\n");
        
        for(i=0;i<temp2;i++){
         printf("%d\t",t[i]);
         }
         
         printf("\n");



}
      
  
      

      

void main(){
  int choice=0;
  printf("Menu\n");
  printf("1.FCFS\n2.SJF\n3.Priority\n4.Round Robin\n");
  do{
     printf("Enter your choice\n");
     scanf("%d",&choice);
     
     if(choice==1){
          fcfs();
          }
        else if (choice==2){
           sjf();  
           }
           
        else if (choice==3){
          priority();
          } 
          
          else if(choice==4){
           roundrobin();
           }  
           else if (choice>5){
              printf("Wrong choice\n");
              }
          }while(choice!=5);
          
          }
          
        
 
