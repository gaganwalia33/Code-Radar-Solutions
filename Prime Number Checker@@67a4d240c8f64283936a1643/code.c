#include <stdio.h>

int isprime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t, num,isprime;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &num);
        printf("%d\n", isprime(num));
    }
    return 0;
}
