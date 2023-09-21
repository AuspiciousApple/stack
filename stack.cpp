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
    top = -1;
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
    return true;
}

bool Stack::pop()
{
    return true;

}

bool Stack::peek()
{
    return true;

}

bool Stack::isEmpty()
{
    return true;

}

int Stack::getSize()
{
    return 0;
}
