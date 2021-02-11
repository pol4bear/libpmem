//
// Created by pol4bear on 2/10/21.
//

#include <iostream>
#include <map>
#include "../src/pmem.h"

#define CNT 50

using namespace std;
void map_test(int count) {
    map<int, int> my_map;

    for (int i = 1; i <= count; i++) {
        my_map.insert(make_pair(i, i));
        cout << "added [" << i << "] = " << i << endl;
    }
}

int main() {
    cout << "-------- Map Test --------\n";
    map_test(CNT);
}
