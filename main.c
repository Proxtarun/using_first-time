#include <stdio.h>
#include <stdlib.h>
/*
program: store 10umber in arr and display
program name; tarun
date:24/1/25





int main()
{


   int i;
   int arr[10];
   for(i=0;i<10;i++)
{
      scanf("%d",&arr[i]);
}
   for(i=0;i<10;i++)
{
      printf("%d",arr[i]);
}
return 0;
}
*/
/*
program: sum of 10 number
program name; tarun
date:24/1/25





int main()
{


   int i,sum1;
   int arr[10]={10,20 ,30,40,50,60,70,80,90,100};

   for(i=0;i<10;i++)
{
      sum1=sum1+arr[i];
}
printf("he sum is :%d",sum1);
return 0;
}
*/
/*
program: display the greatest number then avg number
program name; tarun
date:24/1/25





int main()
{


   int i,avg,sum,greater;
   int arr[10]={10,20 ,30,40,50,60,70,80,90,100};

   for(i=0;i<10;i++)
{
      sum=sum+arr[i];
}
   avg=sum%10;
   for(i=0;i<10;i++){
    if(avg>arr[i]){
        printf("%d",arr[i]);
    }
   }
return 0;
}
*/
/*
program: display the gtertest number
program name; tarun
date:24/1/25
*




int main()
{


   int i,greater;
   int arr[10]={10,20 ,30,40,50,60,70,80,90,100};
   greater=arr[0];
   for(i=1;i<10;i++)
{
      if(arr[i]>greater){
        greater=arr[i];
      }
}
printf("the greater number is:%d",greater);
return 0;
}
/*
program: display the smallest number
program name: tarun
date:24/1/25
int main()
{


   int i,smal;
   int arr[10]={10,20 ,30,40,50,60,70,80,90,100};
   smal=arr[0];
   for(i=1;i<10;i++)
{
      if(arr[i]<smal){
        smal=arr[i];
      }
}
printf("the smallest number is:%d",smal);
return 0;
}
*/
/*
program: display the even number
program name: tarun
date:24/1/25

int main()
{


   int i;
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   for(i=1;i<10;i++)
{
      if(arr[i]%2==0){
        printf("%d",arr[i]);
      }
}
return 0;
}
*/
/*
program: display the sum of all odd and even number
program name: tarun
date:24/1/25

int main()
{


   int i,even,odd;
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   for(i=1;i<10;i++)
{
      if(arr[i]%2==0){
        even=even+arr[i];
      }
      else{
        odd=odd+arr[i];
      }
}
printf("the sum of all even:%d and odd number:%d",even,odd);
return 0;
}
*/
/*
program: search the number and display it is present or not
program name: tarun
date:24/1/25

int main()
{


   int i,smal;
   int l=0;
   int arr[10]={10,20 ,30,40,50,60,70,80,90,100};
   printf("enter the number");

   scanf("%d",&smal);
   for(i=0;i<10;i++)
{
      if(arr[i]==smal){
        printf("the number is present");
        l=1;
      }
}
if(l==0){
    printf("number is not present");
}
return 0;
}
*/
/*
program: display the smallest number
program name: tarun
date:24/1/25
*/

int sum()
{


   int i,smal;
   int arr[10]={10,20 ,30,40,50,60,70,80,90,100};
   smal=arr[0];
   for(i=1;i<10;i++)
{
      if(arr[i]<smal){
        smal=arr[i];
      }
}
printf("the smallest number is:%d",smal);
return 0;
}
*/
















