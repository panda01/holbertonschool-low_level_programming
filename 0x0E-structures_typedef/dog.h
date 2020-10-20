#ifndef FOO
#define FOO
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

int strlength(char *str);
char *strcopy(char *str);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
