#pragma once
#include <iostream>
#include <string>

using namespace std;

template <class T>
class KeyValuePair
{
 public:
    KeyValuePair(string k, T v);
    ~KeyValuePair();

    bool operator == (KeyValuePair* otherKVP);

    string primary();

    string getKey();
    T getValue();

 private:
    //string acting as key
    string key;
    //T type value
    T value;    

};

//ctor
template <class T>
KeyValuePair <T> :: KeyValuePair(string k, T v)
{
    key = k;
    value = v;
}

//dtor
template <class T>
KeyValuePair <T> :: ~KeyValuePair()
{


}

//operator ==
template <class T>
bool KeyValuePair <T> :: operator == (KeyValuePair* otherKVP)
{
    bool retVal = false;

    if(otherKVP.getKey() == getKey()){
	retVal = true;
    }

    return retVal;
       
}

//getKey
template <class T>
string KeyValuePair <T> :: getKey()
{
    return key;
} 

//getValue
template <class T>
T KeyValuePair <T> :: getValue()
{
    return value;
}

//primary
template <class T>
string KeyValuePair <T> :: primary()
{
    return key;
}
