#include <stdio.h>
#include <stdlib.h>

int power_fun(int , int);

int main(void){
    int power = 0;
    int base, exponent;

    printf("This program prints power of a no. \n");

    printf("Enter base no.: \n");
    scanf("%d \n", &base);

    printf("Enter exponent of base: \n");
    scanf("%d \n", &exponent);

    power = power_fun(base , exponent);

    printf("Here is the power of %d raised to %d = \n", base, exponent, power);

}

int power_fun(int b , int e){

    if(!e) return 1;
    else if(e > 0){
        return b * power_fun(b , --e);
    }
}

