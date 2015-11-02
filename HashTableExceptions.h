#include <iostream>
#include <exception>

using namespace std;

class HashTableNullLinkedListException: public exception
{
    virtual const char* what() const throw(){
	return "HashTableNullLinkedListException thrown";
    }

};

/*

class HashTable***Exception: public exception
{

    virtual const char* what() const throw(){
	return "HashTable***Exception thrown";	
    }

};

*/
