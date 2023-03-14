#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int hh,mm;
    scanf("%d%d",&hh,&mm);
    if (4<=hh && hh<=11){
        printf("Good Morning");
    }
    else if(12<=hh && hh<=15){
        printf("Good Afternoon");
    }
    else if (16<=hh && hh<=20){
        printf("Good Evening");
    }
    else if(22<=hh && hh<=23 && 1<=hh && hh<=3){
        printf("Good Night");
    }

    return 0;
}
