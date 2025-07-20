#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }

    ~Node()
    {
        if (next != NULL)
        {
            next = NULL;
        }
    }
};

class List
{
public:
    Node *head;
    Node *tail;

    List()
    {
        head = NULL;
        tail = NULL;
    }

    ~List()
    {
        if (head != NULL)
        {
            head = NULL;
        }
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val); // dynamic

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val); // dynamic

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insert(int val, int pos)
    {
        Node *newNode = new Node(val);
        Node *temp = head;

        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "position is invalid\n";
            }
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "Linked List is empty\n";
        }

        Node *temp = head;

        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << "Linked List is empty\n";
        }

        Node *temp = head;

        while (temp->next != tail)
        {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    int searchItr(int key)
    {
        Node *temp = head;
        int idx = 0;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    Node *SplitAtMid(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        Node *prev = NULL;

        while (fast != NULL && fast->next != NULL)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if (prev != NULL)
        {
            prev->next = NULL; // split at middle
        }

        return slow;
    }

    Node *merge(Node *left, Node *right)
    {
        List ans;

        while (left != NULL && right != NULL)
        {
            if (left->data <= right->data)
            {
                ans.push_back(left->data);
                left = left->next;
            }
            else
            {
                ans.push_back(right->data);
                right = right->next;
            }
        }

        while (left != NULL)
        {
            ans.push_back(left->data);
            left = left->next;
        }

        while (right != NULL)
        {
            ans.push_back(right->data);
            right = right->next;
        }

        return ans.head;
    }

    Node *mergeSort(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        Node *rightHead = SplitAtMid(head);

        Node *left = mergeSort(head);
        Node *right = mergeSort(rightHead);

        return merge(left, right);
    }
};

int main()
{
    List ll;

    ll.push_back(1);
    ll.push_back(4);
    ll.push_back(1);
    ll.push_back(7);
    ll.push_back(2);
    ll.push_back(8);

    ll.head = ll.mergeSort(ll.head);

    ll.printList();

    return 0;
}