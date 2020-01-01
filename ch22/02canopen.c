#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	FILE *fp;
	int i;
	for(i=1; i<argc; i++)
	{
		if ((fp = fopen(argv[i], "r")) == NULL)
		{
			printf("This file: %s cannot be open", argv[i]);
			continue;
		}
		fclose(fp);
	}
	return 0;
}
