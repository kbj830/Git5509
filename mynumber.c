#include <stdio.h>

bool isPrime(int n) {
    if (n < 2) return 0;
    for(int i = 2; i*i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    for(int i = 1; i <= 100; i += 2)
        printf("%d\n", i);
    for(int i = 2; i <= 100; i += 2)
	printf("%d\n", i);
    for(int i = 1; i <= 100; i++) 
        if (isPrime(i))
            printf("%d\n", i);
    return 0;
}
