#ifndef FILE_DOG
#define FILE_DOG

/**
  * struct dog - define a struct of dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner's identity
  * Return: Always 0.
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif

