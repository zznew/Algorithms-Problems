#include <iostream>

using namespace std;

bool check(int num)
{
    bool flag = false;
    while(num){
        int temp = num % 10;
        if(temp ==0 || temp ==1 || temp ==2 || temp ==9){
            flag = true;
        }
        num /= 10;
    }
    return flag?true:false;
}

int main()
{
    long long ans = 0;
    int n;
    cin >> n;
    for(int i = 1; i < n + 1; ++i){
        if(check(i)){
            ans += i * i;
        }
    }
    cout << ans << endl;
    return 0;
}
