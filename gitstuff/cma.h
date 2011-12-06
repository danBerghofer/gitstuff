#include <stdio.h>

typedef struct MemNode *MNode;

struct MemNode {
	MNode next;
	int size;
};

#define PTRTOMNODE(x) ((MNode)(x-sizeof(struct MemNode)))


void *class_calloc(size_t nmemb, size_t size);
void *class_malloc(size_t size);
void class_free(void *ptr);
void *class_realloc(void *ptr, size_t size);
int class_memory(void *mem, size_t size);

void class_stats();

#define FALSE 0
#define TRUE 1
