#include<stdio.h>
int main()
{
    // declare variables
    //float radius, area;
    float len,wid,area,b,h,radius;
    //float b, h, area;

    // take inputs
    printf("Enter Radius of Circle(in cm): ");
    scanf("%f", &radius);
    printf("Enter length & width of Rectangle (in cm): ");
    scanf("%f %f",&len,&wid);
    printf("Enter base and height (in cm): ");
    scanf("%f %f", &b, &h);

    // calculate area
    //area = 3.14 * radius * radius;
    area = len * wid;
    //area = (0.5 * b * h);

    // display result
    printf("Area of Circle = %.2f cm\n",radius,area);
    printf("Area of Rectangle= %.3f cm\n",area);
    printf("Area of triangle= %.2f cm\n",area );

     

     return 0;
}
