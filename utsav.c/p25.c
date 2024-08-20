#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char ch;
    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
}