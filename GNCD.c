#include <stdio.h>
#include <stdlib.h>

#define MAXA 10000000

// Frequency array for counting occurrences
int freq[MAXA + 1];

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);

        int maxA = 0;
        for (int i = 0; i < N; i++) {
            int x;
            scanf("%d", &x);
            freq[x]++;
            if (x > maxA) maxA = x;
        }

        int ans = 0;
        for (int z = maxA; z >= 5; z--) {
            int cnt = 0;
            for (int j = z; j <= maxA; j += z) {
                cnt += freq[j];
                if (cnt >= 2) break;
            }
            if (cnt < 2) {
                ans = z;
                break;
            }
        }

        printf("%d\n", ans);
        for (int i = 0; i < N; i++) {
            freq[i] = 0;
        }
    }

    return 0;
}


