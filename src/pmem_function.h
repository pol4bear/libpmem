//
// Created by pol4bear on 2/12/21.
//

#ifndef LIBPMEM_PMEM_FUNC_H
#define LIBPMEM_PMEM_FUNC_H

#include <cstdbool>
#include <cstdio>
#include <cstddef>

#ifdef __cplusplus

extern "C" {

#endif //__cplusplus

/**
 *  Control functions
 */
bool PMemVerbose();
void PMemSetVerbose(bool new_state);
FILE *PMemOutputFile();
void PMemSetOutputFile(FILE *new_output_file);

/**
 *  Memory allocation/deallocation functions.
 */
void *PMemMalloc(size_t size, const char *file, const int line);
void *PMemCalloc(size_t member_count, size_t size, const char *file, const int line);
void *PMemRealloc(void *address, size_t new_size, const char *file, const int line);
void PMemFree(void *adress, const char *file, const int line);

#ifdef __cplusplus

};

#include <new>

/**
 * Operator new overrides
 */
#include <new> // bad_alloc
void *operator new(size_t size, const char *file, const int line);
void *operator new[](size_t size, const char *file, const int line);

#endif

#endif //LIBPMEM_PMEM_FUNC_H
