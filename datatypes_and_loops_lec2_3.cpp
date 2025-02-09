// Checking wheter the number is Prime or Not

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

#include<iostream>
using namespace std;
int main()
{
    int n,i=1,sum=0;
    cout<<"Enter the value of 'n': ";
    cin>>n;
    while(i<=n)
    {
        cout<<2*i<<" ";
        sum+=2*i;
        i++;
    }
    cout<<endl<<"The sum of Even numbers is: "<<sum<<endl;
    return 0;
}