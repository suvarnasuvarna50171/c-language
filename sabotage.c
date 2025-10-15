#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X, K;
        scanf("%d %d %d", &N, &X, &K);

        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        qsort(A, N, sizeof(int), cmp);
        for (int i = N - 1; i >= 0 && K > 0; i--) {
            if (A[i] > X) {
                A[i] = 0;  
                X += 100;  
                K--;
            }
        }
        int R = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] > X)
                R++;
        }
        printf("%d\n", R + 1);
    }

    return 0;
}

