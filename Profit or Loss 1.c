#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float cp,sp;
    scanf("%f",&cp);
    scanf("%f",&sp);
    if (cp>sp){
        printf("Loss\n%.2f%%",(cp-sp)/cp*100);
    }
    else{
        printf("Profit\n%.2f%%",(sp-cp)/cp*100);
    }
    return 0;
}
