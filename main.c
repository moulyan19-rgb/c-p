##include <stdlib.h>
include <stdio.h>

int main()
{
 float units,bil=0.0,supercharge=0.0,total_bil=0.0;
 printf("enter the units");
 scanf("%f",&unit);
 if(units<=100){
 bill=unit*2;
 }
 else if(unit<=200){
 bill=(100*2)+(unit-100*3);
 }
 else if(unit<=300){
 bill=(100*2)+(100*3)+(unit-100)*5);
 }
 else(unit>300);{
 bill=(100*2)+(100*3)+(100*5)+(unit-300)*7;
 }
 if(bill>2000){
 supercharge=(10/100)bill;
 }
 totalbill=bill+supercharge;
 printf("the total bill is%f",totalbill);
 return  0;
}
