#ifndef DOG_
#define DOG_

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog__
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
