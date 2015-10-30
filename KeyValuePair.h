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
