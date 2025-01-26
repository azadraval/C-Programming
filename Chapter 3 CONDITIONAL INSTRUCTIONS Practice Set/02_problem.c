#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    
    // Prompt the user for input
    printf("Enter the marks for three subjects: ");
    scanf("%d\n %d\n %d", &marks1, &marks2, &marks3);
    
    // Check if any of the marks are less than 33
    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
        printf("You are failed due to less marks in individual subjects\n");
    // Check if the average is less than 40
    else if ((marks1 + marks2 + marks3) / 3 < 40)
        printf("You are failed due to less percentage\n");
    else
        printf("You are pass\n");

    return 0;
}
