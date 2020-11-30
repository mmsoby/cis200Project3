
//
//  LFUCache.cpp
//  Project3
//
//  Created by Mustafa Soby on 11/29/20.
//

#include "Cache.hpp"

void Cache::setSize(int someSize){
    dataCache=new int[someSize];
    size=someSize;
    numItem=0;
}

int Cache::getItemAtFront(){
    return dataCache[0];
}
