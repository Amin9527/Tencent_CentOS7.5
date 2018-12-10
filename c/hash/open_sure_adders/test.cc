#include"test.h"

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

void test(Hashtable* ht)
{
    initHashtable(ht,7);
    cout<<ht->len<<" "<<ht->table[1]._state<<endl<<ht->table[6]._state<<endl;
}


int main()
{
    Hashtable ht;
    test(&ht);
    return 0;
}
