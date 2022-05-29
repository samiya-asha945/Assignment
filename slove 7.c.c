#include <stdio.h>
#include <math.h>

int main()
{
	printf("Prime Numbers from 1 To 300 are:\n2 ");
	for (int num = 3; num <= 200; num += 2)
	{
		int flag = 1;
		for (int i = 3; i <= sqrt(num); i += 2)
		{
			if (num % i == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag) printf("%d \n", num);
	}
	return 0;
}
