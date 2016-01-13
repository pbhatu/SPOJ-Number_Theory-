#include<stdio.h>

#include <stdbool.h>


bool v[10000009];
long long int a[10000009];
long long int len, sp[10000009],i,j;
void Sieve(){
	for ( i = 2; i < 10000001; i += 2)	sp[i] = 2;//even numbers have smallest prime factor 2
	for (  i = 3; i < 10000001; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (  j = i; (j*i) < 10000001; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}
void cal()
{
    for(i=2;i<=10000000;i++)
    {
        a[i]=a[i-1]+sp[i];
    }
}

int main(){
    sp[0]=0;
    sp[1]=0;
	Sieve();
	cal();
	int tcases;
	long long int n;
  // printf("%lld ",sp[4]);
	scanf("%d",&tcases);
	while(tcases--)
    {
        scanf("%lld",&n);
        printf("%lld\n",a[n]);
    }
    return 0;
}

