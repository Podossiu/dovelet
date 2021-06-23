#include <stdio.h>
 
int             power(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return 2 * power(n - 1);
}
 
int             main(void) 
{
    char            arr[31] = { 0, };
    int             length;
    int             i;
    int             answer = 0;
    scanf("%s", arr);
    length = strlen(arr);
    for (i = 0; i < length; ++i)
    {
        if (arr[i] == '1')
        {
            answer += power(length - i);
        }
    }
    printf("%d", answer);
    return 0;
}
 
 
