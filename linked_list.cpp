#include <iostream>
#include <memory>

using namespace std;

template<typename T> 
class Node{
    private:
        T value;
        Node<T>* next;
    public:
        Node(){
            this->next = nullptr;
        }
        Node<T>(const T& value) : value(value)
        {
            this->next = nullptr;
        }

        void setNode(T val){
            this->value = val;
        }

        T getVal(){
            return this->value;
        }

        Node<T>* getNext(){ 
            return next; 
        }

        void setNext(Node<T>* next_){
             next = next_; 
            }
};

template<typename T> 
class LinkedList{
    private:
		Node<T>* head;
        Node<T>* tail;
        int length;


    public:
        LinkedList(T value) {
            Node<T>* newNode = new Node<T>(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        ~LinkedList() {
            Node<T>* temp = head;
            while (head) {
                head = head->getNext();
                delete temp;
                temp = head;
            }
        }

        void printList() {
            Node<T>* temp = head;
            while (temp != nullptr) {
                cout << temp->getVal() << endl;
                temp = temp->getNext();
            }
        }

        void getHead() {
            if (head == nullptr) {
                cout << "Head: nullptr" << endl;
            } else {
                cout << "Head: " << head->getVal() << endl;
            }
        }

        void getTail() {
            if (tail == nullptr) {
                cout << "Tail: nullptr" << endl;
            } else { 
                cout << "Tail: " << tail->getVal() << endl;
            }  
        }

        void getLength() {
            cout << "Length: " << length << endl;
        }

};



int main() {
        
    LinkedList<int>* myLinkedList = new LinkedList<int>(4);

    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();
    
    cout << "\nLinked List:\n";
    myLinkedList->printList();
    delete myLinkedList;

    /*  
        EXPECTED OUTPUT:
    	----------------
        Head: 4
        Tail: 4
        Length: 1

        Linked List:
        4

    */
       
}

