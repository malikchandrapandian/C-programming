#include <stdio.h>
#include <math.h>
void main()
{
    int low, high, i, temp1, temp2, remainder, n = 0, result = 0;
    scanf("%d, &low);
    scanf("%d, &high);
    for(i = low + 1; i < high; ++i)
    {
        temp2 = i;
        temp1 = i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }
        if (result == i) {
            printf("%d ", i);
        }
        n = 0;
        result = 0;
    }
}
