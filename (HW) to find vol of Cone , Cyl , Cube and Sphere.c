#include<stdio.h>

void main()
{
    int a,h,r;
    float v;

    a=70;
    h=40;
    r=20;

    v=a*a*a;
    printf("Volume Of Cube Is %f", v);

    v=3.14*r*r*h;
    printf("\nVolume Of Cylinder Is %f", v);

    v=(4/3)*3.14*r*r*r;
    printf("\nVolume Of Sphere Is %f", v);

    v=(1/3)*3.14*r*r*h;
    printf("\nVolume Of Cone Is %f", v);


}
