#include <iostream>
using namespace std;

struct LinkedList
{
    int val;
    LinkedList *next;
    LinkedList(): val(0), next(nullptr){}
    LinkedList(int x): val(x), next(nullptr){}
    LinkedList(int x, LinkedList *next): val(x), next(next){}
};

int main()
{
    LinkedList* head = new LinkedList();
    LinkedList* tail = head;
    tail->next = new LinkedList(1);
    tail = tail->next;
    tail->next = new LinkedList(2);
    tail = tail->next;
    tail->next = new LinkedList(3);
    tail = tail->next;
    tail->next = new LinkedList(4);
    cout << "Programme: " << "\n";
    while(head->next!=NULL){
        head = head->next;
        cout << head->val << "\n";
    }
    return 0;
}

