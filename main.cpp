//
//  main.cpp
//  Project3
//
//  Created by Mustafa Soby on 11/29/20.
//

#include <iostream>
#include "LRUCache.hpp"
#include "LFUCache.hpp"

using namespace std;

int main(){
    
    Cache* myLFUCache=new LFUCache(10);
    
    myLFUCache->addItem(5);
    myLFUCache->addItem(4);
    myLFUCache->addItem(3);
    myLFUCache->addItem(2);
    myLFUCache->addItem(1);
    
    cout<<"Initial Result: ";
    myLFUCache->print();
    cout<<endl;
    
    myLFUCache->addItem(1);
    myLFUCache->addItem(2);
    myLFUCache->addItem(3);
    myLFUCache->addItem(4);
    myLFUCache->addItem(5);
    
    cout<<"Second Result: ";
    myLFUCache->print();
    cout<<endl;
    
    myLFUCache->addItem(9);
    myLFUCache->addItem(12);
    myLFUCache->addItem(72);
    myLFUCache->addItem(313);
    myLFUCache->addItem(40);
    myLFUCache->addItem(2520);
    
    cout<<"Third Result: ";
    myLFUCache->print();
    cout<<endl;
    
    myLFUCache->addItem(9);
    
    myLFUCache->addItem(12);
    cout<<"Fourth Result: ";
    myLFUCache->print();
    cout<<endl;
    
    myLFUCache->addItem(72);
    myLFUCache->addItem(313);
    myLFUCache->addItem(40);
    myLFUCache->addItem(2520);
    

    myLFUCache->addItem(9);
    myLFUCache->addItem(12);
    myLFUCache->addItem(72);
    myLFUCache->addItem(313);
    myLFUCache->addItem(40);
    myLFUCache->addItem(2520);
    
    cout<<"Final Result: ";
    myLFUCache->print();
    cout<<endl;

    return 0;
}

/*
int main(){
    
    Cache* myLRUCache=new LRUCache(10);
    
    myLRUCache->addItem(5);
    myLRUCache->addItem(4);
    myLRUCache->addItem(3);
    myLRUCache->addItem(2);
    myLRUCache->addItem(1);
    
    cout<<"Initial Result: ";
    myLRUCache->print();
    cout<<endl;
    
    myLRUCache->addItem(5);
    myLRUCache->addItem(4);
    myLRUCache->addItem(6);
    myLRUCache->addItem(7);
    myLRUCache->addItem(8);
    
    cout<<"Middle Result: ";
    myLRUCache->print();
    cout<<endl;
    
    myLRUCache->addItem(9);
    myLRUCache->addItem(12);
    myLRUCache->addItem(72);
    myLRUCache->addItem(313);
    myLRUCache->addItem(40);
    myLRUCache->addItem(2520);
    
    cout<<"Final Result: ";
    myLRUCache->print();
    cout<<endl;

    return 0;
}
*/


/*
 Old Original
 int main(){
     
     Cache* myLRUCache=new LRUCache(5);
     
     myLRUCache->addItem(5);
     myLRUCache->addItem(4);
     myLRUCache->addItem(3);
     myLRUCache->addItem(2);
     myLRUCache->addItem(1);
     
     cout<<"Before 6: ";
     myLRUCache->print();
     cout<<endl;
     
     myLRUCache->addItem(6);
     cout<<"After 6: ";
     myLRUCache->print();
     cout<<endl;
     
     myLRUCache->addItem(3);
     cout<<"After 3: ";
     myLRUCache->print();
     cout<<endl;
     
     return 0;
 }
 
 int main() {
 Cache* myLFUCache=new LFUCache(5);
 
 myLFUCache->addItem(5);
 myLFUCache->addItem(4);
 myLFUCache->addItem(3);
 myLFUCache->addItem(2);
 myLFUCache->addItem(1);
 
 cout<<"Before 6: ";
 myLFUCache->print();
 cout<<endl;
 
 myLFUCache->addItem(6);
 cout<<"After 6: ";
 myLFUCache->print();
 cout<<endl;
 
 myLFUCache->addItem(3);
 cout<<"After 3: ";
 myLFUCache->print();
 cout<<endl;
 
 
 return 0;
 }
 
 */
