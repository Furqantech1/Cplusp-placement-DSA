// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<4<<endl;
//     cout<<"4"<<endl;
//     cout<<4+3<<endl;
//     cout<<"4+3"<<endl;

//     return 0;
// }

// Area of circle 

// #include<iostream>
// using namespace std;

// int main()
// {
//     float radius,area;
//     cout<<"Enter raduis of the circle: ";
//     cin>>radius;
//     area=3.142*radius*radius;
//     cout<<"Area of circle of radius " <<radius<< " is: "<<area<<endl;
//     return 0;
// }

// Simple interest

// #include<iostream>
// using namespace std;
// int main()
// {
//     float p,t,r,si,total_amount;
//     cout<<"Enter principle amount: ";
//     cin>>p;
//     cout<<"Enter time: ";
//     cin>>t;
//     cout<<"Enter rate of interest: ";
//     cin>>r;
//     si=(p*t*r)/100;
//     total_amount=p+si;
//     cout<<"Simple interest for the given principle amount, time and rate of interest is: "<<si<<endl;
//     cout<<"Total amount after simple interest is: "<<total_amount<<endl;
//     return 0;
// }


// TypeCasting  

// #include<iostream>
// using namespace std;

// int main()
// {
//     int x;
//     cout<<"Enter value of x: ";
//     cin>>x;
//     // //float y = (float)x;   // typecasting
//     // cout<<(float)x/2;      // other way of type casting


//     // char ch='A';
//     // cout<<(int)ch<<endl;

// // int to char
//     cout<<(char)x<<endl;
//     return 0;

// }


// if statemet (even odd num)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     if(num%2==0)
//     {
//         cout<<"The entered number is Even"<<endl;
//     }
//     else
//     {
//         cout<<"Entered number is odd: "<<endl;
//     }
//     return 0;
// }

// check if number divisible by 5

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     if(num<0)
//     {
//         cout<<num*(-1)<<endl;
//     }
//     else
//     {
//         cout<<num<<endl;
//     }
//     return 0;
// }


// else if (checking profit and loss)

// #include<iostream>
// using namespace std;
// int main()
// {
//     float cp,sp,check;
//     cout<<"Enter the cost price of an item: ";
//     cin>>cp;
//     cout<<"Enter the selling price of an item: ";
//     cin>>sp;
//     check=sp-cp;
//     if(check>0)
//     {
//         cout<<"The seller has made profit and the profit amount is: "<<"$"<<check<<endl;
//     }
//     else if(check<0)
//     {
//         cout<<"The seller has suffered loss and the loss amount is: "<<"$"<<-check<<endl;
//     }
//     else
//     {
//         cout<<"No profit No loss!"<<endl;
//     }
//     return 0;
// }

// logical operators (and(&&) or(||))

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     if (num>99 && num<=999)
//     {
//         cout<<"It is 3 digit number: ";
//     }
//     else
//     {
//         cout<<"It is Not 3 digit number: ";
//     }
//     return 0;
// }

// Divisible by 5 or 3 but not by 15

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     if((num%3==0 || num%5==0)&&(num%15!=0))
//     {
//         cout<<"Hello"<<endl;
//     }
//     else
//     {
//         cout<<"Bye........";
//     }
//     return 0;
// }

/*If the ages of Ram, Shyam and Ajay are Input
through the keyboard, write a program to
determine the youngest of the three.*/  

// #include<iostream>
// using namespace std;
// int main()
// {
//     int ram,shyam,ajay;
//     cout<<"Enter the age of Ram: ";
//     cin>>ram;
//     cout<<"Enter the age of Shyam: ";
//     cin>>shyam;
//     cout<<"Enter the age of Ajay: ";
//     cin>>ajay;
//     if(ram<shyam){
//         if(ram<ajay){
//             cout<<"Ram is youngest among them"<<endl;
//         }
//         else{
//             cout<<"Ajay is youngest among them"<<endl;
//         }
//     }
//     else{
//         if(shyam<ajay){
//             cout<<"shyam is youngest among them"<<endl;
//         }
//         else{
//             cout<<"Ajay is youngest among them"<<endl;
//         }
//     }
//     return 0;
// }

// Ternary operator (use to write if else in one line)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     // syntax for ternary operator
//     // (condition) ? if true : if flase;       no need to write if in statement
//     (n%2==0) ? cout<<"Entered number is Even" : cout<<"Entered number is Odd";
//     return 0;
// }


// Table of numbers

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     cout<<"The table of "<<num<<" is:"<<endl;
//     for(int i=1;i<=10;i++)                                          // if (i%19==0)
//     {
//         cout<<num<<" X "<<i<<" = "<<num*i<<endl;
//     }
//     return 0;
// }


// Arithematic progression (AP)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     // for(int i=1;i<n;i++)   // if initial a=4, d=3, and calculate formula 3*n+1 (i+=3)
//     // {
//     //     cout<<2*i-1<<" ";   // last term of AP=2n-1(i.e odd numbers)
//     // }

//     // using extra variable k
//     // AP = 4 7 10 13.... (d=3) difference
//     int k=4;
//     for(int i=1;i<n;i++)  // no need of last term
//     {
//         cout<<k<<" ";
//         k+=3;
//     }
//     return 0;
// } 


// Geometric progression  (GP)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int k=1;
//     // printing GP 1 2 4 8 16 32..... (r=2) ratio
//     for(int i=1;i<n;i++)  // no need of last term
//     {
//         cout<<k<<" ";
//         k*=2;
//     }
//     return 0;
// } 


//  Checking wheter the number is Prime or Not

//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     int count=0;
//     for(int i=1;i<=num;i++)
//     {
//         if(num%i==0)
//         {
//             count++;
//         }
//     }
//     if(count>2)     // only two factors i.e '1' and 'num' itself
//     {
//         cout<<"Not a Prime"<<endl;
//     }
//     else{
//         cout<<"It is Prime number";
//     }
//     return 0;
//  }


//  check char 

//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//     char ch;
//     cout<<"Enter a character: ";
//     cin>>ch;
//     if(ch>='a'&&ch<='z')
//     {
//         cout<<"It is lower Case"<<endl;
//     }
//     else if(ch>='A'&&ch<='Z')
//     {
//         cout<<"It is Upper Case"<<endl;
//     }
//     else if(ch>='0'&&ch<='9')
//     {
//         cout<<"It is a Number"<<endl;
//     }
//     else
//     {
//         cout<<"Enter a valid value!"<<endl;
//     }
//     return 0;
//  }

// sum of first n odd numbers 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i=1,sum=0;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     while(i<=n)
//     {
//         cout<<2*i<<" ";
//         sum+=2*i;
//         i++;
//     }
//     cout<<endl<<"The sum of Even numbers is: "<<sum<<endl;
//     return 0;
// }

// PATTERN PRINTING 

// 01 

//  ****
//  ****
//  ****

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Entre the value of 'n': ";
//     cin>>n;
//     int i=1;         // increment rows i=1,2,3
//     while(i<=n)
//     {
//         int j=1;     // increment column j=1,2,3 of nth row 
//         while(j<=n)
//         {
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;    // Enter after completion of each row i.e *****
//         i++;
//     }
//     return 0;
// }

// 02 

// 1 1 1 
// 2 2 2 
// 3 3 3 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Entre the value of 'n': ";
    cin>>n;
    int i=1;         // increment rows i=1,2,3...
    while(i<=n)
    {
        int j=1;     // increment column j=1,2,3... of nth row 
        while(j<=n)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;    // Enter after completion of each row i.e 1 1 1 1 
        i++;
    }
    return 0;
}