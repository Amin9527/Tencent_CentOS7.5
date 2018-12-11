#include"test.h"

using namespace std;
void initHashtable(Hashtable* ht,int len)
{
    assert(ht);
    assert(len>0);
    ht->table=new Hashnode[(sizeof(Hashnode)*len)];
    ht->size=0;
    ht->len=len;

    for(int i=0;i<len;++i)
        ht->table[i]._state=EMPTY;
}

void destroyHashtable(Hashtable* ht)
{
    assert(ht);
    delete ht->table;
    ht->table=nullptr;
    ht->size=ht->len=0;
    ht=nullptr;
}

void judgecapacity(Hashtable* ht)
{
    assert(ht);
    if((ht->size*10)/ht->len>=7)
    {
       int len=2*ht->len;
       Hashtable newhash;
       initHashtable(&newhash,len);
       for(int i=0;i<ht->len;++i)
       {
           if(ht->table[i]._state==EXIST)
               insertHashtable(&newhash,ht->table[i].key);
       }
       //delete ht->table;
       //ht=&newhash;
       destroyHashtable(ht);
       ht->table=newhash.table;
       ht->len=newhash.len;
       ht->size=newhash.size;
    }
}

int sureadders(int len,int key)
{
    int adders=key%len;
    return adders;
}

Hashtable* insertHashtable(Hashtable* ht,keytype key)
{
    assert(ht);
    assert(key>=0);
    judgecapacity(ht);
    int adders=sureadders(ht->len,key);
    while(ht->table[adders]._state==EXIST)
    {
        if(ht->table[adders].key==key)
            return ht;
        adders++;
        adders%=ht->len;
    }
    ht->table[adders].key=key;
    ht->table[adders]._state=EXIST;
    ht->size++;
    return ht;
}

Hashtable* eraseHashnode(Hashtable* ht,int adders)
{
    ht->table[adders]._state=DELETE;
    return ht;
}

int findHashnode(Hashtable* ht,keytype key)
{
    assert(ht);
    assert(key>=0);
    int adders=sureadders(ht->len,key);
    while(ht->table[adders]._state!=EMPTY)
    {
        if(ht->table[adders]._state==EXIST)
        {
            if(ht->table[adders].key==key)
                return adders;
            else
            {
                adders++;
                adders%=ht->len;
            }

        }
        else
        {
            adders++;
            adders%=ht->len;
        }
    }
        return -1;
}

void printHashtable(Hashtable ht)
{
    for(int i=0;i<ht.len;++i)
    {
        if(ht.table[i]._state==EXIST)
            cout<<ht.table[i].key<<" ";
        else
            cout<<"["<<i<<"]";
    }
    cout<<endl;
}

void test(Hashtable* ht)
{
    initHashtable(ht,7);
}


int main()
{
    Hashtable ht;
    test(&ht);
    insertHashtable(&ht,97);
    insertHashtable(&ht,3);
    insertHashtable(&ht,67);
    insertHashtable(&ht,0);
    insertHashtable(&ht,23);
    insertHashtable(&ht,17);
    insertHashtable(&ht,35);
    insertHashtable(&ht,12);
    printHashtable(ht);
    int adders=findHashnode(&ht,97);
    cout<<"97's adders is :"<<adders<<endl;
    eraseHashnode(&ht,adders);
    printHashtable(ht);
    adders=findHashnode(&ht,96);
    cout<<"96's adders is :"<<adders<<endl;
    printHashtable(ht);
    return 0;
}
