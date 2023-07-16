#include <iostream>

class Node {
    public:
        int data;
        Node* next; //pointer to the next node

        Node(int element, Node* nextNode=NULL) {
            data = element;
            next = nextNode;
        }
        Node(Node* nextNode=NULL) {
            next = nextNode;
        }
};

class LinkedList {
    private:
        Node* head;
        Node* tail;
        Node* curr;
        int size;

        void init() {
            curr = tail = head = new Node;
            size = 0;
        }

        void removeAll() {
            while(head != NULL) {
                curr = head;
                head = head->next;
                delete curr; 
            }
        }

    public:
        LinkedList() {
            init();
        }
        ~LinkedList() {
            removeAll();
        }

        void clear() {
            removeAll();
            init();
        }

        void insert(int value) {
            curr -> next = new Node(value, curr->next); // curr->next is the pointer to the next node
            if (tail == curr) {
                tail = curr ->next;
            }
            size++;
        }

        void append(int value) {
            tail = tail -> next = new Node(value, NULL);
            size++;
        }

        int remove() {
            if (curr->next == NULL){
                std::cout << "No element" << std::endl;
            }
            int value = curr->next->data;
            Node* temp = curr-> next;
            if (tail == curr->next) {
                tail = curr;
            }
            curr->next = curr->next->next;
            delete temp;
            size--;
            return value;
        }

        void moveToStart() {
            curr = head;
        }

        void moveToEnd() {
            curr = tail;
        }

        void prev() {
            if (curr=head)
                return;
            Node* temp = head;
            while (temp->next != curr) {
                temp = temp -> next;
            }
            curr = temp;
        }

        void next() {
            if (curr != tail)
                curr = curr->next;
        }

        int lenght() {
            return size;
        }

        int currPos() {
            Node* temp = head;
            int i;
            for (i=0; curr!=temp; i++)
                temp = temp -> next;
            return i;
        }

        void moveToPos(int pos) {
            if (pos < 0 || pos > size) {
                std::cout << "Position out of range" << std::endl;
            }
            curr = head;
            for (int i=0; i<pos; i++)
                curr = curr -> next;
        }

        int getValue() {
            if (curr->next == NULL)
                std::cout << "No value" << std::endl;
            return curr->next->data;
        }
};

int main() {
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.moveToPos(1);
    std::cout << list.remove() << std::endl;

    return 0;
}