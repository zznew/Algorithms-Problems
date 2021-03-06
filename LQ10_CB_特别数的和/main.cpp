#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

typedef long long LL;

bool check(int num)
{
    while(num)
    {
        int temp = num % 10;
        if(temp == 2 || temp == 0 || temp == 1 || temp == 9){
            return true;
        }
        num /= 10;
    }
    return false;
}

int main()
{
    LL res = 0;
    cin >> n;
    for(int i = 1; i <= n; ++ i){
        if(check(i))    res += i;
    }
    cout << res << endl;
    return 0;
}
