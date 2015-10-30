#pragma once
#include <iostream>
#include "KeyValuePair.h"
#include "HashTableExceptions.h"
#include "LinkedList/LinkedList.h"
#include "SafeArray/SafeArray.h"

using namespace std;

template <class T>
class HashTable
{
 public:
    HashTable();
    ~HashTable();

 private:

    SafeArray < LinkedList <KeyValuePair <T> > > table;

};

//ctor
template <class T>
HashTable <T> :: HashTable()
{


}

//dtor
template <class T>
HashTable <T> :: ~HashTable()
{


}
