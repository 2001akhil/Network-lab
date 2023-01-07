#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 10
void main()
{
 char a[max],temp[max],st1[max],st2[max],st3[max];
 int n;
 int length=0,exp=0,exp1=0,exp2=0;
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
printf("Enter the expression:");
 
scanf("%s",&a[i]);
 }

 
 for(int i=0;i<n;i++)
 {
 
 a[length++];
 
 }
 for(int i=0;i<n;i++)
 {
    if(a[i]=="q1")
    {
    a[i]=st1[i];
    
    printf("This is the starting state");
    exp++;
    strcpy(exp,temp[i]);
     printf(st1[i])
    }
    else
    {printf("Expression is n't found");}
 }
 for(int i=0;i<n;i++)
 {
 if(a[i]=="q2")
 {
 printf("This is the second state");
 exp1++;
 a[i]=st2[i];
 strcpy(exp1,temp[i]);
 printf(st2[i])
 }else
    {printf("\nExpression is n't found");}
 }
for(int i=0;i<n;i++)
{
 if(a[i]=="q3")
 {
 {printf("\nThis is the final state");
 exp2++;
 a[i]=st3[i];
 strcpy(exp2,temp[i]);
  printf(st3[i]);}
 } else
    {printf("\nExpression is n't found");}
    
 
}











  
 
}


 
 

