#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ADRES(i) i ##.txt

int main ()
{
	int i, j, k;
	
	char* adres_inv = (char*)malloc(100*sizeof(char));
	//char* char_i = (char*)malloc(5*sizeof(char));
	char* adres_i = (char*)malloc(100*sizeof(char));
	
	adres_inv = ("inv_");	///home/artyom/bigquest/tyomdimich/inventory/
	
	//ПРОПИСАТЬ 10 ПАПОК inv_x ДЛЯ ИНВЕНТАРЯ В ОДНОЙ ОСНОВНОЙ inventory !!!
	
	printf("cikl zapuschen1\n");
	for (i = 1; i<10; i++)
	{	
		for (j = 0; j <10; j++)
		{			
			for (k = 0; k <10; k++)
				{
					sprintf(adres_i, "%s%d%s%d%d%d%s", adres_inv, i, "/inv_", i, j, k, ".txt");
					FILE* fp = fopen(adres_i, "w");
					printf("%s\n", adres_i);
					
					fprintf(fp, "%d%d%d\nname=item%d%d%d\n", i, j, k, i, j, k);
					fprintf(fp, "сategory=cat%d\n",  i);
					
					
					fclose(fp);
				}
		}
	}
	
}