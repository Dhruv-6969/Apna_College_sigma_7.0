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

    int HashFunction(srting key){
        int idx = 0;
        
        for(int i = 0; i<key.size(); i++){
            idx = idx + (key[i] * key[i])%totSize;
        }

        return idx;
    }

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
        int idx = HashFunction(key);

        Node * newNode = new Node(key, val);
        Node * head = table[idx];

        newNode->next = head;
        head = newNode;

        currSize++;
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