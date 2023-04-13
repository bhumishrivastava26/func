//call by function
/*#include<stdio.h>

int sum();
int sub();

int main()
{
    sum();
    sub();
    sum();
}

int sum()
{
    int a,b,c;
    printf("\nenter two numbers:\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is %d",c);
}

int sub()
{
    int x,y,z;
    printf("\nenter two numbers:\n");
    scanf("%d%d",&x,&y);
    z=x-y;
    printf("differnce is %d",z);

}*/


//call by function
/*#include<stdio.h>
int sum(int x,int y);
int main()
{
    int a,b,f;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    f=sum(a,b);
    printf("the sum is %d",f);
    return 0;
}
int sum(int x,int y)
{
    int c;
    c=x+y;
    return(c);
}*/



//call by reference
/*#include<stdio.h>
int multi(int* x, int* y, int* z);

int main()
{
    int a,b,c,result;
    printf("enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    result=multi(&a,&b,&c);
    printf("result is %d",result);
}

int multi(int* x, int* y, int* z)
{
    int *sol;
    *sol=(*x)*(*y)*(*z);
    return(*sol);
}*/


//recursion function
/*#include<stdio.h>
int main()
{
int num,remainder,original,reverse=0;
printf("REVERSE NUMBER");
printf("enter a number:");
scanf("%d",&num);
original = num;
while(num!= 0)
{
   remainder=num%10;
   reverse=reverse*10+remainder;
   num/=10;
}
if(original==num)
{
    printf("yes");
}
else
{
    printf("no");
}
}*/