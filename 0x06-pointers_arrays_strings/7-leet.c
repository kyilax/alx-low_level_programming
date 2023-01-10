
char *leet(char *s)
{
    int letter[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
    int num_code[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

    int count = 0, i;

    while (*(s + count) != '\0')
    {
        for (i = 0; i < 10; i++)
        {
            if (*(s + count) == letter[i])
            {
                *(s + count) = num_code[i];
            }
        }

        count++;
    }

    return s;
}