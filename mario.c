#include<cs50.h>
#include<stdio.h>

int main()
{
    int n = get_int("Enter a number between 1-8: ");
    for(int i = 0; i < n; i++)
    {
        for(int k = n-1; k > i; k--)
        {
            printf(" ");
        }
        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }
        for(int m = 0; m < n; m++)
        {
            printf(" ");
        }
        for(int l = 0; l <= i; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
