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
    bool status = false;
    int inputValue;
    //validation
    if(argc > 2)
    {
        cout << "Provide 1 argument" << endl;
    }
    
    try
    {   //validation
        inputValue = std::stoi(argv[1]);// string to int conversion for the second argument

        if(inputValue <= 0)
        {
        cout << "Provide an intger greater than 0" << endl;
        }
    }catch(...)

    {
        cout << "Provide an integer" << endl;
    }

    if(inputValue > 2)
    {
        status = true;
    }

    if(status == false)
    {
        cout << "Error occured. Exiting program" << endl;
    }

    else
    {

    // TEMINATE PROGRAM HERE SOMEHOW WITOHTU USING MORE THAN ONE RETURN OR EXIT()
    // TEMINATE PROGRAM HERE SOMEHOW WITOHTU USING MORE THAN ONE RETURN OR EXIT
    // TEMINATE PROGRAM HERE SOMEHOW WITOHTU USING MORE THAN ONE RETURN OR EXIT


    srand(time(NULL));

    //Creating stack of input value size

    //Empty struct for use in the program
    Data* empty = new Data;

    //string and int for testing
    string strtemp = "hello";
    int value = -3;


    ////////////////////Testing Individual methods/////////////////


    //Testing failed condition of constructor
    Stack myStackDefault(value);
    cout << "Size of default consturctor: " << myStackDefault.getSize() << endl << endl;

    //Testing constructor
    Stack myStack(inputValue);



    cout << "Testing Individual Methods" << endl << endl;

    cout << "Size of stack is: " << myStack.getSize() << endl;


    if(myStack.isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else 
    {
        cout << "Stack is not-empty" << endl;
    }

    if(myStack.peek(empty))
    {
        cout << "peeked: " << empty->id << " and " << empty->information << endl;
    }
    else 
    {
        cout << "Underflow error" << endl;
    }

    if(myStack.pop(empty))
    {
        cout << "Popped successfuly" << endl;
    }
    else
    {
        cout << "Underflow error" << endl << endl;
    }

    if(myStack.push(value, &strtemp))
    {
        cout << "Successfully pushed: " << value << " and " << strtemp << endl;
    }
    else
    {
        cout << "Invalid arguments given" << endl; 
    }

    cout << endl << endl;

    ////////////////////Testing Full Stack operations/////////////////
    ////////////////////Testing Full Stack operations/////////////////

    cout << "Testing Full Stack Operations" << endl << endl << endl;
    cout << "Filling stack..." << endl;

    for (int i = 0; i < inputValue*MULTIPLIER; i++)
    {
        //Generating a postive or negative number
        value = rand()%2 ? -(i+1): i+1;

        //generating a random string
        rand_string(&strtemp);

        if (myStack.push(value, &strtemp))
        {
            cout << "Pushed " << value << " and " << strtemp << endl;
        }
        else 
        {
            cout << "Overflow error" << endl;
        }
    }

    if(myStack.isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else 
    {
        cout << "Stack is not-empty" << endl;
    }

    if(myStack.peek(empty))
    {
        cout << "peeked: " << empty->id << " and " << empty->information << endl;
    }
    else 
    {
        cout << "Underflow error" << endl;
    }

    if(myStack.pop(empty))
    {
        cout << "Popped successfuly" << endl;
    }
    else
    {
        cout << "Underflow error" << endl << endl;
    }

    ////////////////////Emptying Stack Completelty////////////////////
    cout << "Emptying Stack... " << endl;
    while(!myStack.isEmpty())
    {
        myStack.pop(empty);
    }


    ////////////////////Beginning random Stack Test////////////////////
    cout << "Random testing beginning... " << endl;
    int choice = rand() % CHOICES + 1;

    for (int i = 0; i < inputValue*MULTIPLIER; i++) 
    {
        switch (choice) 
        {
            case 1:
            case 2:
                // push
                value = (rand() % MAX_INT) + 1;
                rand_string(&strtemp);

                if (myStack.push(value,&strtemp)) 
                {
                    cout << "pushed: " << value << " and " << strtemp << endl;
                } 
                else 
                {
                    cout << "overflow error: " << value << " and " << strtemp << " not pushed" << endl;
                }
                break;
            case 3:
            case 4:
                if(myStack.pop(empty))
                {
                    cout << "Popped successfuly" << endl;
                }
                else
                {
                    cout << "Underflow error" << endl << endl;
                }   
                break;
            case 5:
                // peek
                if(myStack.peek(empty))
                {
                    cout << "peeked: " << empty->id << " and " << empty->information << endl;
                }
                else 
                {
                    cout << "Underflow error" << endl;
                }
            case 6:
                if(myStack.isEmpty())
                {
                    cout << "Stack is empty" << endl;
                }
                else 
                {
                    cout << "Stack is not-empty" << endl;
                }
                break;
        }
        choice = rand() % CHOICES + 1;

    }
    cout << endl;

    cout << "Testing Completed....." << endl;
    }
    
    return 0;
}
