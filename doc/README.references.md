# Control Functions

- ```c++
  bool PMemVerbose();
  ```

  Get current verbose state. Default ```false```

- ```c++
  void PMemSetVerbose(bool new_state);
  ```

  Change verbose state to ```new_state```.

- ```c++
  FILE *PMemOutputFile();
  ```

  Get current output file. Default ```stdout```.

- ```c++
  void PMemSetOutputFile(FILE *new_output_file);
  ```

  Change output file to ```new_output_file```

# Memory allocation/deallocation override functions

- ```c++
  void *PMemMalloc(size_t size, const char *file, const int line);
  ```

  Overrides ```malloc```. Print file and line that called ```malloc``` function.

- ```c++
  void *PMemCalloc(size_t member_count, size_t size, const char *file, const int line);
  ```

  Overrides ```calloc```. Print file and line that called ```calloc``` function.

- ```c++
  void *PMemRealloc(void *address, size_t new_size, const char *file, const int line);
  ```

  Overrides ```realloc```. Print file and line that called ```realloc``` function.

- ```c++
  void PMemFree(void *adress, const char *file, const int line);
  ```

  Overrides ```free```. Print file and line that called ```free``` function.

# Operator new overrides

- ```c++
  void *operator new(size_t size, const char *file, const int line) throw();
  ```

  Overrides ```new``` operator. Print file and line that called ```new``` operator.

- ```c++
  void *operator new[](size_t size, const char *file, const int line) throw();
  ```

  Overrides ```new[]``` operator. Print file and line that called ```new[]``` operator.