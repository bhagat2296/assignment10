#include <stdio.h>
#include <stdlib.h>


/*float aoc(int);                                                   //Question 1(area of circle by TSRS)
int main()
{
    int r;
    float area;
    printf("Enter radius\n");
    scanf("%d",&r);

    area=aoc(r);

    printf("Area of circle is %f",area);
    return 0;
}

float aoc(int r)
{

    float x;
    x=3.14*r*r;
    return x;
}*/



/*float si(int,int,int);                                                   //Question 2(Simple intrest by TSRS)
int main()
{
    int r,p,n;

     printf("enter principle\n");
    scanf("%d",&p);


    printf("Enter rate of intrest\n");
    scanf("%d",&r);

    printf("enter number of years\n");
    scanf("%d",&n);

    si(p,n,r);

    printf("Simple intrest is  %f",si(p,n,r));
    return 0;
}

float si(int p,int n,int r)
{

    float x;
    x=(p*n*r)/100;
    return x;
}*/






/*int even_odd(int);                                    //Question 3 (even or odd by TSRS)

int main()
{
    int n,ret;
    printf("enter a number\n");
    scanf("%d",&n);
    ret=even_odd(n);
    if(ret==1)
    printf("the entered number is even");

     else
            printf("the enterrd number is odd");

            return 0;
}

int even_odd(int n)
{

    if(n%2)
        return 0;
    else
        return 1;
}*/


/*void nat(int);                                          //Question 4(print n natural number by TSRN)

int main()
{
    int n;
    printf("enter nuber\n");
    scanf("%d",&n);

    nat(n);

    return 0;

}

void nat(int n)
{
    for(int i=1;i<=n;i++)
        {
            printf("%d\n",i);
        }
}*/


/*void odd(int);                                          //Question 5(print n odd natural number by TSRN)

int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);

    odd(n);

    return 0;

}

void odd(int n)
{
    for(int i=1;i<=n;i++)
        {
            printf("%d\n",(2*i)-1);
        }
}*/

/*int fact(int);                                              //Question 6( factorial by TSRS)

int main()
{
    int n;

    printf("enter number to calculate factorial\n");
    scanf("%d",&n);
    //fact(n);

    printf("factorial is %d",fact(n));

    return 0;
}

int fact(int n)
{
    int fact=1;

    for(int i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}*/


/*int ncr(int,int);                                               //Question 7 (combination)
int fact(int);
int main()
{
    int n,r;
    printf("enter number of object\n");
    scanf("%d",&n);
    printf("enter how many selection you want to made from objects\n");
    scanf("%d",&r);
    printf("number of combination is %d",ncr(n,r));

    return 0;
}

int fact(int n)
{
    int factorial=1;
    for(int i=1;i<=n;i++)
        factorial=factorial*i;
    return factorial;
}

int ncr(int obj,int sel)
{

    int way= fact(obj)/(fact(obj-sel)*fact(sel));
    return way;

}*/


/*int npr(int,int);                                               //Question 8 (permutation or arrangement)
int fact(int);
int main()
{
    int n,r;
    printf("enter number of object\n");
    scanf("%d",&n);
    printf("enter how many selection you want to made from objects\n");
    scanf("%d",&r);
    printf("number of combination is %d",npr(n,r));

    return 0;
}

int fact(int n)
{
    int factorial=1;
    for(int i=1;i<=n;i++)
        factorial=factorial*i;
    return factorial;
}

int npr(int obj,int sel)
{

    int way= fact(obj)/fact(obj-sel);
    return way;

}*/



/*int digit(int,int);                                               //Question 9 (digit has to be found in the number TSRS)
int main()
{
    int count,n,dgt;
    printf("enter number\n");
    scanf("%d",&n);
    printf("enter digit that is find in the number\n");
    scanf("%d",&dgt);

    count=digit(n,dgt);

    if(count==0)
        printf("Ohhhhhhh...... Yes  digit has found in the number");
    else
        printf("Ohhhhhhh...... No   digit has not found in the number");

    return 0;
}

int digit(int n,int dgt)
{
    int r;
    while(n!=0)
    {
        r=n%10;
        if(r==dgt)
            {
                return 0;
                break;
            }
        else
            return 1;
            n=n/10;
    }
}*/





                                                                                                //Question 10 has not solved......
