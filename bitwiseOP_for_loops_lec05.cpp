// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=4;
//     int b=6;
    
//     // bitwise AND(&) operation
//     cout<<"a&b = "<<(a&b)<<endl;  //In C++, the bitwise & operator has a lower precedence than the stream insertion operator (<<).
//                                     // use prenthesis()
//     // bitwise OR(|) operation
//     cout<<"a|b = "<<(a|b)<<endl;

//     // bitwise NOT(~) operation
//     cout<<"~a = "<<(~a)<<endl;
    
//    // bitwise XOR(^) operation
//     cout<<"a^b = "<<(a^b)<<endl;



//     // RIGHT SHIFT
//     cout<<"17>>1 = "<<(17>>1)<<endl;
//     cout<<"21>>2 = "<<(21>>2)<<endl;

//     // LEFT SHIFT
//     cout<<"19<<1 = "<<(19<<1)<<endl;
//     cout<<"21<<2 = "<<(21<<2)<<endl;          
//     return 0;

// }


// FOR LOOP

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     cout<<"printing the numbers from 1 to n"<<endl;

//     for(int i=1;i<=n;i++)
//     {
//         cout<<i<<" ";
//     }
//     return 0;
// }


// dirty for -> for( ; ; )

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;

//     for(; ; )   // goes into infinite loop if break is not written
//     {
//         if(i<=n)
//         {
//             cout<<i<<" ";
//         }
//         else
//         {
//             break;
//         }

//         i++;
//     }
//     return 0;
// }


// using multiple values in for loop

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int a=0,b=1; a>=0&&b>=1; a--,b--)
//     {
//         cout<<a<<" "<<b<<endl;
//     }
//     return 0;
// }


// Sum of first 'n' natural numbers

// #include<iostream>
// using namespace std;
// int main()
// {
//     int sum=0;
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;

//     for(int i=1; i<=n; i++)
//     {
//         sum+=i;
//     }
//     cout<<"The sum of first "<<n<<" numbers is: "<<sum<<endl;
//     return 0;
// }


// Fibonacci series 0 1 1 2 3 5 8 13....

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     int a=0;
//     int b=1;
//     cout<<a<<" "<<b<<" ";
//     for(int i=1; i<=n; i++)
//     {
//         int sum=a+b;
//         cout<<sum<<" ";

//         a=b;              // Transfer the values
//         b=sum;
//     }
//     return 0;
// }



// Prime number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int check=0;

//     for(int i=1; i<=n; i++)
//     {
//         if(n%i==0)
//         {
//             check++;
//         }
//     }
//     if(check>2)
//     {
//         cout<<"Not a prime Number"<<endl;
//     }
//     else
//     {
//         cout<<"It is Prime Number"<<endl;
//     }
//     return 0;
// }


// Prime number using BREAK 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the Number: ";
//     cin>>n;

//     bool check=1;

//     for(int i=2; i<=(n-1); i++)
//     {
//         if(n%i==0)
//         {
//             check=0;
//             break;
//         }
//     }
//     if(check==0)
//     {
//         cout<<"Not Prime Number"<<endl;
//     }
//     else
//     {
//         cout<<"It is a Prime Number"<<endl;
//     }
//     return 0;
// }


