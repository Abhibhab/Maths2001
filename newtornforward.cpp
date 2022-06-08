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
