// 1. Convert a number from decimal to binary 
// High level approach

// #include<iostream>
// #include<math.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     float ans=0;
//     int i=0;

//     while(n!=0)
//     {
//         int bit=n&1;          // bitwise '&'  operator
//         ans=(bit*pow(10,i))+ans;

//         n=n>>1;
//         i++;
//     }
//     cout<<"Binary = "<<ans<<endl;
//     return 0;
// }


// 2. Convert negative number from decimal to binary

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n :";
//     cin>>n;
//     int temp=n;
//     int ans=0;
//     int i=0;

//     while(n!=0)
//     {
//         int bit=n&1;
//         ans=(bit*pow(10,i))+ans;
//         n=n>>1;

//         i++;
//     }

//     int arr[32];
//     int index=0;
//     while(temp!=0)
//     {
//         arr[index]=n%10;
//         n=n/10;

//         index++;
//     }

//     // 2's complement

//     for(int i=0; i<index; i++)
//     {
//         if(arr[i]==0)
//         {
//             arr[i]=1;
//         }
//         else if(arr[i]==1)
//         {
//             arr[i]=0;
//         }
//     }

//     for(int i=index-1; i>=0; i--)
//     {
//         cout<<arr[i];      // Remember it 'i' 
//     }
// }


// #include<iostream>
// #include<math.h>
// using namespace std;

// class Solution {
// public:
//     int reverseBits(int n) {
//         int binary=0, i=0;
//         int temp=n;
//         while(n!=0)
//         {
//             int bit=(n&1);
//             binary=(bit*pow(10,i))+binary;
//             n=n>>1;
//             i++;
//         }
//         long long ans=0;
//         while(binary!=0)
//         {
//             int i=0;
//             int digit=binary%10;

//             if(digit==1)
//             {
//                 ans+=pow(2,i);
//             }
//             binary=binary/10;
//             i++;
//         }
//         return (int)ans;
//     }
// };




// Decimal to binary

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int ans=0;
    int i=0;

    while(n!=0)
    {
        int digit=n%10;

        if(digit==1)
        {
            ans+=pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<"Decimal = "<<ans<<endl;
    return 0;
}


