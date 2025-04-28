/*

Input: 5

Output:
1
12
123
1234
12345

*/
#include <stdio.h>

int main() {
    
    int rows = 5;
    int count = 0;
    for(int i = 0; i < rows; i++)
    {
        count = 1;
        for(int j = 0; j <= i; j++)
        {
            printf("%d",count);
            count++;
        }
        printf("\n");
    }

    return 0;
}
