#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 23;
	int j = 24;
	int count = 3;
	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count; ++j)
		{
			printf("%d, %d \n", i, j);
		}
	}
	printf("Finally, i = %d, j = %d\n", i, j);
	return 0;
}