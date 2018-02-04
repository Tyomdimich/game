
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char name[100] = {};

	int max_x = 40;
	int max_y = 120;
	int x = 0;
	int y = 0;

	printf("Vvedite naswanie chasti karti (example.txt) \n");
	scanf("%s", &name);

	FILE *map = fopen(name, "w");

	fprintf(map, "null\nnull\nnull\nnull\n");

	while(x != max_x)
	{
		y = 0;		

		while(y != max_y)
		{
			fprintf(map, ".");
			y++;
		}

		fprintf(map, "\n");
		x++;
	}

	fclose(map);

	return 0;
}
