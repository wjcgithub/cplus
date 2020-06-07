#include <stdio.h> 

int main(void) 
{ 
    int a = 20;
    const volatile int local = 10; 
    int *ptr = (int*) &local; 

    ptr = &a;

    printf("Initial value of local : %d \n", local); 

    // *ptr = 100; 

    printf("Modified value of local: %d \n", local); 

    return 0; 
} 