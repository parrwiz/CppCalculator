#include <iostream>
#include <cmath>

using namespace std;
int main()
{
   float a;
   float e;
   char c;
   int g;
   float d;
   cout<<"Welcome to the world's most advanced calculator \n Please enter your input carefully "<<endl;
   cout<<"**********************************************";
   cout<<"*********     Parwiz Khan        *************";
   cout<<"**********************************************"<<endl;
   cout<<"Enter 99 to continue"<<endl;
   cin>>g;
   if (g == 99)
   {
    cout<<"What operation would like to perform MATH [u] ADD [i] MINUS  [o] DIVISION [p] ";
    cin>>c;
   cout<<"Enter your first number: ";
   cin>>a;
    cout<<"Please enter your second number: ";
    cin>>e;
   
   
   switch (c)
   {
   case 'u':
        d = a * e;
       cout<<"The answer is "<<d<<endl;
       break;
   
   case 'i':
        d = a + e;
        cout <<"The answer is "<<d<<endl;
       break;
    case 'o':
        d = a - e;
        cout<<"The answer is "<<d<<endl;
        break;
    case 'p':
    d = a / e;
    cout <<"The answer is "<< d<<endl;
        break;
    default:
    cout<<"THe operation was not supported";
    break;
   }
   }else
   {
       cout<<"Please restart the program and enter 99 correclty"<<endl;
   }
   
   
   
   
return 0;


}