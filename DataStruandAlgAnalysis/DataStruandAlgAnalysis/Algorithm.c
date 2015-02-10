#include "Algorithm.h"

int MaxSubsequenceSum(const int A[],int N)
{
<<<<<<< HEAD
	int ThisSum,MaxSum,i,j,k;
	MaxSum = 0;
	for(i=0;i<=N;i++)
		for (j=i;j<=N;j++)
		{
			ThisSum = 0;
			for (k=i;k<=j;k++)
				ThisSum += A[k];
			if (ThisSum > MaxSum)
				MaxSum = ThisSum;
			
		}
		return MaxSum;
	
	
=======
	int ThisSum,MaxSum=0,i,j,k;
	for(i=0;i<=N;i++)
	{
		for (j=i;j<=N;j++)
		{
			ThisSum = 0;
			for (k=0;k<=j;k++)
			{
				ThisSum += A[k];
			}

			if (ThisSum > MaxSum) MaxSum = ThisSum;
			
		}
	}
	return MaxSum;
>>>>>>> 60ea3329c4ef62aee08fa3015d2fe9c0f5de0c0f
}
