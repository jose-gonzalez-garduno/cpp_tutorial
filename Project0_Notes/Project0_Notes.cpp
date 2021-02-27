//Header that defines the standard input/output stream objects
#include <iostream>

//Compiler prepares a scope to the identifiers inside it. Basically organizes code into logical groups to prvent collisions.
using namespace std;

//Set a constant from proccessor
#define TEN 10;

//Addition function example:
int sum(int num1, int num2) {
    int result = num1 + num2;
    return result;
}

//Function declaration example
//Type is only required, parameter names are not important
int subtract(int, int);

//Call by pointer function example
//Changes made do affect variables, unlike call by value 
void pointersSwap(int *pointersSwap1, int *pointersSwap2);

//Call by reference function example
//Changes made do affect variables, unlike call by value 
void referenceSwap(int *referenceSwap1, int *referenceSwap2);


//Execution of program
int main()
{
    //Simple output
    cout << "Example of an output" << endl;

    /// <summary>
    /// Enumerated
    /// Sytanx: typedef type newname; 
    /// </summary>
    //Typedef declarations definds a new type
    typedef int feet; 
    //Creates integer variable called distance
    feet distance = 10;
    cout << "distance value = " << distance << endl;

    /// <summary>
    /// Enumerated
    /// Sytanx: enum enum-name { list of names } var-list;
    /// </summary>
    //Enumerated Types declares an optional type name and identifiers that can be used as values of the type
    //Each identifiers value is a constant whose type is the enumeration (0,1,2,3..).
    enum Color
    {
        red, green = 3, blue
    };
    Color someColor = blue; // Has a value of 4 since its after green
    cout << "someColor has a value of: " << someColor << endl;


    /// <summary>
    /// Constants
    /// </summary>
    //Using #define is a constant from the preprocessor.
    int myHashConstantValue = TEN; //TEN is set in top of script
    cout << "The value of '#define TEN 10': " << myHashConstantValue << endl;
    //Using const keyword:
    const int myConstKeywordValue = 50; //Value can not be changed
    cout << "The value of 'const int myConstKeywordValue =': " << myConstKeywordValue << endl;

   
    /// <summary>
    /// Function calls
    /// Syntax: return_type function_name( parameter list ) ;
    /// </summary>
    //Calling a simple function:
    cout << "Calling a simple function: Function sum(3,5): " << sum(3, 5) << endl;
    
    //Function declaration - Tells compiler about a function name and how to call it
    //Note the body and declaration are defined separtely.
    //Syntax: return_type function_name( parameter list ) ;
    int functionResult = subtract(3, 5);
    cout << "Calling a Function that was declared: subtract(3,5): " << functionResult << endl;

    //Call by pointer - changes made affect the passed argument
    //local variables
    int a = 100, b = 200;
    cout << "Calling by pointer: Values before of a: " << a << ". Values before of b: " << b << endl;
    pointersSwap(&a, &b); //Get pointers of a and b
    cout << "Calling by pointer: Values after of a: " << a << ". Values after of b: " << b << endl;
    
    //Call by reference - changes made affect the passed argument
    //local variables
    int c = 300, d = 900;
    cout << "Calling by reference: Values before of c: " << c << ". Values before of d: " << d << endl;
    referenceSwap(&c, &d); //Get pointers of c and d
    cout << "Calling by reference: Values after of c: " << c << ". Values after of d: " << d << endl;

    //https://www.tutorialspoint.com/cplusplus/cpp_passing_arrays_to_functions.htm

    /// <summary>
    /// Arrays
    /// Syntax: type arrayName [ arraySize ];
    /// </summary>
    //Declaring arrays
    int declaredArray[5];

    //Initializing arrays
    int initializedArray[3] = { 1,2,3 };
    //Initializing arrays omitting size
    int omitedArray[] = { 3,1,4 };

    //https://www.tutorialspoint.com/cplusplus/cpp_pointer_to_an_array.htm
    //https://www.tutorialspoint.com/cplusplus/cpp_return_arrays_from_functions.htm

    /// <summary>
    /// C++ Strings 
    /// </summary>
    /// C++ supports a wide range of functions
    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[10];
    int  len;

    //Copies string str1 into string str3
    strcpy(str3, str1);
    cout << "strcpy( str3, str1) : " << str3 << endl;

    // Concatenates string str1 unto end of str2
    strcat(str1, str2);
    cout << "strcat( str1, str2): " << str1 << endl;

    //Returns the length of string str1 after concatenation
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;


    /// <summary>
    /// Pointers and References
    /// </summary>


    /// <summary>
    /// Basic Input/Output
    /// </summary>
    


    //Terminates main() function and causes it to return the value 0
    return 0;
}

//Function body example for subtracting numbers
int subtract(int num1, int num2) {
    int results = num2 - num1;
    return results;
}

//Function call by pointer example
void pointersSwap(int *pointersSwap1, int *pointersSwap2) {
    int temp;
    temp = *pointersSwap1; //Save the value at address pointersSwap1
    *pointersSwap1 = *pointersSwap2; //Put pointersSwap2 into pointersSwap1
    *pointersSwap2 = temp; //Put pointersSwap1 into pointersSwap2
    return; //Empty since the modifier is void (not returning a value)
}

//Function call by reference example
void referenceSwap(int *referenceSwap1, int *referenceSwap2){
    int temp;
    temp = *referenceSwap1; //Save the value at address referenceSwap1
    *referenceSwap1 = *referenceSwap2; //Put referenceSwap2 into referenceSwap1
    *referenceSwap2 = temp; //Put referenceSwap1 into referenceSwap2
    return; //Empty since the modifier is void (not returning a value)
}