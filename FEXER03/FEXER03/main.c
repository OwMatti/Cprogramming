//
//  main.c
//  FEXER03
//
//  Created by PROGRAMMING on 05/12/2022.
//  Copyright © 2022 CC-Comprog11. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float r, i, am, ys, nam;
    printf("input the amount: ");
    scanf("%f",&am);
    printf("input the year(s): ");
    scanf("%f",&ys);
    r = 0.10;
    i = 1;
    nam = am;
    do {
        nam = nam + (nam * r);
        i++;
    } while (i<=ys);
    printf("the Original amount is: %.3f",nam);
    
    
    return 0;
}
