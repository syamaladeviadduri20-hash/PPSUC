#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char votes[105];

    scanf("%d", &N);
    scanf("%s", votes);

    int count1 = 0, count0 = 0;

    for(int i = 0; i < N; i++) {
        if(votes[i] == '1')
            count1++;
        else if(votes[i] == '0')
            count0++;
    }

    if(count1 > count0)
        printf("gogi_to_the_moon");
    else
        printf("kiddo");

    return 0;
}
