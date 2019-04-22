#include<stdio.h>
#include<stdlib.h>
// C Program for the binary  
// representation of a given number 
void bin(unsigned n) 
{ 
    /* step 1 */
    if (n > 1) 
        bin(n/2); 
  
    /* step 2 */
    printf("%d", n % 2); 
} 
  
int main(void) 
{ 
    bin(7); 
    printf("\n"); 
    bin(4); 
    
} 
