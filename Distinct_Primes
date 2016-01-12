#include<stdio.h>
#include<math.h>
 int a[1005];
int primeFactors(int n)
{
    int count1=0,flag=0;
    if(n%2==0)
    {
        count1++;
    }
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        //printf("%d ", 2);

        n = n/2;
    }

    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        if(n%i==0)
        {
            count1++;
        }
        while (n%i == 0)
        {

           // printf("%d ", i);
            n = n/i;
        }
        if(count1>=3)
        {

            break;

        }

    }

    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
    {
      count1++;
    }
    return count1;
        //printf ("%d ", n);
}
void precal()
{
   int i,j,y=0;
    for(i=1;i<=1005;i++)
    {
        for(j=y+1;j<=1000000;j++)
        {
            int x=primeFactors(j);
            if(x>=3)
            {
                a[i]=j;
                y=j;
                break;

            }
        }

    }
}

int main()
{
    int tcases,n;
    precal();
    //a[1]=30;
    //a[2]=42;
    scanf("%d",&tcases);
    while(tcases--)
    {
        scanf("%d",&n);
        printf("%d\n",a[n]);
    }
    return 0;
}
