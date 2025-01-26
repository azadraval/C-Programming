#include <stdio.h>

int main() {
    int n = 3;  // Number of lines to print
    
    for (int i = 0; i < n; i++) {  // Loop for each line
        // Loop to print an odd number of asterisks on the current line
        // The number of asterisks is 2*i + 1 (1, 3, 5, ...)
        for (int j = 0; j < 2 * i + 1; j++) {  
            printf("*");  // Print an asterisk
        }
        printf("\n");  // Move to the next line after printing asterisks for the current line
    }
    
    return 0;  // Indicate that the program ended successfully
}
