#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount;
    while(scanf("%d", &amount)){
        if(amount <= 150)
            printf("%.1f\n", amount * 0.4463);
        else if(amount <= 400)
            printf("%.1f\n", 0.4663 * amount -3);
        else
            printf("%.1f\n", 0.5663 * amount - 43);
    }
    return 0;
}
