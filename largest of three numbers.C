#include<stdio.h>
void main()
{
    int a,b,c,largest;

    clrscr();

    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        largest=a;
    }
    else if(b>a && b>c)
    {
        largest=b;
    }
    else
    {
        largest=c;
    }

    printf("Largest number = %d",largest);

    getch();
}
