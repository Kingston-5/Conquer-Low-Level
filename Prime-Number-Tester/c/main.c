// c program for testing primality
#include <stdio.h>

int main() {

    unsigned guess;     // current guess for prime
    unsigned factor;    // possible factor of guess
    unsigned limit;     // find primes up to this value

    printf("Find prime numbers up to: ");
    scanf("%u", &limit);

    printf("2\n");      // treat first 2 as primes
    printf("3\n");      // special case
    guess = 5;          // initial guess
                        //
    while(guess <= limit){
        factor = 3;
        while(factor * factor < guess && guess % factor != 0)
            factor += 2;
        if(guess % factor != 0)
            printf("%d\n", guess);
        guess += 2;
    }

    return 0;
}

