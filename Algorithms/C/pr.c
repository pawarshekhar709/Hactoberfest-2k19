#include<stdio.h>
int main()
{
    int a[10],i,n,flag=0;;
     for(i=0;i<10;i++)
     {
       scanf("%d",&a[i]);
      }
      scanf("%d",&n);
      for(i=0;i<10;i++)
      {
         if(a[i]=n)
         {
            flag=1;
           }
          }
          
          if(flag==1)
          {
             printf("Element found");
             }
             else
             printf("Not found");
             return 0;
          }
