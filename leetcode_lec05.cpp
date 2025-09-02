// QUESTION NO.1
// 1281. Subtract the Product and Sum of Digits of an Integer
// Given an integer number n , return the difference between the product Of its digits and the sum of its digits.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=234;
//     int sum=0;
//     int product=1;
//     while(n!=0)
//     {
//         int rem=n%10;
//         sum+=rem;
//         product*=rem;

//         n/=10;
//     }
//     cout<<"Sum = "<<sum<<" Product = "<<product<<endl;
//     cout<<"Difference = "<<product-sum<<endl;
//     return 0;
// }

// QUESTION NO.2
// 191. Number of 1 Bits
// Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

// Method 1 Basic Level but long
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the Value of Number: ";
//     cin>>n;
//     int count=0;
//     int binary[32];
//     int index=0;

//     while(n!=0)
//     {
//         binary[index]=n%2; //stores remainder either '0' or '1'
//         n/=2;
//         index++;
//     }
//     // printing binary i.e reverse of remainder stored
//     for(int i=index-1; i>=0; i--)
//     {
//         cout<<binary[i]<<" ";
//     }

//     while(index>0)
//     {
//         if(binary[index-1]==1)
//         {
//             count++;
//         }
//         index--;
//     }
//     cout<<"\nThe number of '1' bits are = "<<count<<endl;
//     return 0;
// }

// Method 2 high level but faster and shorter

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the Value of Number: ";
//     cin>>n;

//     int count=0;
//     while(n!=0)
//     {
//         if(n&1)
//         {
//             count++;
//         }
//         n=n>>1;
//     }
//     cout<<"The number of '1' bits are = "<<count<<endl;
//     return 0;
// }

// QUESTION N0.3
// 7. Reverse Integer
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^32 <x< 2^32-1]

// Method 1 my approach

// #include<iostream>
// #include<climits>     // Limits overflow
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;

//     int arr[32];
//     int index=0;

//     // storing indiviual digits in array
//     while(n!=0)
//     {
//         arr[index]=n%10;
//         n/=10;

//         index++;
//     }

//     //Reversing the number
//     long long rev=0;              // 'long' for handling overflow
//     for(int i=0; i<index; i++)
//     {
//         rev=rev*10+arr[i];
//         if(rev>INT32_MAX || rev<INT32_MIN)
//         {
//             cout<<"Overflow Occured!"<<endl;
//             return 0;
//         }
//     }
//     cout<<"Revresed Number = "<<(int)rev<<endl;
//     return 0;
// }

// Babbar Bhai approach

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

// QUESTION N0.4
// 1009. Complement of Base 10 Integer
// The complement of an integer is the integer you get when you flip all the 0's to 1 's and all the 1's to 0's in its binary representation.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int m = n; // storing 'n' for later to do (~n)
//     int mask = 0;

//     if (n == 0)
//     {
//         cout << "Compliment = 1" << endl;
//     }
//     else
//     {
//         while (m != 0)
//         {
//             mask = (mask << 1) | 1;
//             m = m >> 1;
//         }
//         int ans = (~n) & mask;
//         cout << "Compliment = " << ans << endl;
//     }
//     return 0;
// }




#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n>INT32_MAX || n<INT32_MIN)
    {
        return 0;
    }
    else if(n==0)
    {
        cout<<false;
    }
    else if( ((n) & (n-1)) == 0)
    {
        cout<<true;
    }
    else{
        cout<<false;
    }
}