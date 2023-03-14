#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int N, B, G, I, D, P, Q, R;
    scanf("%d%d%d%d%d", &N, &B, &G, &I, &D);
    P = B * I;
    Q = G * D;
    R = P - Q;
    if (R > 0){
        printf("Simple Questions");
    }
    else if (R < 0){
        printf("Funny Questions");
    }
    else if (R == 0){
        printf("God Knows!");
    }   
    return 0;
}
