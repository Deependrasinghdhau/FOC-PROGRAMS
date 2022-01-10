#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int n[50], odd[50], even[50];
    int j = 1, k = 1;
    printf("ENTER HOW MANY NO YOU WANT TO arrange : ");
    int x;
    scanf("%d", &x);
    printf("\n\n\n\t\tREGISTRING MODE ENABLED \n\n\n");
    for (int i = 1; i <= x; i++)
    {
        printf("ENTER NO %d : ", i);
        scanf("%d", &n[i]);
    }
    for (int i = 1; i <= x; i++)
    {
        if (n[i] % 2 == 0)
        {
            even[j] = n[i];
            j = j + 1;
        }
        else
        {
            odd[k] = n[i];
            k = k + 1;
        }
    }
    printf("EVEN NO'S ARE : ");
    for (int i = 1; i < j; i++)
    {
        printf(" %d \t", even[i]);
    }
    printf("\n");
    printf("ODD NO'S ARE : ");
    for (int i = 1; i < k; i++)
    {
        printf(" %d \t", odd[i]);
    }
    return 0;
}
