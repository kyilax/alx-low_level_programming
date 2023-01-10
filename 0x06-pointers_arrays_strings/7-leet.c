
char *leet(char *s)
{
    int low[] = {97, 101, 111, 116, 108};
    int high[] = {65, 69, 79, 84, 76};
    int num_code[] = {52, 51, 48, 55, 49, 52, 51, 48, 55, 49};

    int count = 0, i;

    while (*(s + count) != '\0')
    {
        for (i = 0; i < 10; i++)
        {
            if (*(s + count) == low[i] || *(s + count) == high[i])
            {
                *(s + count) = num_code[i];
            }
        }

        count++;
    }

    return s;
}