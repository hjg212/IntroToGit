#include <stdio.h>
int main()
{
    int n1, n2, Sum;
    
    printf("Enter two integers:");

    // two integers entered by user are stored using scanf()
    scanf("%d %d", &n1, &n2);

    // store sum in variable Sum
    Sum = n1 + n2;
	
	// check which integer is larger
	// and print result to screen
	if (n1>=n2)
		printf("\nIncreasing order: %d , %d\n\n", n2, n1);
	else
		printf("\nIncreasing order: %d , %d\n\n", n1, n2);

    // display output     
    printf("%d + %d = %d\n\n", n1, n2, Sum);

    // check if the sum is even or odd, 
    // and print result to screen
    if(Sum % 2 == 0) printf("%d is even\n\n", Sum);
    else printf("%d is odd\n\n", Sum);

    return 0;
}