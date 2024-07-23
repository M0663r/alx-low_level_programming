#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog {
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog.
 *
 * Description: This typedef allows us to use dog_t as a shorthand
 * for struct dog.
 */
typedef struct dog dog_t;

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to print
 */
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
