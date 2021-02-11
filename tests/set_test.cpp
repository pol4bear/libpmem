//
// Created by pol4bear on 2/10/21.
//

#include <iostream>
#include <set>
#include "../src/pmem.h"

#define CNT 50

using namespace std;

void set_test(int count) {
    set<int> my_set;

    for (int i = 1; i <= count; i++) {
        my_set.insert(i);
        cout << "added " << i << endl;
    }
}

int main() {
    cout << "-------- Set Test --------\n";
    set_test(CNT);
}
