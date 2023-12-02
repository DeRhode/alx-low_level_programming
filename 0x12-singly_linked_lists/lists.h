#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
	struct list_s {
		char *str;
		size_t length;
		struct list_s *next;
	};
typedef struct list_s list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
#endif /* LISTS_H */
