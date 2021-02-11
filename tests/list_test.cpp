//
// Created by pol4bear on 2/10/21.
//

#include <iostream>
#include <list>
#include "../src/pmem.h"

#define CNT 50

using namespace std;

void list_test(int count) {
    list<int> my_list;

    for (int i = 1; i <= count; i++) {
        my_list.push_back(i);
        cout << "added " << i << endl;
    }
}

int main() {
    cout << "-------- List Test --------\n";
    list_test(CNT);
}
