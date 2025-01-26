#include <stdio.h>

int main()
{
    char c;
    int marks=34;
    if(marks<=100 && marks>=90){
        printf("Your grade is A\n");
    }
    else if(marks<=90 && marks>=80){
        printf("Your grade is B\n");
    }
    else if(marks<=80 && marks>=70){
        printf("Your grade is C\n");
    }
    else if(marks<=70 && marks>=60){
        printf("Your grade is D\n");
    }
    else if(marks<=60 && marks>=50){
        printf("Your grade is E\n");
    }
    else{
        printf("Your grade is F\n");
    }

    /*char grade;
    int marks = 78;
    if (marks <= 100 && marks >= 90)
    {
        grade = 'A';
    }
    else if (marks <= 90 && marks >= 80)
    {
        grade = 'B';
    }
    else if (marks <= 80 && marks >= 70)
    {
        grade = 'C';
    }
    else if (marks <= 70 && marks >= 60)
    {
        grade = 'D';
    }
    else if (marks <= 60 && marks >= 50)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }*/

    return 0;
}