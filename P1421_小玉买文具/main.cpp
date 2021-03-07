#include <iostream>

using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b){
        int total = a*10+b;
        cout << int(total/19) << endl;
    }
    return 0;
}
