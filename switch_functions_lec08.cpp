//  Calculator using switch

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     char op;
//     cout<<"Enter the Operands: ";
//     cin>>a>>b;
//     cout<<"Enter the ooperation to be performed: ";
//     cin>>op;

//     switch(op)
//     {
//         case '+' :
//             cout<<a<<"+"<<b<<" = "<<a+b<<endl;
//             break;
//         case '-' :
//             cout<<a<<"-"<<b<<" = "<<a-b<<endl;
//             break;
//         case '*' :
//             cout<<a<<"*"<<b<<" = "<<a*b<<endl;
//             break;
//         case '/' :
//             cout<<a<<"/"<<b<<" = "<<a/b<<endl;
//             break;
//         case '%' :
//             cout<<a<<"%"<<b<<" = "<<a%b<<endl;
//             break;
//         default :
//             cout<<"Invalid Operator!"<<endl;
//     }
//     return 0;
// }


// No of notes Required

// #include<iostream>
// using namespace std;

// int main()
// {
//     int amount;
//     cout<<"Enter the amount: ";
//     cin>>amount;

//     int notes100=0, notes50=0, notes20=0, notes1=0;

//     for(int i=1; i<=4; i++)
//     {
//         switch(i)
//         {
//             case 1 : 
//                 notes100=amount/100;
//                 amount%=100;
//                 break;
//             case 2 : 
//                 notes50=amount/50;
//                 amount%=50;
//                 break;
//             case 3 : 
//                 notes20=amount/20;
//                 amount%=20;
//                 break;
//             case 4 : 
//                 notes1=amount/1;
//                 amount%=1;
//                 break;
//         }
//     }

//     cout<<"--------------------------------------------"<<endl;
//     cout<<"No. 100 Notes required is: "<<notes100<<endl;
//     cout<<"No. 50 Notes required is: "<<notes50<<endl;
//     cout<<"No. 20 Notes required is: "<<notes20<<endl;
//     cout<<"No. 1 Notes required is: "<<notes1<<endl;

//     return 0;
// }


// FUNCTIONS 

// Power of a -> b using function
// #include<iostream>
// using namespace std;

// int power(int a, int b)
// {
//     int pow=1;
//     for(int i=1; i<=b; i++)
//     {
//         pow=pow*a;
//     }
//     return pow;
// }

// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     int pow = power(a,b);   // need to store the returned value else nothing happens
//     cout<<"Ans = "<<pow<<endl;
//     return 0;
// }


// Even Odd check function

// #include<iostream>
// using namespace std;

// bool isEven(int n)
// {
//     if(n%2==0)         // another method n&1 == 1 (Odd) bitwise &
//         return true;
//     else
//         return false;
// }

// int main()
// {
//     int num;
//     cin>>num;

//     if(isEven(num))
//         cout<<"Number is Even"<<endl;
//     else
//         cout<<"Number is Odd"<<endl;
//     return 0;
// }

// nCr using fuction
// nCr = n! / (r! * (n – r)!)

// #include<iostream>
// using namespace std;

// int factorial(int n)
// {
//     int fact=1;
//     if(n<0)
//     {
//         cout<<"Factorial of negative number doesn't Exist"<<endl;
//         return 0;
//     }
//     else if(n==0)
//         return 1;
//     else{
//         for(int i=1; i<=n; i++)
//         {
//             fact*=i;
//         }
//     }
//     return fact;
// }

// int nCr(int n, int r)
// {
//     int ans=factorial(n)/(factorial(r)*(factorial(n-r)));   // calling 'Factorial' func
//     return ans;
// }

// int main()
// {
//     int n,r;
//     cout<<"Enter the Value of n: ";
//     cin>>n;
//     cout<<"Enter the value of r: ";
//     cin>>r;

//     cout<<"nCr = "<<nCr(n,r)<<endl;              // calling 'nCr' func
//     return 0;
// }


// Printing Counting

// #include<iostream>
// using namespace std;

// void printCounting(int n)
// {
//     for(int i=1; i<=n; i++)
//     {
//         cout<<i<<" ";
//     }
// }

// int main()
// {
//     int num;
//     cout<<"Enter a Number: ";
//     cin>>num;

//     printCounting(num);
//     return 0;
// }



// Prime Number Check

#include<iostream>
using namespace std;

bool isPrime(int n)
{
    int count=0;             // Always initizile to zero '0'
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(n<1 || count>2)
        return false;
    else  
        return true;
}

int main()
{
    int num;
    cout<<"Enter a Number: ";
    cin>>num;

    if(isPrime(num))
        cout<<"It is Prime Number"<<endl;
    else   
        cout<<"Not a Prime Number"<<endl;
    return 0;
}