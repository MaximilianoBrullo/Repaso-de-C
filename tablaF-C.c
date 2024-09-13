#include<stdio.h>

/*Imprimie una tabla de grados Fahrenheit y 
su equivalente en Celsuis*/

main(){
    int fahr, celsius;
    int lower, upper, step;

    lower = -50;
    upper = 400;
    step = 10;
    
    fahr = lower;
    while(fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}