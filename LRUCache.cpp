//
//  LRUCache.cpp
//  Project3
//
//  Created by Mustafa Soby on 11/29/20.
//

#include "LRUCache.hpp"

LRUCache::LRUCache(int sizeIn){
    setSize(sizeIn);
    dataCache=new int[sizeIn];
}

void LRUCache::addItem(int item){
    //If its already in the cache
    int loco=getIndexOfItem(item);
    if(loco!=-1){
        for(int i=loco;i>0;--i){
            dataCache[i]=dataCache[i-1];
        }
        dataCache[0]=item;
        
        
    }
    else{
        //If it doesn't exist in the cache:
        //If the array is or is not full
        //Scoot and insert
        for(int i=numItem;i>0;--i){
            dataCache[i]=dataCache[i-1];
        }
        dataCache[0]=item;
        numItem++;
    }
    
    if(numItem>=size){
        numItem=size;
    }
}

int LRUCache::getIndexOfItem(int item){
    for(int i=0;i<numItem;++i){
        if(item==dataCache[i]){
            return i;
        }
    }
    return -1;
}


void LRUCache::print(){
    for(int i=0;i<numItem;++i){
        std::cout<<dataCache[i]<<" ";
    }
}

LRUCache::~LRUCache(){
    delete[] dataCache;
}
