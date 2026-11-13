#include <stdio.h>
#include <string.h>

struct Car {

	char seats[20];
	char engine[20];
	char radio[20];


};


void Car_initialization(struct Car * this, char * seats, char * engine, char * radio) 
{
	strcpy(this->seats, seats);
}

// Reference: https://chatgpt.com/g/g-p-6a268316643c81919b394de140525c09-c-to-c-translation/c/6af56e40-084c-83ee-9d5e-c1650312afb6
