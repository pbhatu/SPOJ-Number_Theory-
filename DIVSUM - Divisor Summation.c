#include<stdio.h>
#include<math.h>
int main()
{
    long long int tcases,i,n;
    scanf("%lld",&tcases);
    while(tcases--)
    {
        long long int sum=0;
        scanf("%lld",&n);
        long long  int x=sqrt(n);
        for(i=1;i<=x;i++)
        {
            if((n%i)==0)
            {
                if((n/i)!=i)
                {
                sum=sum+i+(n/i);
                }
                else if((n/i)==i)
                {
                    sum=sum+i;
                }
                
                
            }
            
        }
        printf("%lld\n",sum-n);

    }
    return 0;

}
