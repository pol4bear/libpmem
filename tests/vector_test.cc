//
// Created by pol4bear on 2/10/21.
//

#include <iostream>
#include <vector>
#include "../src/pmem.h"

#define CNT 50

using namespace std;

void vector_test(int count) {
  vector<int> my_vector;

  for (int i = 1; i <= count; i++) {
    my_vector.push_back(i);
    cout << "added " << i << endl;
  }
}

int main() {
  PMemSetVerbose(true);
  cout << "-------- Vector Test --------\n";
  vector_test(CNT);
}
