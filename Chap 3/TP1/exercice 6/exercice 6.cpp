#define _CRT_SECURE_NO_WARNINGS
#define gets
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>

#define BUFFER_SIZE 1024


char inverse(char *ch)
{
	int i;
	for (i = strlen(ch) - 1; i >= 0; i--)
	{
		printf("%c", ch[i]);
	}
	return ch[i];
}



int main()
{


	char str[BUFFER_SIZE];


	printf(" Entrez une chaîne de caractere :  ");
	gets_s(str, BUFFER_SIZE);




	printf("La chaine inversée est : %s", inverse(str));

	return 0;
}