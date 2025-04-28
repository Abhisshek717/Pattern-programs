/*
Input: 5

Output:
    *
   ***
  *****
 *******
*********

*/
#include <stdio.h>

int main() {
    
    int n = 5;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = n-i-1 ; j > 0; j--)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            printf("*");
        }
        for(int l=0;l<i;l++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
