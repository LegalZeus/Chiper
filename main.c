#include <stdio.h>
#include <stdlib.h>
#include "chipers.h"


int main(void)
{
	while (1)
	{
		int c;
		printf("cosa vuoi fare : \n1-criptare un testo\n2-decriptare un testo\n3-uscire\n>>>");
		scanf("%d", &c);
		

		if(c == 1)
		{
			char s[200];
			int key;
			printf("inserire un testo : ");
			scanf("%s", s);
			printf("inserire una chiave : ");
			scanf("%d", &key);
			system("clear");
			printf("risultato : %s\n\n", toCaesar(s, key));
		}
		else if(c == 2)
		{
		  char s[200];
			int key;
			printf("inserire un testo : ");
			scanf("%s", s);
			printf("inserire una chiave : ");
			scanf("%d", &key);
			system("clear");
			printf("risultato : %s\n\n", CaesarDecrypt(s, key));
		}
		else if(c == 3)
		{
			system("clear");
			return 0;
		}

	}
}
