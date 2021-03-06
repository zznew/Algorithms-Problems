#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int a[100010];
typedef long long ll;

int main()
{
    int n = 0, m = 0;
    scanf("%d %d",&n,&m);
    for(int i = 0; i < n + m + 1; ++ i){
        scanf("%d", &a[i]);
    }
    sort(a, a + n + m + 1);
//    for(int j = 0; j < n + m + 1; ++ j){
//        printf("%d ", a[j]);
//    }
    // 找出所给整数中负整数的个数
    int cnt = 0;
    while(a[cnt] < 0){
        cnt ++ ;
    }
    //printf("\n%d\n", cnt);
    for(int k = 0; k < m; ++ k ){
        a[k] *= -1;
    }

    ll sum = 0;
    for(int p = 0; p < n + m + 1; ++ p ){
        sum += a[p];
    }
    cout << sum << endl;
    return 0;
}
