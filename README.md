# Exception Handling in C++

## AIM
To learn about exception handling in C++.

## Problem Statement
1. **Customized Error for Negative Numbers:** Write a C++ program to generate a customized error when a negative number is entered.
2. **Customized Error for Year:** Write a C++ program to generate a customized error when a year less than 2000 is entered.

## Theory
In C++, exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution. The process of handling these exceptions is referred to as exception handling. This mechanism allows control to be transferred from the part of the program where the exception occurred to another part of the code.

By utilizing exception handling in C++, we can effectively manage errors, ensuring that our program continues to run smoothly even when exceptions occur.

## Program Codes
```javascript
//Mukesh Rothe 23070123089
# include<iostream>
using namespace std;
 int main()
 {  float a;
    cout<< "Enter a positive number: "<<endl;
    cin>>a;
try {
    if ( a<0)
    {
        throw a;
    }
else {
 cout<< "The number  is: "<<a<<endl;
 }
}
catch (const float n)
{
    cout<<"You entered " <<a<<" which is a negative number";
}
 }
```
```javascript
//Mukesh Rothe 23070123089
#include<iostream>
using namespace std;
 int main()
 { int year;
    cout << "Enter year greater than 2000: "<<endl;
    cin>>year;
    try{
if ( year<2000)
{
    throw "You entered a year less than 2000";
}
else{
    cout<< "Entered year is: "<<year<<endl;
}
    }
    catch ( const char*msg)
    { 
        cout << msg;
    }
 }
```
## Output
Number Error-

![Screenshot 2024-10-03 212953](https://github.com/user-attachments/assets/8b436c8b-1fb4-4cdb-adfe-b72df5d44148)

Year Error-

![Screenshot 2024-10-03 213028](https://github.com/user-attachments/assets/28b07fe3-95c4-4400-aef8-d38a42f99817)

## Conclusion
We learned to implement exception handling in C++.
