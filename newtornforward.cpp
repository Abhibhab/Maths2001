#include<stdio.h>
int main()
{
float y[10][10],sum,t,a,x;
int i,j,n;
printf("enter the value of n:");
scanf("%d",&n);
printf("\n enter the value of x:\n");
for(i=1;i<=n;i++)
{
scanf("%f",&y[i][1]);
}
printf("enter the value of f(x):\n");
for(i=1;i<=n;i++)
{
scanf("%f",&y[i][2]);
}
for(j=3;j<=n+1;j++)
{
for(i=1;i<=n;i++)
{
y[i][j]=y[i+1][j-1]-y[i][j-1];
}
}
printf("\n value of interpolation point:");
scanf("%f",&x);
printf("\n the forward difference table:\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n+2-i;j++)
{
printf("%.2f\t",y[i][j]);
}
printf("\n");
}
t=1;
sum=y[1][2];
a=(x-y[1][1])/(y[2][1]-y[1][1]);
for(j=2;j<=n;j++)
{
t=t*(a-(j-2))/(j-1);
sum=sum+(t*y[1][j+1]);
}
printf("\n the required of f(%f)=%.2f\n",x,sum);
return 0;
}


second
#include<stdio.h>
#include<math.h>
int fact(int);
void main()
{
float arr[10][10],x,h,p,y,px=1;
int i,j,n,ch=30;
printf("\nEnter the number of data:");
scanf("%d",&n);
printf("\nEnter the value of x:");
for(i=0;i<n;i++)
{
    printf("X%d=",i+1);
    scanf("%f",&arr[i][0]);
}
printf("\nEnter the value of f(x):");
for(i=0;i<n;i++)
{
printf("Y%d=",i+1);
scanf("%f",&arr[i][1]);
}

for(j=2;j<=n;j++)
for(i=0;i<n-1;i++)
arr[i][j]=arr[i+1][j-1]-arr[i][j-1];

printf("\nDifference table is:-");
printf("\n\tx\tY");
for(i=0;i<=n-2;i++)
printf("\t%c^%dY",ch,i+1);
for(i=0;i<n;i++)
{printf("\n");
for(j=0;j<n+1-i;j++)
{printf("\t%.4f",arr[i][j]);
}
}
printf("\nEnter the value x for function f(x):");
scanf("%f",&x);
h=arr[1][0]-arr[0][0];
p=(x-arr[0][0])/h;
y=arr[0][1];
for(i=1;i<n;i++)
{ px=px*(p-(i-1));
y=y+(arr[0][i+1]*px)/fact(i);
}
printf("\nthe value of function at x=%f is %f",x,y);
}
int fact(int n)
{ int i,f=1;
for(i=1;i<=n;i++)
f=f*i;
return f;
}
