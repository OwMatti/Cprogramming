#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num,S=0,L=0, ctr, total_num=0, total_neg=0, count_neg=0, total_pos=0,  between=0;

    for (ctr=1; ctr <= 10; ctr++)
    {
        printf("Integer-%d:", ctr);
        scanf("%d",&num);

       
        total_num += num;
        if (num < S || ctr == 1) S = num;
        if (num > L || ctr == 1) L = num;

       
        if (num < 0) {
            total_neg += num;
            count_neg++;
        } else {
            total_pos += num;
        }

       
        if (num > 50 && num < 100)  
        between++;
    }

    printf("a.The Total of All Numbers: %d",total_num);
    printf("\nb.The Largest Number is: %d",L);
    printf("\nc.The Smallest Number is: %d",S);
    printf("\nd.The Total of all Positive Numbers: %d",total_pos);
    printf("\ne.The Total of all Negative Numbers: %d",total_neg);
    printf("\nf.The Total Count of Negative Numbers: %d",count_neg);
    printf("\ng.The Total  Count of Numbers between 50 and 100: %d", between);

    return 0;
}
