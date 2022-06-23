//ANSWER NO.-!

#include<stdio.h>
int main()
{
 int a,b,c,d,e; char ch;
 float flo; double dle;
 b=sizeof(a);
 printf("\nSize of integer constants is %d", b);
  c=sizeof(ch);
 printf("\nSize of character constants is %d", c);
 d=sizeof(flo);
 printf("\nSize of float constants is %d", d);
 e=sizeof(dle);
 printf("\nSize of double constants is %d\n", e);
 return 0;
 
}

// ANSWER NO.-2

#include<stdio.h>
int main()
{
 int x,y;
 printf("Enter a Number: \n");
 scanf("%d", &x);
 y=x%10;
 printf("The last digit of the given number is %d\n  ",y);
 return 0;
}

// ANSWER NO.-3

#include<stsdio.h>
int main()
{
 int x,y;
 printf("\n Please Enter Three Digits Number: \n");
 scanf("%d",&x);
 y=x/100;
 printf("\n The First Digit Of The Given Number is %d",y);
 return 0;
}

ANSWER NO. -4 
#include<stdio.h>
int main()
{
 int x,y;
 printf("\n Please enter a three digits number: \n");
 scanf("%d",&x);
 x=x%10;
 y=x/10;
 printf("\nThe middle digit of the number is %d\n",y);
 return 0;
}


//ANSWER NO.-5 
#include<stdio.h>
int main()
{
 int a,b,temp;
 printF("\n Enter two numbers: \n");
 scanf("%d%d",&a,&b);
 printf("BEfore Swapping a=%d and b=%d\n ",a,b);
 temp=a;
 a=b;
 b=temp;
 printf("After Swapping a=%d and b=%d \n ",a,b);
 return 0;
}





























