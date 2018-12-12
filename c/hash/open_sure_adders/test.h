#include<stdlib.h>
#include<assert.h>
#include<iostream>
#include<stdio.h>

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

void initHashtable(Hashtable& ht,int len);
void judgecapacity(Hashtable& ht);
void destroyHashtable(Hashtable& ht);
int findHashnode(Hashtable& ht,int key);
Hashtable& eraseHashnode(Hashtable& ht,int adders);
Hashtable& insertHashtable(Hashtable& ht,keytype key);



