//Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,dis,r1,r2,real,imagi;
    printf("Enter values of a,b,c for the quadratic equation : ");
    scanf("%f %f %f",&a,&b,&c);
    dis=(b*b)-(4*a*c);
    if(dis>0)
    {
        r1=(-b+sqrt(dis))/(2*a);
        r2=(-b-sqrt(dis))/(2*a);
        printf("\nRoots are real and distinct.");
        printf("\nThe roots are %.2f %.2f",r1,r2);
    }
    else if(dis==0)
    {
        r1=r2=-b/(2*a);
        printf("The roots are real and equal.\n");
        printf("\nThe roots are %.2f %.2f",r1,r2);
    }
    else
    printf("\nThe roots are complex.");
    return 0;
}