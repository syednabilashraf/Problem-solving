#include <iostream>

using namespace std;

class MyQueue
{
    private:
        int front;
        int rear;
        int size;
        int max_capacity;
        int queue_array[1000] = {0};
        MyQueue();
    public:
        int pop();
        void push_back(int value);
        bool is_empty();
        bool is_full();
        void print_queue();
        MyQueue(int size);
};

MyQueue :: MyQueue()
{
    // Do nothing.
}

MyQueue :: MyQueue(int value)
{
    this -> size = value;
    this -> front = 0;
    this -> rear = 0;
    this -> max_capacity = 1000;
    this -> queue_array[size] = {0};
}

int MyQueue :: pop()
{
    if (front == rear)
    {
        cout << "Underflow" << endl;
        return 0;
    }

    int value = queue_array[front];
    front++;
    return value;
}

void MyQueue :: push_back(int value)
{
    if (rear == max_capacity)
    {
        cout << "Overflow" << endl;
        return;
    }
    queue_array[rear] = value;
    rear++;
    return;
}

void MyQueue :: print_queue()
{
    for (int i = front; i < rear; i++)
    {
        cout << queue_array[i] << " ";
    }
    cout << endl;
    return;
}

bool MyQueue :: is_empty()
{
    if (rear == front)
        return true;
    else
        return false;
}


int main()
{
    MyQueue queue = MyQueue(10);
    bool answer = queue.is_empty();
    cout << answer << endl;

    queue.push_back(100);

    bool answer2 = queue.is_empty();
    cout << answer2 << endl;

    queue.push_back(100);
    queue.push_back(54);
    queue.print_queue();

    queue.push_back(89);
    queue.print_queue();

    queue.push_back(36);
    queue.pop();

    queue.print_queue();

    queue.push_back(28);
    queue.push_back(14);
    queue.print_queue();

    queue.pop();

    while (!queue.is_empty())
    {
        queue.pop();
        queue.print_queue();
    }

    cout << queue.is_empty() << endl;

    return 0;
}