/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long factorial(int n)
{
  int c;
  long result = 1;
 
  for (c = 1; c < n + 1; c++)
    result = result*c;
 
  return result;
}
void Ex1(int n){

	 int i, c;
 
  for (i = 0; i <= n; i++)
  {
    for (c = 0; c <= (n - 2); c++)
	{
        printf("");
	}
    for (c = 0 ; c <= i; c++)
	{
        printf("%ld ",factorial(i)/(factorial(c)*factorial(i-c)));
	}
    printf("\n");
  }
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}
