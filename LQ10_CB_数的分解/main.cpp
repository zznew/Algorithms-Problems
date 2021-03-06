#include <bits/stdc++.h>

using namespace std;

int check(int x, int y, int z)
{
    while(x)
    {
        int temp = 0;
        temp = x % 10;
        if(temp == 2 || temp ==4)   return 0;
        x /= 10;
    }

    while(y)
    {
        int temp = 0;
        temp = y % 10;
        if(temp == 2 || temp ==4)   return 0;
        y /= 10;
    }

    while(z)
    {
        int temp = 0;
        temp = z % 10;
        if(temp == 2 || temp ==4)   return 0;
        z /= 10;
    }

    return 1;
}

int main()
{
    int cnt = 0;
    int i,j,k;
    for(i = 1; i < 2019; ++i){
        for(j = 1; j < 2019 - i; ++j){
            if(i == j)  continue;
            k = 2019 - i - j;
            if(i == k || j == k)    continue;
            cnt += check(i,j,k);
        }
    }
    cout << cnt / 6 << endl;
    return 0;
}
