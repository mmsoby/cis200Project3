//
//  LRUCache.hpp
//  Project3
//
//  Created by Mustafa Soby on 11/29/20.
//

#ifndef LRUCache_hpp
#define LRUCache_hpp

#include <stdio.h>
#include "Cache.hpp"

class LRUCache: public Cache{
public:
    LRUCache(int sizeIn);
    void addItem(int item);
    int getIndexOfItem(int item);
    void print();
    //friend std::ostream& operator<<(std::ostream& fout, const LRUCache &printMe);
};

#endif /* LRUCache_hpp */
