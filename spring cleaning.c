#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    int total_time = (X * 30) + (Y * 60);
    
    printf("%d\n", total_time);
    return 0;
}
