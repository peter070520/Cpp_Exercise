#ifndef CACHE_H
#define CACHE_H

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <assert.h>
#include <string>
#include <climits>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <functional>
#include <algorithm>
#include <utility>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include "main.h"

using namespace std;

class Cache {
        Elem** arr;
        int p;
    public:
    Cache(int s) {
        arr = new Elem*[s];
        p = 0;

    }
    ~Cache() {
        delete[] arr;
    }
        Data* read(int addr);
        Elem* put(int addr, Data* cont);
        Elem* write(int addr, Data* cont);
        void print();
        void preOrder();
        void inOrder();
};

#endif

