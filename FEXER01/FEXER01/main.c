//
//  main.c
//  FEXER01
//
//  Created by PROGRAMMING on 07/12/2022.
//  Copyright © 2022 CC-Comprog11. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num, SN, LN, ctr, TAN=0, TANN=0, TCNN=0, TAPN=0, TCN50_100=0;
    for (ctr=1; ctr <= 10; ctr++)
    {
        printf("Integer#%d:", ctr);
        scanf("%d",&num);
        TAN=TAN+num;
        if (ctr==1)
        {
            SN=num;
        }
        else if (num<SN)
        {
            SN=num;
        }
        ///
        if (ctr!=1)
        {
            if (num > LN )
            {
                LN = num;
            }
        }
        else
        {
            LN = num;
        }
        /////
        if (num<0)
        {
            TANN=TANN+num;
            TCNN=TCNN+1;
        }
        else
        {
            TAPN=TAPN+num;
        }
        ///
        /////
        if (num>50 && num<100)
        {
            TCN50_100=TCN50_100+1;
        }
    }
    printf("a.The Total of All Numbers: %d",TAN);
    printf("\nb.The Largest Number is: %d",LN);
    printf("\nc.The Smallest Number is: %d",SN);
    printf("\nd.The Total of all Positive Numbers: %d",TAPN);
    printf("\ne.The Total of all Negative Numbers: %d",TANN);
    printf("\nf.The Total Count of Negative Numbers: %d",TCNN);
    printf("\ng.The Total  Count of Numbers between 50 and 100: %d",TCN50_100);
    return 0;
}
