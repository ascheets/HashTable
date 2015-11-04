#include <iostream>
#include <string>
#include "HashTable.h"

using namespace std;

void testGetters(HashTable <int>* test);
void testFind(HashTable <int>* test);

int main()
{
    cout << "HashTable main function" << endl;
    
    HashTable <int> * test = new HashTable <int>;

    test->insert("test1", 1);
    test->insert("test1", 2);
    test->insert("test1", 3);
    test->insert("test2", 2);
    test->insert("test3", 3);

    test->retrieve("test1");
    //test->retrieve("test2");
    //test->retreive("test3");

    test->remove("test1");
    test->print();

    //test getKeys, getValues
    testGetters(test);

    //test find()
    testFind(test);

    //test->remove("test2");
    //test->remove("test3");

    delete test;

    test = new HashTable <int>;

    return 0;

}

void testGetters(HashTable <int>* test)
{
    SafeArray <string> keys;
    SafeArray <int> values;

    //getKeys
    test->getKeys(keys);
    //getValues
    test->getValues(values);
    
    keys.print();
    //values.print();


}

void testFind(HashTable <int>* test)
{

    test->insert("hello", 2);
    test->insert("brave", 3);
    test->insert("new", 32);
    test->insert("world", 3343);

    if(!(test->find("hello") ||
	 test->find("brave") ||
	 test->find("new") ||
	 test->find("world"))){

	cout << "Problems with find function" << endl;
    }

}
