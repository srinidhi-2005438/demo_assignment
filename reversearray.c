#include<stdio.h>
int main()
{
   int a[]={10,25,24,15,15,57,64};
   int i;
   int n=sizeof(a)/sizeof(a[1]);
   int b[100];
   for(i=n-1;i>=0;i--)
   {
   	b[i]=a[i];
   }
   printf("b[]={");
   for(i=n-1;i>0;i--)
   {
   printf("%d,",b[i]);
   }
   printf("%d",b[0]);
   printf("}"); 
 return 0;
   
}
