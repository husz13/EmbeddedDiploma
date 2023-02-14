# Lec 5 Notes 

## Difference Between Definition and Declaration :

Definition ---> Allocatinng a Storage of a variable 
it's Done only one time 

Declaration ---> telling the Compiler that A variable of a certain datatype EXISTS 

"Every Definition is also a Declaration But not All Declarations are Definitions"
#### Examples 
* Extern int X ---> is a Declaration WHITHOUT Definition 
in this example the variable is already defined elsewhere 
* int x ---> is a Both Definition and Declaration 


## Functions

### Structure :

Return Data type func_name(input parameters )
{

//Function Body

}
#### Example : 
```C
int add(int x , int y ){
    int sum ;
    sum = x+y ;
    return sum 
}
```

* If The Function Doesn't Return any value the Return Data Type is Void 
```C
void print_Char (char x){
    printf("%c",x);
}
```

* If The Function Doesn't have input parameters the input parameters is Void 
```C
Void print_Hello (void){
    printf("Hello\n");
}
```
## Function Declaration and Definition :

a Function can be defined any where but it must be declared ABOVE The main Function 

* Examples :
For code optimization, it is recommended to separate the declaration and the definition of the function Like this :

```C
// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  printf("I just got executed!");
}
```
But it can also be Written like this : 
```C
// Function declaration and definition 
void myFunction() {
  printf("I just got executed!");
}
// The main method
int main() {
  myFunction();  // call the function
  return 0;
}
```







