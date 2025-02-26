#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t, num;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &num);
        printf("%d\n", is_prime(num));
    }
    return 0;
}
