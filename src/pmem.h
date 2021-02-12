//
// Created by pol4bear on 2/10/21.
//

#ifndef LIBPMEM_MEMORY_H
#define LIBPMEM_MEMORY_H

#include "pmem_function.h"

/**
 *  Memory allocation/deallocation macros
 */
#undef malloc
#define malloc(SIZE) PMemMalloc((SIZE), __FILE__, __LINE__)
#undef calloc
#define calloc(NMEMB, SIZE) PMemCalloc((NMEMB), (SIZE), __FILE__, __LINE__)
#undef realloc
#define realloc(PTR, SIZE) PMemRealloc((PTR), (SIZE), __FILE__, __LINE__)
#undef free
#define free(PTR) PMemFree((PTR), __FILE__, __LINE__)

#ifdef __cplusplus

/**
 *  CPP specific memory allocation/deallocation macros
 */
//#undef  new
#define new new(__FILE__, __LINE__)

#endif //__cplusplus

#endif //LIBPMEM_MEMORY_H
