 
#include <stdio.h>
int main()
{
    // Array declaration and initialization
    int arr[3][5] = {{5, 12, 17, 9, 3}, {13, 4, 8, 14, 1}, {9, 6, 3, 7, 21}};
    int i,j;
	// Iterate over the array
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            // Print out each element
            printf("%5d", arr[i][j]);
        }
        // Print new line character after the row is printed in above loop
        printf("\n");
    }
    return 0;
}
