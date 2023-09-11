#include "dog.h"
#include <stddef.h>
/**
 *  * init_dog -  variable of type struct
 *   * @d: Point to the struct
 *    * @age: Age dog
 *     * @owner: Owner
 *      * Description: structure to store
 *       */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
