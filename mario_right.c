#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x;
    do
    {
        x = get_int("Input Height\n");
    }
    while(x<1 || x>8);
    for (int i=1;i<=x;i++)
    {
        printf("\n");
        for (int k=1;k<=(x-i);k++)
        {
            printf(".");
        }
        for(int j=1;j<=i;j++)
        {
            printf("#");
        }
    }
    printf("\n");
}
