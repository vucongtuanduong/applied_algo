#include <stdio.h>
#include <math.h>
//count how many divisors of n that divisible to 2
void check(int n) {
	int count = 0;
	for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            int x = n / i;
            if (x == i) {
                if (x % 2 == 0) {
                    count++;
                }
            } else {
                if (i % 2 == 0) {
                    count++;

                } 
                if (x % 2 == 0) {
                    count++;
                }
            }
        }
        
    }
	printf("%d\n", count);
}
int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		int n;
		scanf("%d", &n);
		check(n);
	}
}
