#include <iostream>
#include <string>
#include "HashTable.h"

using namespace std;

int main()
{
    cout << "HashTable main function" << endl;
    
    HashTable <int> test;

    test.insert("test1", 1);
    test.insert("test2", 2);
    test.insert("test3", 3);

    //test.retrieve("test1");
    //test.retrieve("test2");
    //test.retreive("test3");

    //test.remove("test1");
    //test.remove("test2");
    //test.remove("test3");

    return 0;

}
