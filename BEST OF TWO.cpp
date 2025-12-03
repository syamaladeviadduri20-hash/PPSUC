#include <stdio.h>

int main() {
    int A1, A2, A3, B1, B2, B3;
    int aliceRolls[3], bobRolls[3];
    int i, j, temp;
    int aliceScore, bobScore;

    // Input six numbers
    scanf("%d %d %d %d %d %d", &A1, &A2, &A3, &B1, &B2, &B3);

    // Store rolls in arrays
    aliceRolls[0] = A1; aliceRolls[1] = A2; aliceRolls[2] = A3;
    bobRolls[0] = B1; bobRolls[1] = B2; bobRolls[2] = B3;

    // Sort Alice's rolls in descending order
    for(i=0;i<2;i++){
        for(j=i+1;j<3;j++){
            if(aliceRolls[i] < aliceRolls[j]){
                temp = aliceRolls[i];
                aliceRolls[i] = aliceRolls[j];
                aliceRolls[j] = temp;
            }
        }
    }

    // Sort Bob's rolls in descending order
    for(i=0;i<2;i++){
        for(j=i+1;j<3;j++){
            if(bobRolls[i] < bobRolls[j]){
                temp = bobRolls[i];
                bobRolls[i] = bobRolls[j];
                bobRolls[j] = temp;
            }
        }
    }

    // Calculate sum of top 2 rolls
    aliceScore = aliceRolls[0] + aliceRolls[1];
    bobScore = bobRolls[0] + bobRolls[1];

    // Determine winner
    if(aliceScore > bobScore)
        printf("Alice");
    else if(bobScore > aliceScore)
        printf("Bob");
    else
        printf("Tie");

    return 0;
}
