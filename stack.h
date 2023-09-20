/**********************
 *
 *  
 * File: stack.h
 * Author: Fabio Ventura
 *
 *
 **********************/

#ifndef STACK_H
#define STACK_H

/*
 * there are no other includes here because they are not needed.
 * if you do need other things included, they would go here
 */

#include "data.h"

class Stack 
{
    public:
        //Construtors
        Stack();

        //Destructor
        ~Stack();

        //Getters
        bool isEmpty();
        bool peek(); // not sure if this should be a bool or void

        //Setters both have to be bools
        bool push(int, string*);
        bool pop();



    private:

        // Atributes     
        int top;
        int size;
        Data **stack;
    
};

#endif //STACK_H
