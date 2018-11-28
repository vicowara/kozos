#ifndef MEMORY_H_
#define MEMORY_H_

int kzmem_init(void);
void *kzmem_alloc(int size);
void kzmem_free(void *mem);

#endif // MEMORY_H_
