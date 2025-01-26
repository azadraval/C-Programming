#include<stdio.h>

typedef struct c{
    int real;
    int imaginary;
}complex;
void display (complex c) {
    
    printf("The value of complex number is %d + i %d ",c.real, c.imaginary);


}

int main(){
    complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part\n",&carr[i].real);
        scanf("%d",&carr[i].real);
        printf("Enter the imaginary part\n",&carr[i].imaginary);
        scanf("%d",&carr[i].imaginary);
        display (carr[i]);
        
    }
    
    
    
    return 0;
}