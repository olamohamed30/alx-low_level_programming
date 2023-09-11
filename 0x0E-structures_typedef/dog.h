#ifndef DOG_H
#define DOG_H

/**
 *  * struct dog - Structure for a dog info
 *   * @name: Name
 *    * @age: Age dog
 *     * @owner: Owner
 *      * Description: structure to store
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
