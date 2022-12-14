#include <stdio.h>

int main(int argc, const char *argv[])
{

int num, i, ctr = 0;
for (i = 1; num < 2; i++)
{
    printf("\nInput number 0 to 2: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Terminated by the opponent");
        break;

    }
    else if (num == 2)
    {
        printf("End of the Game");
        break;
    }
    else if (i == 1)
    {
        printf("First Blood!");
        ctr++;
    }
    else
    {

        ctr++;
        switch (ctr)
        {
            case 1:
                printf("Killed a Hero");
                break;
            case 2:
                printf("Double Kill!");
                break;
            case 3:
                printf("Killing Spree!");
                break;
            case 4:
                printf("Dominating!");
                break;
            case 5:
                printf("Mega Kill!");
                break;
            case 6:
                printf("Unstoppable!");
                break;
            case 7:
                printf("Wicked Sick!");
                break;
            case 8:
                printf("Monster Kill!");
                break;
            case 9:
                printf("God Like!");
                break;
        }
        if (ctr >= 10)
        {
            printf("Beyond God Like!");
        }
    }
}


return 0;
}
