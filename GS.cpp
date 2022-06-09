#include<stdio.h>
#include<math.h>
int main()
{
    float a[10][10],x[20],sum,temp[10],t=0.0001;
    int i,j,n,f;
    printf("\n\tEnter the order of the matrix:");
    scanf("%d",&n);
    printf("\n\tEnter the element of the matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            scanf("%f",&a[i][j]);
        }
        
    }
    for(i=1;i<=n;i++)
    {
        x[i]=0;
    }
    f=1;
    while(f)
    {
        for(i=1;i<=n;i++)
        {
            sum=0;
            temp[i]=x[i];
            for(j=1;j<=n;j++)
            {
                if(j!=i)
                sum+=a[i][j]*x[j];
            }
            x[i]=(a[i][n+1]-sum)/a[i][i];
        }
        f=0;
        for(i=1;i<=n;i++)
        {
            if(fabs(x[i]-temp[i])>t)
            f=1;
        }
    }printf("result :\n");
    for(i=1;i<=n;i++)
    {
        printf("x[%d]=%f\n",i,x[i]);
    }
    return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
    float a[10][10],x[20],sum,temp[10],t=0.0001;
    int i,j,n,f;
    printf("\n\tEnter the order of the matrix:");
    scanf("%d",&n);
    printf("\n\tEnter the element of the matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            scanf("%f",&a[i][j]);
        }
        
    }
    for(i=1;i<=n;i++)
    {
        x[i]=0;
    }
    f=1;
    while(f)
    {
        for(i=1;i<=n;i++)
        {
            sum=0;
            temp[i]=x[i];
            for(j=1;j<=n;j++)
            {
                if(j!=i)
                sum+=a[i][j]*x[j];
            }
            x[i]=(a[i][n+1]-sum)/a[i][i];
        }
        f=0;
        for(i=1;i<=n;i++)
        {
            if(fabs(x[i]-temp[i])>t)
            f=1;
        }
    }printf("result :\n");
    for(i=1;i<=n;i++)
    {
        printf("x[%d]=%f\n",i,x[i]);
    }
    return 0;
}
