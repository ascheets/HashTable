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

    void insert(const string& k, const T& v);

 private:
    int hash(const string& k);
    
    SafeArray < LinkedList <KeyValuePair <T>* > > table;

};

//ctor
template <class T>
HashTable <T> :: HashTable() : table(101)
{


}

//dtor
template <class T>
HashTable <T> :: ~HashTable()
{


}

//insert
template <class T>
void HashTable <T> :: insert(const string& k, const T& v)
{
    //create a new KeyValuePair on the heap
    KeyValuePair <T>* p_kvp = new KeyValuePair <T> (k,v);

    //hash the key
    int index = hash(k);

    //insert into the table
    table[index].insert(p_kvp);

}

//hash
template <class T>
int HashTable <T> :: hash(const string& k)
{
    unsigned int hashVal = 0;
    int index;

    for(int i = 0; i < k.size(); i++){
		
	//find the hash value before mod
	hashVal = (hashVal + (int) k.at(i))*33;

    }

    //mod hash value by current size of table
    index = hashVal % table.size();

    return index;

}
