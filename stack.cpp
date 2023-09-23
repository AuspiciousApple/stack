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
    this->size = size;

    if(size >= 2)// validation
    {   
        //outcome
        this->stack = new Data* [this->size];
    }
    else
    {
        //default outcome
        this->size = 10;
        this->stack = new Data* [this->size];
    }
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
    if (top < size-1)
    {
        //Validation of parameters
        if(id > 0 || !information->empty())
        {
            Data* newData = new Data;
            newData->id = id;
            newData->information = *information;
            stack[++top] = newData;
            pushed = true;
        }
    }
    return pushed;
}

bool Stack::pop(Data* empty)
{
    bool popped = false;
    if (top > 0)
    {
        stack[top]->id = empty->id;
        stack[top]->information = empty->information;
        delete this->stack[top];


    }
    else
    {
        empty->id = -1;
        empty->information = "";
    }
    return popped;
}

bool Stack::peek()
{
    return true;
}

bool Stack::isEmpty()
{
    return (top == -1);
}

int Stack::getSize()
{
    return size; //Might need to return the total size not the current size?
                 // Reach out to instructor to ask
}
