//code is not completed.....
#include<stdio.h>
#include<stdlib.h>
#define max 50
void main()
{
int n;
//int arr[max]; 
 int sent=0,take=0;
 printf("\nEnter the windows size:-");
 scanf("%d",&n);
 int frame;
 printf("\nEnter the frame size:-");
 scanf("%d",&frame);
 

  // for loop create inorder to get frames
  for(int j=0;j<frame;j++)
  {
  printf("\nFrame has been transmitted %d",j);
    sent++;
   
    
    }
    //again create loop to find next value is 2 and 3
     printf("\n 2 and 3 set aliya");
 for(int i=2;i<sent+frame;i++)    
    {
    printf("\nframes send%d",i);
    take=i;
     if(take==n)
     {
     	break;
     }
     }
     
 
     
   
     
     
     
    
     
     

     
     
    }
    
   /* if(sent==n)
    {
    break;
    }
    }*/
    
   /*// printf("\nEnter the last ack recived:-");
    int ack;
    scanf("%d",&ack);
    
    if(ack==n)
    break;
    else
    sent=ack;
   
   for(int i=0;i<frame;i++)
   {
     for(int j=1;j<=ack;j++)
     {
     printf("%d",j);
     
     }
   
   }
   
      
  
  
}
}*/



   
   
   
  
  
   
 
 
 

