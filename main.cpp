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
    HashTable <int> test2;

    cout << test->isEmpty() << endl;

    test->insert("test1", 1);
    //test->insert("test1", 2);
    //test->insert("test1", 3);
    test->insert("Test2", 2);
    test->insert("Best3", 3);

    test2.insert("testing1", 1);
    test2.insert("testing2", 2);
    test2.insert("testing3", 3);

    int test1 = (*test)["test1"];
    cout << "test1 : " << test1 << endl;
    int testing2 = test2["testing2"];
    cout << "test2 : " << testing2 << endl;
    int test3 = test->retrieve("Best3");
    cout << "test3 : " << test3 << endl;

    cout << test->isEmpty() << endl;

    test->remove("test1");
    test->print();

    //test getKeys, getValues
    testGetters(test);

    //test find()
    testFind(test);

    //test->remove("test2");
    //test->remove("test3");

    test->printCollisionInfo();

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

    cout << "Printing getKeys() result" << endl;
    keys.print();
    cout << "Printing getValues() result" << endl;
    values.print();


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
