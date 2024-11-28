#include<stdio.h>
#include<conio.h>
#define MAX 50
int queue[MAX];
int front = -1, rear = -1,count = 0;
void enqueue(int num);
int dequeue(void);
int peek(void);
void display(void);
void push(int val);
void pop(void);

int main()
{
    int p;
    push(4);
    push(7);
    push(0);
    push(8);
    display();
    peek();
    pop();
    display();
    peek();
    push(5);
    display();
    peek();
}
void push(int val)
{
    enqueue(val);
}

void pop()
{
    int cur = rear,temp;
    if(rear == -1 || front>rear)
        printf("stack is empty\n");
    while(front< cur)
    {
        temp = dequeue();
        enqueue(temp);
    }
    dequeue();
    printf("Element Poped\n");
}
void  enqueue(int num)
{
    if(rear == MAX-1)
        printf("stack is full\n");
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
        rear++;
    queue[rear] = num;
    
}
void display()
{
    int i;
    printf("\n");
    if(front == -1 || front>rear)
        printf("Queue is empty\n");
    else
    {
        printf("Stack View: ");
        for(i = front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
    printf("\n");
}
int peek()
{
    if(front == -1 || front>rear)
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        if(queue[rear]!= -1)
        {
            printf("Top elemnet of Stack: ");
            printf("%d\n",queue[rear]);
        }
    }
}
int dequeue()
{
    int val;
    if(front == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        val = queue[front];
        front++;
        if(front>rear)
        {
            front = rear = -1;
        }
    }
    return val;
}
