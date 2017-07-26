typedef struct file_s {
	void          *data;
	struct file_s *next;
} file_t;

file_t *file_init();

void file_add(file_t *file, void *data);

void file_pop(file_t *file);

void file_print(const file_t file);

#define FILE_FOREACH(file, node)                                        \
	for (node_t *node = (file).start; node != NULL; node = node->next)
