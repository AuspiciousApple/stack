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

#include "data.h"

class Stack 
{
    public:
        //Construtors
        Stack(int);

        //Destructor
        ~Stack();

        //Getters
        bool isEmpty();
        bool peek();
        int getSize();

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
