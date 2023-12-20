/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 11.08.2023
 */

class Node {
public:
    int data;
    Node* next;

    //Constructor
    Node(int val){
        this->data = val;
        this->next = 0x0;
    }
};

class Stack{
    Node* head;
public:
    Stack(){
        this->head = 0x0;
    }
    void PUSH(int val){
        Node* tmp = new Node(val);
        tmp->data = val;
        tmp->next = this->head;
        this->head = tmp;
    }
};
