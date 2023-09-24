/*************************
* 
*
* Name: Fabio Ventura
* Coding 05
* purpose: program to serve as the definition for the Stack Class methods.
*
*
**************************/

// each cpp includes ONLY it's header directly
#include "stack.h"



Stack::Stack(int size)
{
    this->top = -1;

    if(size >= 2)// validation
    {   
        //outcome
        this->size = size;
    }
    else
    {
        //default outcome
        this->size = SIZE;
    }
    this->stack = new Data*[this->size];
}

Stack::~Stack()
{
    //Deletes the individual memory adresses in the array
    for(int i = this->top; i >= 0; i--)
    {
        delete this->stack[i];
    }
    //Deletes the Data** memory address
    delete[] this->stack;
    
}

bool Stack::push(int id, string* information)
{
    bool pushed = false;

    //Validation
    if (top < size-1 && id > 0 && !information->empty())
    {
        Data* newData = new Data;
        newData->id = id;
        newData->information = *information;
        stack[++top] = newData;
        pushed = true;
        
    }
    return pushed;
}

bool Stack::pop(Data* empty)
{
    bool popped = false;
    //Validation
    if (top > -1)
    {
        //Outcome
        empty->id = stack[top]->id;
        empty->information = stack[top]->information;
        delete this->stack[top];
        stack[top--];
        popped = true;
    }
    //Validation
    else
    {
        //Outcome
        empty->id = -1;
        empty->information = "";
    }
    return popped;
}

bool Stack::peek(Data* empty)
{
    bool popped = false;
    //Validation
    if (top > -1)
    {
        //Outcome
        empty->id = stack[top]->id;
        empty->information = stack[top]->information;
        popped = true;
    }
    //Validation
    else
    {
        //Outcome
        empty->id = -1;
        empty->information = "";
    }
    return popped;
}

bool Stack::isEmpty()
{
    return (top == -1);
}

int Stack::getSize()
{
    return size;
}
// Delete this b4 submitting

