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
