#include <iostream>


struct Node {
    int value;
    Node *Next = nullptr;
};

class Linked_list {
public:
    Node *Head = new Node{};

    size_t size() {
    };

    void push(const int &element) {
        // Создадим новый элемент
        Node *_ = new Node{element};
        _->Next = Head->Next;
        Head->Next = _;
    }

    // Вставка в конец
    void push_back(const int &x) {
    }

    // Вставка после элемента
    void insert(Node *after_me, Node *target) {
    }

    // Удаление
    void pop(Node *me) {

    }

    // Нахождение элемента
    Node *find(const int &target) {

    }

    void print() {
        Node *elem = Head->Next;
        while (elem != nullptr) {
            std::cout << elem->value << std::endl;
            elem = elem->Next;
        }
    }
};