#include <iostream>
using namespace std;

#define SIZE 5
typedef int Entry;

struct Queue {
    int front;
    int rear;
    int count;
    Entry arr[SIZE];
};

void QueueTraverse(Queue* pq, void (*pf)(Entry))
{
    int pos = pq->front;

    for (int i = 0; i < pq->count; i++)
    {
        pf(pq->arr[pos]);
        pos = (pos + 1) % SIZE;
    }
}

void Print(Entry e)
{
    cout << e << " ";
}

int main()
{
    Queue q;

    q.front = 0;
    q.count = 3;

    q.arr[0] = 10;
    q.arr[1] = 20;
    q.arr[2] = 30;

    QueueTraverse(&q, Print);

}