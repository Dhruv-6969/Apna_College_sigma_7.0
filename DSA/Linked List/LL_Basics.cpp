#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = NULL;
        tail = NULL;
    }

    ~List(){
        if(head!= NULL){
            delete head;
            head = NULL;
        }
    }

    void push_front(int val){
        Node* newNode = new Node(val); //dynamic

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node * newNode = new Node(val); //dynamic

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList(){
        Node* temp = head;

        while(temp!=NULL){
            cout<< temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insert(int val, int pos){
        Node* newNode = new Node(val);
        Node * temp = head;

        for(int i = 0; i<pos-1; i++){
            if(temp == NULL){
                cout << "position is invalid\n";
            }
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop_front(){
        if(head == NULL){
            cout<< "Linked List is empty\n";
        }

        Node* temp = head;

        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout<< "Linked List is empty\n";
        }

        Node * temp = head;
        
        while(temp->next != tail){
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    int searchItr(int key){
        Node * temp = head;
        int idx = 0;

        while(temp!= NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
};

int main(){
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);

    ll.push_back(5);
    ll.push_back(6);

    ll.insert(4, 4);

    ll.pop_front();

    ll.pop_back();

    ll.printList();

    cout << ll.searchItr(3) << endl;

    return 0;
}