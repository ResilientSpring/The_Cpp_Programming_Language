#include <stdio.h>
#include <string>

class Car {

	char seats[100];
	char engine[100];
	char radio[100];

public:

	Car(char seats[100], char engine[100], char radio[100]) {

		strcpy(seats, seats);

	}

};

// Reference: https://chatgpt.com/g/g-p-6a268316643c81919b394de140525c09-c-to-c-translation/c/6af56e40-084c-83ee-9d5e-c1650312afb6