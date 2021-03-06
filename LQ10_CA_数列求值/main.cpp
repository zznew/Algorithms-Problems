#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 1,b = 1,c = 1;
    int d = 0;
    if(n <= 3)
        cout << 1;
    else{
        for(int i = 4; i <= n; ++i){
            d = (a % 10000 + b % 10000 + c % 10000) % 10000;
            a = b;
            b = c;
            c = d;
        }
        cout << d % 10000 << endl;
    }
    return 0;
}
