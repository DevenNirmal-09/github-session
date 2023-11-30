#include <stdio.h>
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
double term(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        return (double)n / factorial(n) + term(n - 1);
    }
double seriesSum(int N)
{
    double sum = 0;
    sum = term(N);
    return sum;
}
int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    double result = seriesSum(N);
    printf("Sum of the series up to %d terms: %lf\n", N, result);
    return 0;
}
