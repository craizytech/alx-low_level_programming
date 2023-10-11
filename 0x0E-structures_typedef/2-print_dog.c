#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "nil");
		if ((d->age) > 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: nil\n");
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "nil");
	}
}
