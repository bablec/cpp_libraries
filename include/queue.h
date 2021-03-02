#ifndef _QUEUE_H
#define _QUEUE_H

#include <stdexcept>

const int QUEUE_SIZE = 128;

template <class QueueType>
class Queue {
private:
    int head, tail, count;
    QueueType data[QUEUE_SIZE];
public:
    Queue() {
        head = QUEUE_SIZE;
        tail = 0;
        count = 0;
        data = new data[QUEUE_SIZE]
    }

    ~Queue() {
        delete[] data;
    }

    void clear(void) { count = 0; }
    int size(void) { return count; }
    bool isEmpty(void) { return !count; }

    void enqueue(QueueType value) {
        if (count == QUEUE_SIZE)
            throw std::overflow_error("Queue is Full");
        count++;
        data[tail] = value;
        tail = (tail+1) & (QUEUE_SIZE - 1);
    }

    QueueType dequeue() {
        if (!count)
            throw std::underflow_error("Queue is Empty");
        count--;
        head = (head+1) & (QUEUE_SIZE - 1);
        return data[head];
    }

};

#endif