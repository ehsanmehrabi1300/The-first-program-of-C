#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    c = getchar();
    if (c >= 'a' && c <= 'z')
    {
        c -= 32;
        printf("%c\n", c);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        c += 32;
        printf("%c\n", c);
    }
    else
    {
        puts("\n");
    }
    return 0;
}
