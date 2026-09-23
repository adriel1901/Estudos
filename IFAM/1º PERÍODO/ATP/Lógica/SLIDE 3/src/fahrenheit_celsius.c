#include <stdio.h>

int main(){
    float C;
    
    scanf("%f", &C);
    const float F = (C*9/5) + 32;
    printf("%2.f", F);

    return 0;
}