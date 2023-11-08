#include <stdio.h>

int count_words(char *str, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    if(str[0] != c)
        count++;
    while(str[i])
    {
        if(str[i] == c && str[i + 1] != c)
            count++;
        i++;
    }
    return(count);
}

#include <stdio.h>

int    main() {
    printf("%d\n", count_words("            ice est                            un test                kndkdnf ld            [olef         l,f;,r' ]", ' '));
}