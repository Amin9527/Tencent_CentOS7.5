#include<stdlib.h>
#include<assert.h>
#include<iostream>

using namespace std;

typedef int keytype;

enum State
{
    EXIST,
    EMPTY,
    DELETE,
};

typedef struct Hashnode
{
    State _state;
    keytype key;

}Hashnode;

typedef struct Hashtable
{
    Hashnode* table;
    int size;
    int len;
}Hashtable;

void initHashtable(Hashtable* ht,int len);
