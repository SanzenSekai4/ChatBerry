#include <stdlib.h>
#include <stdio.h>

#include "file.h"

file_t *file_init()
{
	file_t *file;
	file = malloc(sizeof(*file));
	memset(file, 0, sizeof(*file));
	return file;
}

void file_add(file_t *file, void *data)
{
	file_t *node;
	node = malloc(sizeof(*node));
	node->data = data;
	node->next = NULL;
	file->next = node;
}

void *file_pop(file_t *file)
{
	void *data = file->data;
	file_t *tmp = file;

	if (file == NULL)
			return;

	file = file->next;
	free(tmp);

	return data;
}

void list_print(const list_t list)
{
	LIST_FOREACH(list, node)
		printf("%s ", node->data);
}
