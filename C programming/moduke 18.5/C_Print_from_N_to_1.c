#include <stdio.h>

void fun(int n) 
{
    if (n == 0)return;
    printf("%d", n);
    if (n > 1) {
        printf(" "); // print space after number, except for the last number
    }
    fun(n-1);
}

int main() {
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}
