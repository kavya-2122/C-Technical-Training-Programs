#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    int original = x;
    int reverse = 0;
    int remainder;

    if (x < 0)
    {
        return false;
    }

    while (x > 0)
    {
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x = x / 10;
    }

    if (original == reverse)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x = 121;

    if (isPalindrome(x))
        printf("true");
    else
        printf("false");

    return 0;
}