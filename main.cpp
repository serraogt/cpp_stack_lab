#include <iostream>
using namespace std;

 class Node{

 public:
        int value;
        Node *next;
        Node(int v , Node *n){
            value=v;
            next=n;
        }
};

class Stack {
public:
    int size;
    int maxSize;
    Node *top;

    Stack(int max) {
        maxSize = max;
        size = 0;
        cout<< "New stack created with the size of "<< size<<endl;}

    bool push(int x) {
        if (size >= maxSize) {
            cout << "stack is full";
            return false;}
        else if (size==0) {
            Node *first = new Node(x, nullptr);
            top = first;
            cout<<"first node created with the value of:" <<x<<endl;
            size++;}
        else
        {   Node *current = new Node(x, nullptr);
            current->next = top;
             top= current;
            cout<<"new node created with the value of:" <<x<<endl;
            size++;
        }}
        //   int pop(top->value=0;);
        //int top();

        bool isEmpty(){
        if (size <= 0) {
            cout << "it is empty" << endl;
            return true;}
        else return false;}
        int pop(){
            int y= top->value;
            top=top->next;
            size--;
            cout<<"node with the value of"<<y<<"is deleted"<<endl;
            return y;}

        int showSize(){cout<<"size is: "<<size<<endl;}
        //since I keep size variable as integer it is  easy to print.
        // in this circumstences, writing a function that goes recursively 'next' would be expensive.

        int peek(){
        int peekIs= top->value;
            cout<< "top equals: "<<peekIs<<endl;
            return peekIs;}
    };


    int main() {

        Stack *s1 = new Stack(4);
        s1->push(12);
        s1->push(5);
        s1->pop();

        //should we get input?

        s1->showSize();
        s1->peek();
        return 0;
    }
