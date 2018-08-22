#include <stdio.h>

int main (void)
{
    for (int counter = 1; 100 >= counter; ++counter)
    {
        if (counter % 3 == 0 && counter % 5 == 0 ) 
            printf("FizzBuzz, ");
        else if (counter % 3 == 0)
            printf("Fizz, ");
        else if (counter % 5 == 0)
            printf("Buzz, ");
        else
            printf("%u, ", counter);
    }
    printf("\n");
    return 0;
}
