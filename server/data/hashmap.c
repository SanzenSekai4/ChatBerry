#include "hashmap.h"
#include "user.h"
#include <stdint.h>

hashmap init_hashmap() {
  hashmap map;
  for (uint8_t i = 0 ; i < HASHMAP_LEN ; i++) {
    map[i] = NULL;
  }
  return map;
}

uint8_t hash(user_t user) {
  return (user.ip)[3];
}

int in_hashmap(hashmap map, user_t user) {
  return map[hash(user)] != NULL;
}

void add(hashmap map, user_t user) {
  if (!in_hashmap(map, user))
    map[hash(user)] = &user;
}

void remove(hashmap map, user_t user) {
  user_t * hash_user = map[hash(user)];
  if (hash_user == NULL)
    return;
  map[hash(user)] = NULL;
  delete_user(&hash_user);
}

user_t * get(hashmap map, uint_8 hash) {
  return map[hash];
}
