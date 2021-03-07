#include <iostream>
#include <cstdlib>
using namespace std;

// 模拟银行账户

int main()
{
    int credit = 0;
    const int income = 300;
    int cost;
    int save = 0;
    int up;
    for(int i = 1; i <= 12; ++i){
        credit += income;
        cin >> cost;
        if(credit < cost){
            cout << -i;
            return -1;
        }
        if(credit >= 100){
            up = ((credit-cost) / 100) * 100;
            credit -= up;
            save += up;
        }
        credit -= cost;
    }
    cout << credit + save * 1.2;
    getchar();
    return 0;
}
