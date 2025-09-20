#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string key;
    int value;
    Node *next;

    Node(string key, int value)
    {
        this->key = key;
        this->value = value;
        next = NULL;
    }
};

class HashTable
{
public:
    int totSize;
    int currSize;
    Node **table;

    HashTable(int size)
    {
        totSize = size;
        currSize = 0;

        table = new Node *[totSize];

        for (int i = 0; i < totSize; i++)
        {
            table[i] = NULL;
        }
    }

    void insert(string key, int val){

    }

    void remove(string key){

    }

    void search(string key){
        
    }
};

int main()
{
    HashTable ht(5);
    return 0;
}