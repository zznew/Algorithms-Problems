#include <bits/stdc++.h>
using namespace std;
long long n=1001733993063167141;
long long d=212353;
long long c=20190324;
long long p=891234941;
long long q=1123984201;
long long e=823816093931522017;
long long phi=(p-1)*(q-1);
void Ex_gcd(long long a,long long b,long long &x,long long &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return ;
    }
    long long x1,y1;
    Ex_gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
}
long long quickmul(long long a,long long b)
{
    long long sum=0;
    while(b)
    {
        if(b%2==1)
            sum=(sum+a)%n;
        a=(a+a)%n;
        b=b/2;
    }
    return sum;
}
long long quickmod(long long a,long long b)
{
    long long ans=1;
    while(b)
    {
        if(b%2==1)
            ans=quickmul(ans,a);
        a=quickmul(a,a);
        b=b/2;
    }
    return ans;
}
int main()
{
    long long x,y;
    Ex_gcd(d,(q-1)*(p-1),x,y);
    x=(x+phi)%phi;
    printf("e=%lld\n",x);
    printf("ans=%lld\n",quickmod(c,e));
    return 0;
}
