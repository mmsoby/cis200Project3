//
//  LFUCache.cpp
//  Project3
//
//  Created by Mustafa Soby on 11/29/20.
//

#include "LFUCache.hpp"

LFUCache::LFUCache(int sizeIn){
    setSize(sizeIn);
    dataCache=new int[sizeIn];
    frequency=new int[sizeIn];
    
    for(int i=0;i<sizeIn;++i){
        frequency[i]=0;
    }
    
}

//How are we meant to keep track of frequency given the current
//member variables?
void LFUCache::addItem(int item){
    int loco=getIndexOfItem(item);
    //If it is already in the array
    if(loco!=-1){
        frequency[loco]++;
        //reorder(loco);
    }
    
    //If its not in the array
    else{
        if(numItem>=size){
            //Find lowest frequency item
            int minIndex=frequency[0];
            for(int i=0;i<numItem;++i){
                if(frequency[i]<frequency[minIndex]){
                    minIndex=i;
                }
            }
            
            //Delete and scoot items
            for(int i=minIndex;i>0;--i){
                dataCache[i]=dataCache[i-1];
            }
            dataCache[0]=item;
            
            //Delete and scoot frequencies
            for(int i=minIndex;i>0;--i){
                frequency[i]=frequency[i-1];
            }
            frequency[0]=1;
        }
        else{
            //Scoot items
            for(int i=numItem;i>0;--i){
                dataCache[i]=dataCache[i-1];
            }
            
            
            //Scoot frequencies
            for(int i=numItem;i>0;--i){
                frequency[i]=frequency[i-1];
            }
            //Enter new Data Point
            dataCache[0]=item;
            frequency[0]=1;
            
            numItem++;
        }
    }
    
    
    
}

int LFUCache::getIndexOfItem(int item){
    for(int i=0;i<numItem;++i){
        if(item==dataCache[i]){
            return i;
        }
    }
    return -1;
}

/*
 void LFUCache::reorder(int index){
 int newIndex=-1;
 for(int i=0;i<index;++i){
 if(frequency[index]>frequency[i] && i!=index){
 //swap
 int temp=frequency[i];
 frequency[i]=frequency[index];
 frequency[index]=temp;
 //Kepp track of swap location
 newIndex=i;
 }
 }
 
 if(newIndex!=-1){
 //Swap actual elements
 int temp=dataCache[newIndex];
 dataCache[newIndex]=dataCache[index];
 dataCache[index]=temp;
 }
 
 }
 */
/*
 std::ostream& operator<<(std::ostream& fout, const LFUCache &printMe){
 fout<<"Data "<<"|"<<" Frequency"<<std::endl;
 for(int i=0;i<printMe.numItem;++i){
 fout<<printMe.dataCache[i]<<" | "<<printMe.frequency[i]<<std::endl;;
 }
 return fout;
 }
 */

void LFUCache::print(){
    std::cout<<"(Data "<<"|"<<" Frequency)"<<std::endl;
    for(int i=0;i<numItem;++i){
        std::cout<<dataCache[i]<<" | "<<frequency[i]<<std::endl;;
    }
}
