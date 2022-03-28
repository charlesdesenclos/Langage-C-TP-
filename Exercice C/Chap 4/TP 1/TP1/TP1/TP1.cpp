#define _CRT_SECURE_NO_WARNINGS
#define gets
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>
#include <math.h>

//Exercice 1

float adr(float *adr1, float *adr2)
{

	printf("adr1 %p \n", adr1);
	printf("adr2 %p \n", adr2);
	printf("adr1 %f \n", *adr1);
	printf("adr2 %f \n", *adr2);
	
	free(adr1);// libère la mémoire
	free(adr2);
	return *adr1, *adr2;
}

int main()
{
	//Exercice 1
	
	float *adr1, *adr2;

	adr1 = (float*)malloc(sizeof(float)); // alloue la mémoire grâce à malloc
	adr2 = (float*)malloc(sizeof(float));

	*adr1 = -45.78;
	*adr2 = 678.89;
	
	
	adr(adr1,adr2);
	printf("\n");

}	