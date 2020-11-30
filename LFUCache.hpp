//
//  LFUCache.hpp
//  Project3
//
//  Created by Mustafa Soby on 11/29/20.
//

#ifndef LFUCache_hpp
#define LFUCache_hpp

#include <stdio.h>
#include "Cache.hpp"

class LFUCache: public Cache{
public:
    LFUCache(int sizeIn);
    void addItem(int item);
    int getIndexOfItem(int item);
    void print();
    ~LFUCache();
private:
    int *frequency;
};

#endif /* LFUCache_hpp */


//MAKE DESTRUCTOR
