#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[3];
    while(scanf("%c%c%c",&a[0],&a[1],&a[2])!= EOF){
        getchar();
        for(int i = 0; i < 2; ++i){
            for(int j = 1; j < 3; ++j){
                if(a[i] > a[j]){
                    char temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        printf("%c %c %c\n",a[0],a[1],a[2]);
    }
    return 0;
}
