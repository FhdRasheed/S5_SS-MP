#include<stdio.h>
#include<stdlib.h>

void fcfs(){
     
     int limit,i,head,seektime=0,distance=0;
     int req[20];
     printf("Enter the no of requests\n");
     scanf("%d",&limit);
     printf("Enter initial head position\n");
     scanf("%d",&head);
     req[0]=head;
     
     printf("Enter the requests\n");
     for(i=1;i<=limit;i++){
        scanf("%d",&req[i]);
        }
        
        printf("FCFS DISK SCHEDULING\n");
        
        for(i=0;i<limit;i++){
              distance=abs(req[i]-req[i+1]);
              printf("Head moves from %d to %d with movement %d\n",req[i],req[i+1],distance);
              seektime+=distance;
              }
              
              printf("Total head movement=%d\n",seektime);
              
              
              }
              
              
   void scan(){
     
     int limit,i,head,seektime=0,temp,j,pos,direction,size;
     
     printf("Enter the no of requests\n");
     scanf("%d",&limit);
     limit=limit+1;
     printf("Enter size of the disk\n");
     scanf("%d",&size);
     printf("Enter initial head position\n");
     scanf("%d",&head);
     int req[limit];
     req[0]=head;
     
     printf("Enter the requests\n");
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
        
        printf("Sorted array\n");
        for(i=0;i<limit;i++){
             printf("%d ",req[i]);
             }
             
             printf("\n");
            
            
         for(i=0;i<limit;i++){
             if(req[i]==head){
                pos=i;
                break;
                }
             }
             
         printf("Enter the direction of movement, 1 for right and 0 for left\n");
         scanf("%d",&direction);  
         
         if(direction==1){
         
           for(i=pos+1;i<limit;i++){
             printf("Head moves from %d to %d with movement %d\n",head,req[i],abs(head-req[i]));
             seektime+=abs(head-req[i]);
             head=req[i];
             
            }
            
           if(head!=size-1 && pos>0){
             printf("Head jumps from %d to %d with movement %d\n",head,size-1,abs(head-(size-1)));
             seektime+=abs(head-(size-1));
             head=size-1;
            
            }
            
             for(i=pos-1;i>=0;i--){
             printf("Head moves from %d to %d with movement %d\n",head,req[i],abs(head-req[i]));
             seektime+=abs(head-req[i]);
             head=req[i];
             
            }
            
             
              
              
              }
              else{
              
                 for(i=pos-1;i>=0;i--){
                     printf("Head moves from %d to %d with movement %d\n",head,req[i],abs(head-req[i]));
                     seektime+=abs(head-req[i]);
                     head=req[i];
             
                       }
                       
            if(head!=0 && pos<limit-1){
             printf("Head jumps from %d to %d with movement %d\n",head,0,abs(head));
             seektime+=abs(head);
             head=0;
             
            
            }
            
                for(i=pos+1;i<limit;i++){
                     printf("Head moves from %d to %d with movement %d\n",head,req[i],abs(head-req[i]));
                     seektime+=abs(head-req[i]);
                     head=req[i];
             
                       }
                
                
                  
              
              
              
              
             }
             
             printf("Total head movement=%d\n",seektime);
             
           }
           
           
  void cscan(){
     
     int limit,i,head,seektime=0,temp,j,pos,direction,size;
     
     printf("Enter the no of requests\n");
     scanf("%d",&limit);
     limit=limit+1;
     printf("Enter size of the disk\n");
     scanf("%d",&size);
     printf("Enter initial head position\n");
     scanf("%d",&head);
     int req[limit];
     req[0]=head;
     
     printf("Enter the requests\n");
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
        
        printf("Sorted array\n");
        for(i=0;i<limit;i++){
             printf("%d ",req[i]);
             }
             
             printf("\n");
            
            
         for(i=0;i<limit;i++){
             if(req[i]==head){
                pos=i;
                break;
                }
             }
             
         printf("Enter the direction of movement, 1 for right and 0 for left\n");
         scanf("%d",&direction);  
         
         if(direction==1){
         
           for(i=pos+1;i<limit;i++){
             printf("Head moves from %d to %d with movement %d\n",head,req[i],abs(head-req[i]));
             seektime+=abs(head-req[i]);
             head=req[i];
             
            }
            
           if(head!=size-1 && pos>0){
             printf("Head jumps from %d to %d with movement %d\n",head,size-1,abs(head-(size-1)));
             seektime+=abs(head-(size-1));
             head=size-1;
             
            printf("Head jumps from %d to %d with movement %d\n",head,0,abs(size-1));
            seektime+=abs(size-1);
            head=0;
            }
            
             for(i=0;i<pos;i++){
             printf("Head moves from %d to %d with movement %d\n",head,req[i],abs(head-req[i]));
             seektime+=abs(head-req[i]);
             head=req[i];
             
            }
            
             
              
              
              }
              else{
              
                 for(i=pos-1;i>=0;i--){
                     printf("Head moves from %d to %d with movement %d\n",head,req[i],abs(head-req[i]));
                     seektime+=abs(head-req[i]);
                     head=req[i];
             
                       }
                       
            if(head!=0 && pos<limit-1){
             printf("Head jumps from %d to %d with movement %d\n",head,0,abs(head));
             seektime+=abs(head);
             head=0;
             
            printf("Head jumps from %d to %d with movement %d\n",head,size-1,abs(size-1));
            seektime+=abs(size-1);
            head=size-1;
            }
            
                for(i=limit-1;i>pos;i--){
                     printf("Head moves from %d to %d with movement %d\n",head,req[i],abs(head-req[i]));
                     seektime+=abs(head-req[i]);
                     head=req[i];
             
                       }
                
                
                  
              
              
             
              
             }
             
              printf("Total head movement=%d\n",seektime);
             
           }
           
  void main(){
  int choice=0;
  printf("Menu\n");
  printf("1.FCFS\n2.SCAN\n3.CSCAN\n4.EXIT\n");
  do{
     printf("Enter your choice\n");
     scanf("%d",&choice);
     
     if(choice==1){
          fcfs();
          }
        else if (choice==2){
           scan();  
           }
           
        else if (choice==3){
          cscan();
          } 
          
           
           else if (choice>4){
              printf("Wrong choice\n");
              }
          }while(choice!=4);
          
          }
          
            
            
             
            
            
             
