#include <stdio.h>
#include "Algorithm.h"
const int A[] ={10,-1,-3,5,7};
void main(void)
{ 
	int MaxSum;
	 MaxSum = MaxSubsequenceSum(A,5);
	 printf("%d\r\n",MaxSum);
}