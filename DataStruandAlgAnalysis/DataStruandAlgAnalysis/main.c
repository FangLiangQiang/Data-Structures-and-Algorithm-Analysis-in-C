#include <stdio.h>
#include "Algorithm.h"
<<<<<<< HEAD
const int B[] ={-1,10,-4,6,-5,-2,18,5};
void main(void)
{ 
	int MaxSum=0;
	 MaxSum = MaxSubsequenceSum(B,8);
=======
const int B[] ={9,-1,-3,5,7,-9,6};
void main(void)
{ 
	int MaxSum=0;
	 MaxSum = MaxSubsequenceSum(B,7);
>>>>>>> 60ea3329c4ef62aee08fa3015d2fe9c0f5de0c0f
	 printf("%d\r\n",MaxSum);
}