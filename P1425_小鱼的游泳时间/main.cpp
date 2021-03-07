#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f;
    while(cin>>a>>b>>c>>d){
        int start_time = a*60 + b;
        int end_time = c*60 + d;
        int time = end_time - start_time;
        e = time/60;
        f = time % 60;
        cout << e << " " << f << endl;
    }
    return 0;
}
