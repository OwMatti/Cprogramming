//
//  main.c
//  FEXER04
//
//  Created by PROGRAMMING on 12/12/2022.
//  Copyright © 2022 CC-Comprog11. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num, i, inpn=0;
    for (i=1; num<2; i++)
    {
        printf("\nInput number's 0 to 2: ");
        scanf("%d",&num);
        inpn = inpn * num;
        if (inpn * num + num == 0)
        {
            printf("Terminated by a Hero");
        }
        else if (num == 2)
        {
            printf("End of the Game");
        }
        else if (i == 1)
        {
            printf("First Blood");
            inpn+=1;
        }
        else
        {
            inpn++;
            switch (inpn)
            {
                case 1: printf("Terminating a Hero"); break;
                case 2: printf("Double Kill"); break;
                case 3: printf("Terminating Spree"); break;
                case 4: printf("dominating"); break;
                case 5: printf("Mega Kill"); break;
                case 6: printf("Unstappoable"); break;
                case 7: printf("Wicked Sick"); break;
                case 8: printf("Monster Kill"); break;
                case 9: printf("God Like"); break;
            }
            if (inpn>=10)
            {
                printf("Beyond God Like");
            }
        }
    }
    return 0;
}
