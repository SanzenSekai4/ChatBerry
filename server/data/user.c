#include <stdlib.h>

user_t * init_user(uint32_t ip, char * name, char * pass, uint8_t red, uint8_t green, uint8_t blue) {
  user_t * user = malloc(sizeof(struct user_s));
  user->(ip.entier) = ip;
  user->name = name;
  user->pass = pass;
  (user->rgb)[0] = red;
  (user->rgb)[0] = green;
  (user->rgb)[0] = blue;
  return user;
}


void delete_user(user_t * user) {
  free(user);
  user = NULL;
}
