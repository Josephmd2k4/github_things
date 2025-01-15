#include <stdio.h>
int main(){
    int x;
    printf("What is the temperature in Farenheit?\n");
    scanf("%d", &x);
    printf(x > 70 && x < 85);
}
