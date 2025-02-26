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
//     cout<<"Enter the value of 'n': ";
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

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     int i=1;         // increment rows i=1,2,3...
//     while(i<=n)
//     {
//         int j=1;     // increment column j=1,2,3... of nth row 
//         while(j<=n)
//         {
//             cout<<i<<" ";
//             j++;
//         }
//         cout<<endl;    // Enter after completion of each row i.e 1 1 1 1 
//         i++;
//     }
//     return 0;
// }

// 03

// 1 2 3 4
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     int i=1;         // increment rows i=1,2,3...
//     while(i<=n)
//     {
//         int j=1;     // increment column j=1,2,3... of nth row 
//         while(j<=n)
//         {
//             cout<<j<<" ";
//             j++;
//         }
//         cout<<endl;    // Enter after completion of each row i.e 1 2 3 4 
//         i++;
//     }
//     return 0;
// }

// 04 

//3 2 1 
//3 2 1 
//3 2 1 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter  the value of 'n': ";
//     cin>>n;
//     int i=1;         // increment rows i=1,2,3...
//     while(i<=n)
//     {
//         int j=1;     // increment column j=1,2,3... of nth row 
//         while(j<=n)
//         {
//             cout<<n-j+1<<" ";      // rev of 'j'  formula-> "n-j+1"
//             j++;
//         }
//         cout<<endl;    // Enter after completion of each row i.e 3 2 1  
//         i++;
//     }
//     return 0;
// }


// 05 

// 1 2 3 4 
// 4 5 6 7 
// 9 10 11 12

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     int i=1;  
//     int count=1;     // count starts from 1       
//     while(i<=n)
//     {
//         int j=1;    
//         while(j<=n)
//         {
//             cout<<count<<" ";   
//             count++;            // to print increasing count in each row i.e '1 2 3 4 5'
//             j++;
//         }
//         cout<<endl;    
//         i++;
//     }
//     return 0;
// }

// 06 

// *
// * *
// * * *
// * * * *

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     int row=1;       
//     while(row<=n)
//     {
//         int col=1;    
//         while(col<=row)     // star depends on row's number i.e 1st row-> 1 star
//         {                                                    // 2nd row-> 2 star and so on...
//             cout<<"*"<<" ";             
//             col++;
//         }
//         cout<<endl;    
//         row++;
//     }
//     return 0;
// }



// 07 

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     int row=1;       
//     while(row<=n)
//     {
//         int col=1;    
//         while(col<=row)     // number in col depends on row's number i.e 1st row-> 1 
//         {                                                             // 2nd row-> 2 2 and so on...
//             cout<<row<<" ";             
//             col++;
//         }
//         cout<<endl;    
//         row++;
//     }
//     return 0;
// }


// 08 

// 1
// 1 2  
// 1 2 3 
// 1 2 3 4 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     int row=1;    
//     while(row<=n)    // depends on value of 'n' 
//     {
//         int col=1;    
//         while(col<=row)     // depends on row
//         {                                                             
//             cout<<col<<" ";      // number in each column depends on col value itself
//             col++;
//         }
//         cout<<endl;    
//         row++;
//     }
//     return 0;
// }


// 09

// 1
// 2 3
// 3 4 5
// 4 5 6 7


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     int row=1;    
//     while(row<=n)
//     {
//         int col=1;   
//         int value=row;      // number starting from row value i.e for '3rd' row -> '3 4 5'  
//         while(col<=row)     
//         {                                                             
//             cout<<value<<" ";  
//             value++;           
//             col++;
//         }
//         cout<<endl;    
//         row++;
//     }
//     return 0;
// }


// 10

// 1 
// 2 1
// 3 2 1 
// 4 3 2 1 

//#include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     int row=1;    
//     while(row<=n)
//     {
//         int col=1;    
//         while(col<=row)     
//         {                                                             
//             cout<<row-col+1<<" ";    // strating from row number but going in reverse order        
//             col++;
//         }
//         cout<<endl;    
//         row++;
//     }
//     return 0;
// }

// 11 

// A A A
// B B B 
// C C C

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     int row=1;
//     while(row<=n)
//     {
//         int col=1;
//         char ch='A'+(row-1);
//         while(col<=n)
//         {
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// 12 

// A B C
// A B C 
// A B C

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     int row=1;
//     while(row<=n)
//     {
//         int col=1;
//         char ch='A';
//         while(col<=n)
//         {
//             cout<<ch<<" ";
//             col++;
//             ch++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// 13

// A B C 
// D E F 
// G H I 


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     int row=1;
//     char ch='A';
//     while(row<=n)
//     {
//         int col=1;
//         while(col<=n)
//         {
//             cout<<ch<<" ";
//             ch++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// 14

// A B C 
// B C D 
// C D E

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     int row=1;
//     while(row<=n)
//     {
//         int col=1;
//         char ch='A'+(row-1);
//         while(col<=n)
//         {
//             cout<<ch<<" ";
//             col++;
//             ch++;
//         }
//         cout<<endl;
//         row++;
//     }
// }


// 15

// A 
// B B 
// C C C 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     int row=1;
//     char ch='A';
//     while(row<=n)
//     {
//         int col=1;
//         while(col<=row)
//         {
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         ch++;
//         row++;
//     }
// }

// 16

// A 
// B C 
// D E F   

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     int row=1;
//     char ch='A';              // counting horahi hai same as number question
//     while(row<=n)
//     {
//         int col=1;
//         while(col<=row)
//         {
//             cout<<ch<<" ";
//             ch++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// 17

// D 
// C D
// B C D 
// A B C D 


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     int row=1;
//     while(row<=n)
//     {
//         int col=1;
//         char start='A'+n-row;             // Starting character of row and incrementind it later 
//         while(col<=row)
//         {
//             cout<<start<<" ";
//             start++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// 18

//       *
//      **
//     ***
//    **** 


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows: ";
//     cin>>n;

//     int row=1;
//     while(row<=n)
//     {
//         int col=1;

//         int space=n-row;
//         while(space)      // printing space based on rows
//         {
//             cout<<" ";
//             space--;
//         }
//         while(col<=row)
//         {
//             cout<<"*";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }


// 19

// * * * *
// * * * 
// * * 
// * 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of 'n': ";
//     cin>>n;
//     int row=1;                                                  // ♦ ♦ ♦ ♦           char value for 4
//     while(row<=n)                                              //  ♥ ♥ ♥             char = 3
//                                                                //  ☻ ☻
//                                                                 // ☺             these all we get when we print start(char)
//     {
//         int col=1;
//         int start=n-row+1;          
//         while(col<=start)
//         {
//             cout<<"*"<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }   


// 20 

//  * * * * 
//    * * * 
//      * * 
//        *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    int row=1;
    while(row<=n)
    {
        int col=1;

        int space=row-1;
        while(space)      // printing space based on rows
        {
            cout<<" ";
            space--;
        }
        int start=n-row+1;
        while(col<=start)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
    