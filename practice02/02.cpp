#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int t;
    if(a > b) t = a, a = b, b = t;
    if(b > c) t = b, b = c, c = t;
    if(a > b) t = a, a = b, b = t;

    printf("%d %d %d\n", a, b, c);
    return 0;
}
