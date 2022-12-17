#include <stdio.h>
#include <stdlib.h>

FILE *fp;
int numbers[];

int main()
{
    int num;


    if((fp = fopen("./input.txt", "r")) == NULL)
    {
       printf("Error opening file");
       exit(1);
    }

    fscanf(fp, "%d", &num);
    printf("Value of first number: %d", num);

    fclose(fp);
    return 0;
}
