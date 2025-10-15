#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        int pos = N; // start at lily pad N
        for (int i = 1; i <= N - 1; i++) {
            if (i % 2 == 1)  // odd jump ? left
                pos -= (N - i);
            else              // even jump ? right
                pos += (N - i);
        }
        printf("%d\n", pos);
    }
    return 0;
}
