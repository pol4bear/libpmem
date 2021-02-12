//
// Created by pol4bear on 2/10/21.
//

#include <iostream>
#include "../src/pmem.h"

#define CNT 50

using namespace std;

void malloc_test(int count) {
  void *addr = 0;
  for (int i = 0; i < count; i++) {
    addr = malloc(i);
    free(addr);
  }
}

int main() {
  PMemSetVerbose(true);
  cout << "-------- malloc test --------\n";
  malloc_test(CNT);
}
