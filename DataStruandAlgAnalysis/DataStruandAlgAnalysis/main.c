#include <stdio.h>
#include "Algorithm.h"
const int B[] ={-1,10,-4,6,-5,-2,18,5};
void main(void)
{ 
	int MaxSum=0;
	 MaxSum = MaxSubsequenceSum(B,8);
	 printf("%d\r\n",MaxSum);
}