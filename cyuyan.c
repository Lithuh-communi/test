#include <stdio.h>

int main() {
    int n = 10, t1 = 0, t2 = 1, next;
    printf("Fibonacci Series: %d %d ", t1, t2);
    for (int i = 3; i <= n; ++i) {
        next = t1 + t2;
        printf("%d ", next);
        t1 = t2;
        t2 = next;
    }
    printf("\n");
    return 0;
}
//测试
