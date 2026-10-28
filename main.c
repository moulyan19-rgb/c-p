#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m1,m2,m3,m4,m5;
   printf("enter 5 subject marks");
   scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
   int marks;
   marks = (m1+m2+m3+m4+m5)/5;
   if(marks<0|| marks>100){
   printf("invalid marks");
   return 0;
   }
   if(marks>=90){
   printf("grade A");
   }
   else if(marks>=75){
   printf("grade B");
   }
   else if(marks>=60){
   printf("grade C");
   }
   else if(marks>=50){
   printf("grade D");
   }
   else{
   printf("grade F");
   }
   return 0;
}
