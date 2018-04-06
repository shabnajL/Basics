#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
int Prime[1000],nPrime = 0;
bool mark[1000];
int sieve(int n)
{
    int i,j, limit = sqrt(n) + 2;
    mark[1] = 1;
    int x = n;
    for(i=4; i<=n; i+=2)
    {
        mark[i] = 1;
    }

    Prime[nPrime++] = 2;
    for(i=3; i<=n; i++)
    {
        if(mark[i] == 0)
        {
            Prime[nPrime++] = i;
            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=(i*2))
                {
                    mark[j] = 1;
                }
            }
        }
    }
}
int main()
{
    sieve(1005);
    int n;
    while(cin>>n)
    {
        if(mark[n]==1)
        {
            printf("Not Prime\n");
        }
        else
        {
            printf("Prime\n");
        }
    }
    return 0;
}
