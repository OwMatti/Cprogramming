#include <stdio.h>

int main(int argc, const char *argv[])
{
    
    float amount, years, ir, fa ;

   
    printf("Enter the initial amount and the number of years: ");
    scanf("%f%f", &amount, &years);
  

    
    ir = 0.10;

 
    fa = amount;
    
    
    for (int ctr = 0; ctr < years; ctr++)
    {
        fa+= fa * ir;
    }

    
    printf("The final amount is: %.3f", fa);

    return 0;
}
