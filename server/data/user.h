#include <stdint.h>

#define NAME_LEN 20
#define PASS_LEN 20

union ip {
    uint32_t entier;
    uint8_t table[4];
};

typedef union ip ip_t;

struct user_s {
  ip_t ip;
  char name[NAME_LEN];
  char pass[PASS_LEN];
  uint8_t rgb[3];
};

typedef struct user_s user_t;

static inline ip_t get_ip(user_t user) {
  return user.ip;
}

static inline char * get_name(user_t user) {
  return user.name;
}

static inline char * get_pass(user_t user) {
  return user.pass;
}

static inline uint8_t * get_rgb(user_t user) {
  return user.rgb;
}

user_t * init_user(uint32_t ip, char * name, char * pass, uint8_t red, uint8_t green, uint8_t blue);

void delete_user(user_t * user);

