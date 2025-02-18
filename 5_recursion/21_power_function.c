#include <stdio.h>

// slow one
int power(int m, int n)
{
    if (n == 0)
        return 1;

    return power(m, n - 1) * m;
}

// fast one
int fast_power(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return power(m * m, n / 2);
    else
        return m * power(m * m, (n - 1) / 2);
}

int main()
{
    int r,s;
    r = power(2, 9);
    printf("%d ", r);
    s=fast_power(2,8);
    printf("%d ", s);

    return 0;
}