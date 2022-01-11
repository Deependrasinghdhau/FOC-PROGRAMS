#include <stdio.h>
#include <conio.h>

int main()
{
    // program to calulate prime no's up to given no
    int n;
    int flag;
    int i, low = 1;
    printf("ENTER NO UP TO WHICH YOU WANT TO CALCULATE PRIME NO'S : ");
    scanf("%d", &n);
    while (low < n)
    {
        flag = 0;
        for (i = 2; i * i <= low; i++)
        {
            if (low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("\n%d", low);
        }
        low++;
    }
    return 0;
}