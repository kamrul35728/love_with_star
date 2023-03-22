#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("*");
        }
        for (int j = 2; j <= i; j++)
        {
            if (i==1||j==2)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for (int j = 2; j <= i; j++)
        {
            if (i == 1 || j == i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = i; j <= n; j++)
        {
            printf("*");
        }
        for (int j = i; j <= n; j++)
        {
            printf("*");
        }
        for (int j = 2; j <= i; j++)
        {
            if (i == 1 || j == 2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 2; j <= i; j++)
        {
            if (i == 1 || j == i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = i; j <= n; j++)
        {
            printf("*");
            
        }
        printf("*");
        printf("\n");
    }


    for (int i = 1; 2*i <= 2*n; i++)
    {
        for (int j = 1; j <= 2*i; j++)
        {
            printf("*");
        }
        for (int j = 2*i; j <= 2*n; j++)
        {
            if (i ==n || j == 2*i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 2*i+1; j <= 2*n; j++)
        {
            if (i == 2*n || j == 2*n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 1; j <= 2*i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}