#include <stdio.h>
int main () {
    int num, t, h, tens, ones;
    printf("Enter an integer number between 1 and 10000:");
    scanf("%d", &num);
    t = num/1000;
    h = num%1000/100;
    tens = num%100/10;
    ones = num%10;
    if (num < 0 || num > 10000) {
        printf("Error!");
    }
    if (num < 10001){
     switch (t){
        case 1: printf("one thousand");break;
        case 2: printf("two thousand"); break;
        case 3: printf("three thousand");break;
        case 4: printf("four thousand");break;
        case 5: printf("five thousand");break;
        case 6: printf("six thousand");break;
        case 7: printf("seven thousand");break;
        case 8: printf("eight thousand");break;
        case 9: printf("nine thousand");break;
        case 10: printf("ten thousand");break;
     }
    }
    if (num < 10001){
    switch (h){
        case 1: printf(" one hundred");break;
        case 2: printf(" two hundred");break;
        case 3: printf(" three hundred");break;
        case 4: printf(" four hundred");break;
        case 5: printf(" five hundred");break;
        case 6: printf(" six hundred");break;
        case 7: printf(" seven hundred");break;
        case 8: printf(" eight hundred");break;
        case 9: printf(" nine hundred");break;
        }
    }
    if(num < 10001){
        switch(tens){
        case 1: printf(" ten");break;
        case 2: printf(" twenty");break;
        case 3: printf(" thirty");break;
        case 4: printf(" forty");break;
        case 5: printf(" fifty");break;
        case 6: printf(" sixty");break;
        case 7: printf(" seventy");break;
        case 8: printf(" eighty");break;
        case 9: printf(" ninety");break;
        }

    }
    if (num < 10001){
        switch(ones){
        case 1: printf(" one");break;
        case 2: printf(" two");break;
        case 3: printf(" three");break;
        case 4: printf(" four");break;
        case 5: printf(" five");break;
        case 6: printf(" six");break;
        case 7: printf(" seven");break;
        case 8: printf(" eight");break;
        case 9: printf(" nine");break;
        }
    }
    return 0;
    }
