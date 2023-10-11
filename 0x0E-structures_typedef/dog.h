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
 * dog_t - typedef fr the struct dog
 */
typedef struct dog dog_t;
#endif
