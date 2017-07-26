#include "user.h"


#define HASHMAP_LEN 256

typedef user_t * hashmap[HASHMAP_LEN];

hashmap init_hashmap();

uint8_t hash(user_t user);

int in_hashmap(hashmap map, user_t user);

void add(hashmap map, user_t user);

void remove(hashmap map, user_t user);

user_t * get(hashmap map, uint8_t hash);
