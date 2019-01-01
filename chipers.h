#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//function that compute the alphabet index of a given char
int getAlfaI(char c)
{
	char alfa[] = "abcdefghijklmnopqrstuvwxyz";
	for(int i = 0;i < 26;i++)
	{
		if(c == alfa[i])
			return i;
	}
}
//

//function that encrypt a given string with the Caesar' chiper 
char* toCaesar(char s[], int key)
{
	char alfa[] = "abcdefghijklmnopqrstuvwxyz";
	char* r = malloc(sizeof(char)*strlen(s));
	for(int i = 0;i < strlen(s);i++){
		char c = s[i];
		if(c != ' ')
		{
			int j = getAlfaI(c) + key;
			if (j < 0)
				j = strlen(alfa) - abs(j);
			else if(j > strlen(alfa))
				j = j - strlen(alfa);
				
			r[i] = alfa[j];
		}
		else
			r[i] = ' ';	
	}
	return r;
}
//

char* CaesarDecrypt(char s[], int key)
{
	char alfa[] = "abcdefghijklmnopqrstuvwxyz";
	char* r = malloc(sizeof(char)*strlen(s));
	
	for(int i = 0;i < strlen(s);i++){
		char c = s[i];
		if(c != ' ')
		{
			int j = getAlfaI(c)-key;
			if (j < 0)
				j = strlen(alfa) - abs(j);
			else if(j > strlen(alfa))
				j = j - strlen(alfa); 
				
			r[i] = alfa[j];
		}
		else
			r[i] = ' ';
	}	
	return r;
} 

