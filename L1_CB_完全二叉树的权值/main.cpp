#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

typedef long long ll;

int a[100010];
int n;

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) scanf("%d",&a[i]);
    int pos = 2;
    int _max = 1;
    int level = 1;
    int num = 1;
    int ans = 1;
    // ʵʱ���·����μ���Խ ������к�
    while(true)
    {
        level++;
        ll sum = 0;
        num *= 2;
        for(int j = pos; j < min(n,(pos + num - 1)); ++j)  sum += a[j];
        if(_max < sum)
        {
            ans = level;
            _max = sum;
        }
        pos=pos+num;
        if(pos>n)   break;
    }
    cout << ans << endl;
    return 0;
}
