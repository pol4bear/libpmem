//
// Created by pol4bear on 2/12/21.
//

#include <cstdlib>
#include <cstddef>
#include "pmem_function.h"
#include "pmem_manager.h"

using namespace pol4b;

/**
 *  Control functions.
 */
bool PMemVerbose() {
  return PMemManager::Verbose();
}
void PMemSetVerbose(bool state) {
  PMemManager::SetVerbose(state);
}

FILE *PMemOutputFile() {
  return PMemManager::OutputFile();
}

void PMemSetOutputFile(FILE *new_output_file) {
  PMemManager::SetOutputFile(new_output_file);
}

/**
 *  Memory allocation/deallocation functions.
 */
void *PMemMalloc(size_t size, const char *file, const int line) {
  void *address = malloc(size);
  if (PMemVerbose())
    fprintf(PMemOutputFile(), "[pmem] malloc(%zu) → %p on %s:%d\n", size, address, file, line);
  return address;
}

void *PMemCalloc(size_t member_count, size_t size, const char *file, const int line) {
  void *address = calloc(member_count, size);
  if (PMemVerbose())
    fprintf(PMemOutputFile(), "[pmem] calloc(%zu, %zu) → %p on %s:%d\n", member_count, size, address, file, line);
  return address;
}

void *PMemRealloc(void *address, size_t new_size, const char *file, const int line) {
  void *new_address = realloc(address, new_size);
  if (PMemVerbose())
    fprintf(PMemOutputFile(), "[pmem] realloc(%p, %zu) → %p on %s:%d\n", address, new_size, new_address, file, line);
  return new_address;
}

void PMemFree(void *address, const char *file, const int line) {
  free(address);
  if (PMemVerbose())
    fprintf(PMemOutputFile(), "[pmem] free(%p) on %s:%d\n", address, file, line);
}

/**
 * Operator new overrides
 */
void *operator new(size_t size, const char *file, const int line) {
  void *address = malloc(size);
  if (PMemVerbose())
    fprintf(PMemOutputFile(), "[pmem] new(%zu) → %p on %s:%d\n", size, address, file, line);
  return address;
}

void *operator new[](size_t size, const char *file, const int line) {
  void *address = malloc(size);
  if (PMemVerbose())
    fprintf(PMemOutputFile(), "[pmem] new[](%zu) → %p on %s:%d\n", size, address, file, line);
  return address;
}

/**
 * Global new/delete overrides
 */
void *operator new(size_t size) {
  void *address = malloc(size);
  if (PMemVerbose())
    fprintf(PMemOutputFile(), "[pmem] new(%zu) → %p\n", size, address);
  return address;
}

void *operator new[](size_t size) {
  void *address = malloc(size);
  if (PMemVerbose())
    fprintf(PMemOutputFile(), "[pmem] new[](%zu) → %p\n", size, address);
  return address;
}

void operator delete(void *address) {
  if (PMemVerbose())
    fprintf(PMemOutputFile(), "[pmem] delete(%p)\n", address);
  free(address);
}

void operator delete[](void *address) {
  if (PMemVerbose())
    fprintf(PMemOutputFile(), "[pmem] delete[](%p)\n", address);
  free(address);
}
