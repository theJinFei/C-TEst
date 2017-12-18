#include <stdio.h>

int counts[10005];
int bets[100005];
int N;

int main(void) {
    scanf("%d", &N);
    int i = 0;
    for(i = 0; i < N; ++i) {
        scanf("%d", &bets[i]);
        counts[bets[i]]++;
    }
    for(i = 0; i < N; ++i) {
        if(1 == counts[bets[i]]) {
            printf("%d\n", bets[i]);
            return 0;
        }
    }
    printf("None\n");
    return 0;
}
