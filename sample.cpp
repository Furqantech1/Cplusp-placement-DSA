// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"Asslamu walaikum Duniya";
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout<<"Enter you Age: ";
//     cin>>age;
//     if(age>=18)
//     {
//         cout<<"You are eligible to vote!"<<endl;
//     }
//     else{
//         cout<<"You are not eligible to vote"<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter the three Numbers: ";
//     cin>>a>>b>>c;
//     if(a>b)
//     {
//         if(a>c)
//         {
//             cout<<"A is greatest"<<endl;
//         }
//         else{
//             cout<<"C is greatest"<<endl;
//         }
//     }
//     else{
//         if(b>c)
//         {
//             cout<<"B is greatest"<<endl;
//         }
//         else{
//             cout<<"C is greatest"<<endl;
//         }
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter the three numbers: ";
//     cin>>a>>b>>c;
//     if((a>b) && (a>c))
//     {
//         cout<<"A is greatest"<<endl;
//     }
//     else if((b>a) && (b>c))
//     {
//         cout<<"B is greatest"<<endl;
//     }
//     else
//     {
//         cout<<"C is greatest"<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     float area=0.0;
//     cout<<"Enter the values of sides os triangle: ";
//     cin>>a>>b>>c;
//     float s=(a+b+c)/2;
//     area=sqrt(s*(s-a)*(s-b)*(s-c));
//     cout<<"The area of triangle is: "<<area<<" squnits"<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter the three sides of triangle: ";
//     cin>>a>>b>>c;
//     if((a+b)>c && (b+c)>a && (c+a)>b)
//     {
//         cout<<"The given sides form a valid triangle!"<<endl;
//     }
//     else 
//     {
//         cout<<"Does'nt form valid triangle"<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter the values of a and b: ";
//     cin>>a>>b;
//     (a>b) ? (cout<<"A is greater") : (cout<<"B is greater");
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter the values of oprands: ";
//     cin>>a>>b;
//     char op;
//     cout<<"Enter the operation need to be performed: ";
//     cin>>op;
//     switch(op)
//     {
//         case '+':
//         cout<<a<<"+"<<b<<"="<<a+b;
//         break;
//         case '-':
//         cout<<a<<"-"<<b<<"="<<a-b;
//         break;
//         case '*':
//         cout<<a<<"*"<<b<<"="<<a*b;
//         break;
//         case '/':
//         cout<<a<<"/"<<b<<"="<<(float)a/b;
//         break;
//         case '%':
//         cout<<a<<"mod"<<b<<"="<<a%b;
//         break;
//         default:
//         cout<<"Invalid operator!\nEnter a valid operator"<<endl;

//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int sum=0;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=0;i<=n;i++)
//     {
//         sum+=i;
//     }
//     cout<<"The sum of first "<<n<<" natural numbers is: "<<sum<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int sum=0;
//     cout<<"The first "<<n<<" even numbers are: ";
//     for(int i=1;i<=n;i++)
//     {
//         sum+=2*i;
//         cout<<2*i<<" ";
//     }
//     cout<<"\nThe sum of first "<<n<<" even number is: "<<sum<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n :";
//     cin>>n;
//     int sum=0;
//     cout<<"The first "<<n<<" odd numbers are: ";
//     for(int i=0;i<=n;i++)
//     {
//         sum+=(2*i+1);
//         cout<<(2*i+1)<<" ";
//     }
//     cout<<"\nThe sum of first "<<n<<" odd number is: "<<sum<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<"* ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<i<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<n-j+1<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int count=1;
    
//     int row=1;
//     while(row<=n)
//     {
//         int column=1;
//         while(column<=row)
//         {
//             cout<<count<<" ";
//             count++;
//             column++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n)
//     {
//         int column=1;
//         int value=row;
//         while(column<=row)
//         {
//             cout<<value<<" ";
//             value++;
//             column++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n)
//     {
//         int column=1;
//         // int value=row;
//         while(column<=row)
//         {
//             cout<<row-column+1<<" ";
//             // value--;
//             column++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
//     char ch='A';
//     while(row<=n)
//     {
//         int column=1;
//         while(column<=n)
//         {
//             cout<<ch<<" ";
//             column++;
//         }
//         cout<<endl;
//         row++;
//         ch++;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;

//     while(row<=n)
//     {
//         int column=1;
//         char ch='A';
//         while(column<=n)
//         {
//             cout<<ch<<" ";
//             ch++;
//             column++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
//     char ch='A';
//     while(row<=n)
//     {
//         int column=1;
//         while(column<=n)
//         {
//             cout<<ch<<" ";
//             ch++;
//             column++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n)
//     {
//         int column=1;
//         char ch='A'+row-1;
//         while(column<=n)
//         {
//             cout<<ch<<" ";
//             ch++;
//             column++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
//     char ch='A';
//     while(row<=n)
//     {
//         int column=1;
//         while(column<=row)
//         {
//             cout<<ch<<" ";
//             column++;
//         }
//         cout<<endl;
//         row++;
//         ch++;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
//     char ch='A';
//     while(row<=n)
//     {
//         int column=1;
//         while(column<=row)
//         {
//             cout<<ch<<" ";
//             column++;
//             ch++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n)
//     {
//         int column=1;
//         char ch='A'+n-row;
//         while(column<=row)
//         {
//             cout<<ch<<" ";
//             ch++;
//             column++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n)
//     {
//         int column=1;

//         int space=n-row;
//         while(space)
//         {
//             cout<<" ";
//             space--;
//         }
        
//         while(column<=row)
//         {
//             cout<<"*";
//             column++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n)
//     {
//         int column=1;
//         int start=n-row+1;
//         while(column<=start)
//         {
//             cout<<"*"<<" ";
//             column++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n)
//     {
//         int column=1;
//         int space=row-1;
//         while(space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int start=n-row+1;
//         while(column<=start)
//         {
//             cout<<row;
//             column++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n)
//     {
//         int column=1;

//         int space=n-row;
//         while(space)
//         {
//             cout<<" ";
//             space--;
//         }

//         while(column<=row)
//         {
//             cout<<row;
//             column++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n)
//     {
//         int column=1;

//         int space=row-1;
//         while(space)
//         {
//             cout<<" ";
//             space--;
//         }

//         int value=row;
//         int start=n-row+1;
//         while(column<=start)
//         {
//             cout<<value;
//             column++;
//             value++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
//     int count=1;
//     while(row<=n)
//     {
//         int column=1;

//         int space=n-row;
//         while(space)
//         {
//             cout<<" ";
//             space--;
//         }

//         while(column<=row)
//         {
//             cout<<count;
//             column++;
//             count++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n)
//     {
//         int column=1;

//         int space=n-row;
//         while(space)
//         {
//             cout<<" ";
//             space--;
//         }

//         while(column<=row)
//         {
//             cout<<column;
//             column++;
//         }

//         int start=row-1;
//         while(start)
//         {
//             cout<<start;
//             start--;
//             column++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int row=1;
    while(row<=n)
    {
        int column=1;

        int left=n-row+1;
        while(left)
        {
            cout<<column;
            column++;
            left--;
        }

        int stars=2*row-2;
        while(stars)
        {
            cout<<"*";
            stars--;
        }

        int right=n-row+1;
        while(right)
        {
            cout<<right;
            right--;
        }
        cout<<endl;
        row++;
    }
    return 0;
}