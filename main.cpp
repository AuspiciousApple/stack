/*************************
* 
*
* Name: Fabio Ventura
* Coding 05
* purpose: program to serve as the driver file for testing the Stack ADT
*
*
**************************/
#include "main.h"



int main(int argc, char **argv) 
{
    int inputValue = std::stoi(argv[1]);// string to int conversion for the second argument
    bool status = false;
    int value = 0;

    //validation
    if(argc != 2)
    {
        cout << "\t Provide 1 argument" << endl;
    }
    
    try
    {   //validation
        if(inputValue <= 0)
        {
        cout << "\t Provide an intger greater than 0" << endl;
        status = true;
        }
    }catch(...)
    {
        cout << "\t Provide an integer" << endl;
    }

    if(status == false)
    {
        cout << "error occured. Exiting program" << endl;
    }

    else

    // TEMINATE PROGRAM HERE SOMEHOW WITOHTU USING MORE THAN ONE RETURN OR EXIT()
    // TEMINATE PROGRAM HERE SOMEHOW WITOHTU USING MORE THAN ONE RETURN OR EXIT
    // TEMINATE PROGRAM HERE SOMEHOW WITOHTU USING MORE THAN ONE RETURN OR EXIT


    srand(time(NULL));

    //Creating stack of input value size

    //Empty struct for use in the program
    Data* empty = new Data;

    //string for testing
    string test = "hello";

    //Variable for testing
    value = 5;


    ////////////////////Testing empty and getSize methods/////////////////

    //Testing constructor
    Stack myStack(inputValue);

    //Testing failed condition of constructor

    cout << "\t Testing empty Methods" << endl << endl;

    if(myStack.isEmpty())
    {
        cout << "\t Stack is empty" << endl;
        cout << "\t Size of stack is: " << myStack.getSize() << endl;
    }

    else 
    {
        cout << "\t Stack is not-empty" << endl;
        cout << "\t Size of stack is: " << myStack.getSize() << endl;
    }


    cout << endl;
    myStack.push(value, &test);
    cout << myStack.push(value, &test) << endl;
    cout << value << test << endl;


    if(myStack.peek(empty))
    {
        cout << "peeked: " << empty->id << " and " << empty->information << endl;
    }
    else 
    {
        cout << "underflow error" << endl;
    }


    if(myStack.push(value, &test));
    {
        cout << "pushed " << endl;








    }
    // make 20 random strings, store them, display them
    /*std::string strtemp;
    for(int i=0; i<20; i++){
        rand_string(&strtemp);
        std::cout << strtemp << std::endl;
    }*/
  
    
    return 0;
}
