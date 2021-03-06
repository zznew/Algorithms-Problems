#include <bits/stdc++.h>

using namespace std;

int a[100010];
int b[100010];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) scanf("%d", &a[i]);
    sort(a,a+n);
    int res = 0;
    int left = a[0];
    int right = a[n-1];
    if(a[0] % 2)    left = a[0] - 1;
    if(a[n-1] % 2)  right = a[n-1] + 1;
    res = (right - left) / 2 + 1;
    cout << res << endl;
    return 0;
}
