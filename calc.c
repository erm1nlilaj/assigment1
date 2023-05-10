#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("THIS PROGRAM FINDS THE PERIMETER AND THE AREA OF:\n");
    printf("1.Square\n");
    printf("2.Circle\n");
    printf("3.Rectangle\n");
           int choice;
           int a,b,h,r;
           double per,area;

           scanf("%d",&choice);

           switch(choice)
{

case 1:
    printf("Enter a: ");
        scanf("%d",&a);
        per=4*a;
        area=a*a;
        printf("Perimeter:%.1lf\n Area:%.1lf",per,area);
        break;
case 2:
    printf("Enter radius ");
        scanf("%d ",&r);
        per=2*3.14*r;
        area=3.14*r*r;
        printf("Perimeter:%.1lf\n Area: %.1lf",per,area);
        break;

case 3:
    printf("Enter a and b: ");
        scanf("%d %d",&a,&b);
        per=2*a+2*b;
        area=a*b;
        printf("Perimeter:%.1lf\n Area:%.1lf",per,area);
        break;

    }

    return 0;
}