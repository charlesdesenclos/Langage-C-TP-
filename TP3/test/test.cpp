#define gets
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>
#include <string.h>

char chaine[100] = "";
scanf("%s", chaine);

int search(char *s, char carac)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == carac)
			return i;
	return 0;
}

int main(void)
{
	char *s = "abcdefghijklmnopqrstuvwxyz";
	char c = 'k';
	int pos = search(s, c);

	printf("caractere %c à la position %d, \ndans la chaine %s", c, pos, s);
	return 0;
}