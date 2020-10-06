#include <iostream>

using namespace std;

class QueueNode
{
    public:
        QueueNode *next;
        int value;
};

class MyQueue
{
    private:
        QueueNode *front;
        QueueNode *rear;
};

QueueNode* new_node(int x)
{
    QueueNode* temp = new QueueNode();
    temp -> next = NULL;
    temp -> value = x;
    return temp;
}

Queue* 

int main()
{

}