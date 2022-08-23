// Stacks & Queues

/* 132. Code : Stack Using LL:

Implement a Stack Data Structure specifically to store integer data using a Singly Linked List.
The data members should be private.
You need to implement the following public functions :

Constructor:
It initialises the data members as required.
push(data) :
This function should take one argument of type integer. It pushes the element into the stack and returns nothing.
pop() :
It pops the element from the top of the stack and in turn, returns the element being popped or deleted. In case the stack is empty, it returns -1.
top :
It returns the element being kept at the top of the stack. In case the stack is empty, it returns -1.
size() :
It returns the size of the stack at any given instance of time.
isEmpty() :
It returns a boolean value indicating whether the stack is empty or not.
Operations Performed on the Stack:
Query-1(Denoted by an integer 1): Pushes an integer data to the stack.

Query-2(Denoted by an integer 2): Pops the data kept at the top of the stack and returns it to the caller.

Query-3(Denoted by an integer 3): Fetches and returns the data being kept at the top of the stack but doesn't remove it, unlike the pop function.

Query-4(Denoted by an integer 4): Returns the current size of the stack.

Query-5(Denoted by an integer 5): Returns a boolean value denoting whether the stack is empty or not.

*/

/************************************************************

    Following is the structure of the node class

    class Node {
        public :
        int data;
        Node *next;

        Node(int data) {
            this->data = data;
            next = NULL;
        }
    };

**************************************************************/

class Stack
{

private:
    Node *head;
    int size;

public:
    Stack()
    {

        head = NULL;
        size = 0;
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize()
    {

        return size;
    }

    bool isEmpty()
    {

        return size == 0;
    }

    void push(int element)
    {

        Node *newNode = new Node(element);
        newNode->next = head;
        head = newNode;
        size++;
    }

    int pop()
    {

        if (head == NULL)
        {

            return -1;
        }

        Node *a = head;
        int value = head->data;
        head = head->next;
        delete a;
        size--;
        return value;
    }

    int top()
    {

        if (head == NULL)
        {

            return -1;
        }

        return head->data;
    }
};