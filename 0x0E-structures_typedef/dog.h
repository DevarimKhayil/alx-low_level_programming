#ifndef DOG_H
#define DOG_H
/**
  * struct dog - structure of dog
  * @name: name off dog
  * @age: age
  * @owner: owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
