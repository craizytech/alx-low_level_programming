#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains information about a dog
 * @name: pointer to name
 * @age: age of the dog
 * @owner: name of the dogs owner
 *
 * Description: contains the description of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * struct dog dog_t - contains info about a dog using typedef
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog owner
 *
 * Description: defining a structure using typedef
 */
typedef struct
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
