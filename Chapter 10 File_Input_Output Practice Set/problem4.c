#include <stdio.h>

int main()
{
    FILE *ptr;
    char name1[34], name2[34];
    int salary1, salary2;
    ptr = fopen("salary.txt", "w");

    if (ptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the name of employee\n");
    scanf("%s", name1);

    printf("Enter the salary of employee\n");
    scanf("%d", &salary1);

    printf("Enter the name of employee 2\n");
    scanf("%s", name2);

    printf("Enter the salary of employee 2\n");
    scanf("%d", &salary2);

    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%c", ',');
    fprintf(ptr, "%d", salary1);
    fprintf(ptr, "%c", '\n');

    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%c", ',');
    fprintf(ptr, "%d", salary2);
    fprintf(ptr, "%c", '\n');

    fclose(ptr);

    return 0;
}
