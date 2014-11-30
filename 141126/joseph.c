#include<stdio.h>
/* Algorithm:
 * After the k-th person is killed, we're left with a circle with n-1 people and the starting point is ((k - 1) % n + 1)
 *   f(n, k) = (f(n-1, k) + k - 1) % n + 1
 *   f(1, k) = 1
 *
 * Simplify (number items from 0 to n-1)
 *   g(n, k) = (g(n-1, k) + k) % n
 *   g(1, k) = 0
 */
int joseph(int n, int k) {
    int a, m = 0;
    for (a = 1; a <= n; a++)
        m = (m + k) % a;
    return m + 1;
}
int main() {
    int n;
    printf("Please input the number of people: ");
    scanf("%d", &n);
    printf("%d\n", joseph(n, 3));
}
