#include <iostream>
#include <stdio.h>
using namespace std;
struct queue
{
    int size;
    int front = 0;
    int rear = 0;
    int *q = NULL;
};
void create(queue *Q)
{
    cout << "Enter the size" << endl;
    cin >> Q->size;
    Q->size += 1;
    Q->q = new int[Q->size];
}
void enqueue(int x, queue *Q)
{
    if ((Q->rear + 1) % Q->size == Q->front)
    {
        cout << "Queue is full" << endl;
        return;
    }
    else
    {
        Q->rear = (Q->rear + 1) % Q->size;
        Q->q[Q->rear] = x;
    }
}
void display(queue *Q)
{
    if (Q->front == Q->rear)
    {
        cout << "Empty Queue" << endl;
    }
    else
    {
        int i = (Q->front + 1) % Q->size;
        while (i != Q->rear)
        {
            cout << Q->q[i] << " ";
            i = (i + 1) % Q->size;
        }
        cout << Q->q[i];
    }
}
int dequeue(queue *Q)
{
    if (Q->front == Q->rear)
    {
        cout << "Empty Queue" << endl;
    }
    else
    {
        Q->front = (Q->front + 1) % Q->size;
        int x = Q->q[Q->front];
        return x;
    }
}
int main()
{

    queue *q = new queue;
    create(q);
    enqueue(1, q);
    enqueue(2, q);
    enqueue(3, q);
    enqueue(4, q);
    enqueue(5, q);
    display(q);
    dequeue(q);
    cout << endl;
    display(q);
    dequeue(q);
    cout << endl;
    display(q);
    dequeue(q);
    cout << endl;
    display(q);
    dequeue(q);
    // dequeue(q);
    cout << endl;
    display(q);
    enqueue(1, q);
    cout << endl;
    display(q);

    return 0;
}