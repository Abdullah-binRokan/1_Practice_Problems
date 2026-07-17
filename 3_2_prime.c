#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    } 
    while (min >= max);
    
    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // execlude 1 since it only divisable by one divisior
    if (number == 1)
    {
        return false;
    }
    // test if number is prime by divising form 2 up to Number
    const int RANGE_START = 2;
    for (int n = RANGE_START; n < number; n++)
    {
        if (number % n == 0)
        {
            return false;
        }
    }
    return true;
}
