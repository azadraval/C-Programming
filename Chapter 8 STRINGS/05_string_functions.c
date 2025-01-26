#include<stdio.h>
#include<string.h>

int main(){
    char st[]="Azad";
    char s1[50]="Azad";
    char s2[50]=" Raval";
    // printf("%d",strlen(st));
    char target[30];
    strcpy(target,st); // target now contains "Azad"
    // printf("%s %s ",st,target);

    strcat(s1,s2);
    // printf("%s",s1);

    int a=strcmp("far","ajoke");
    printf("%d",a);
    
    
    
    return 0;
}