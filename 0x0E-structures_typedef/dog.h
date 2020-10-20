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
#endif
