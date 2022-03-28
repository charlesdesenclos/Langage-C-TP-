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
	int i = 0, j = strlen(ch) - 1;
	char tmp;

	while (i < j)
	{
		tmp = ch[i];
		ch[i] = ch[j];
		ch[j] = tmp;
		i++;
		j--;
	}
	return ch[i];
}



int main()
{


	char str[BUFFER_SIZE];


	printf(" Entrez une chaîne de caractere :  ");
	gets_s(str, BUFFER_SIZE);



	inverse(str);
	printf("La chaine inversee est : %s", str);

	return 0;
}