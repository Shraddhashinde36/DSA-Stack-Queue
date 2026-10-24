#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;

    node(int x) {
        data = x;
        next = NULL;
    }
};

class queue {
private:
    node *front;
    node *rear;

public:
    queue() {
        front = NULL;
        rear = NULL;
    }

    int empty() {
        if (front == NULL && rear == NULL) {
            return 1;
        } else {
            return 0;
        }
    }

    void enqueue(int x) {
        node *p = new node(x);

        if (empty()) {
            front = p;
            rear = p;
        } else {
            rear->next = p;
            rear = p;
        }
    }

    int dequeue(void) {
        if (empty()) {
            cout << "\nQueue is empty";
            return -1;
        }

        int x = front->data;
        node *p = front;
        front = front->next;

        if (front == NULL) {
            rear = NULL;
        }

        delete p;
        return x;
    }

    int peek() {
        if (empty()) {
            cout << "\nQueue is empty";
            return -1;
        }

        return front->data;
    }

    void display() {
        if (empty()) {
            cout << "\nQueue is empty";
            return;
        }

        node *q = front;

        while (q != NULL) {
            cout << endl << q->data;
            q = q->next;
        }
    }
};

int main() {
    int x;
    queue q;

    q.enqueue(25);
    q.enqueue(57);
    q.enqueue(82);
    q.enqueue(99);
    q.enqueue(100);
    q.enqueue(220);

    q.display();

    if (!q.empty()) {
        x = q.dequeue();
        cout << endl << "Removed: " << x;
    }

    q.display();

    if (!q.empty()) {
        x = q.peek();
        cout << endl << "Front Element is: " << x;
    }

    return 0;
}
