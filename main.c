#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x1,x2,y1,y2,D;
    printf("enter the all four values");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    D = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("the distance between the given point is %f",D);
    return 0;
}
