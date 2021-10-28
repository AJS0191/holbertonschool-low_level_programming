#ifndef DOG_H
#define DOG_H
/**
 * struct dog - holds info on dogs
 * @name: * to name
 * @age: float age
 * @owner: * to owner name
 *
 * Description: holds three sets of info for each dog created
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


#endif /* DOG_H */
