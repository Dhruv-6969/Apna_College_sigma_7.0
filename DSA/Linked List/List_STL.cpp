#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void printList(list<int> ll){
    list<int>::iterator itr;

    for(itr = ll.begin(); itr != ll.end(); itr++){
        cout << *itr << " -> ";
    }
    cout << "NULL" << endl;
}

int main(){
    list<int> ll;

    ll.push_front(2); // 2
    ll.push_front(1); // 1 -> 2

    ll.push_back(3); // 1 -> 2 -> 3
    ll.push_back(4); // 1 -> 2 -> 3 -> 4

    printList(ll);

    cout << "Size = " << ll.size() << endl;

    cout << "Head = " << ll.front() << endl;
    cout << "Tail = " << ll.back() << endl;

    ll.pop_back(); // 1 -> 2 -> 3

    printList(ll);
    
    return 0;
}