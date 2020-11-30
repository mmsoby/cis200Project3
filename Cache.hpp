//
//  Cache.hpp
//  Project3
//
//  Created by Mustafa Soby on 11/29/20.
//

#ifndef Cache_hpp
#define Cache_hpp

#include <stdio.h>
#include <ostream>
#include <iostream>

class Cache{
protected:
    int size;
    int numItem;
    int* dataCache;
    
    void setSize(int someSize);
public:
    virtual void addItem(int item)=0;
    virtual int getIndexOfItem(int item)=0;
    virtual void print()=0;
    int getItemAtFront();
};

#endif /* Cache_hpp */
