//
//  main.c
//  funct_example
//
//  Created by PROGRAMMING on 05/12/2022.
//  Copyright © 2022 CC-Comprog11. All rights reserved.
//

#include <stdio.h>
 void displayMessage(int temp){
    if(temp==1)
        printf("Enter First Number: ");
    else
        printf("Enter Second Number: ");
    
}

int acceptNum(){
    int n;
    scanf("%d",&n);
    return n;
    
}

int computeProd(int num1, int num2){
    int prod=0;
    for(int i=1;i<=num2;i++)
    {
        prod+=num1;
        
    }
    return prod;
}

void displayResult(int n1, int n2, int p){
    
    printf("The product of %d * %d = %d",n1,n2,p);
}
int main(int argc, const char * argv[]) {
     
   int n1,n2,prod;
    displayMessage(1);
    n1 = acceptNum();
    displayMessage(0);
    n2 = acceptNum();
    prod = computeProd(n1,n2);
    displayResult(n1, n2, prod);
   
}

