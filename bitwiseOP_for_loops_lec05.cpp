#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;
    
    // bitwise AND(&) operation
    cout<<"a&b = "<<(a&b)<<endl;  //In C++, the bitwise & operator has a lower precedence than the stream insertion operator (<<).
                                    // use prenthesis()
    // bitwise OR(|) operation
    cout<<"a|b = "<<(a|b)<<endl;

    // bitwise NOT(~) operation
    cout<<"~a = "<<(~a)<<endl;
    
   // bitwise XOR(^) operation
    cout<<"a^b = "<<(a^b)<<endl;



    // RIGHT SHIFT
    cout<<"17>>1 = "<<(17>>1)<<endl;
    cout<<"21>>2 = "<<(21>>2)<<endl;

    // LEFT SHIFT
    cout<<"19<<1 = "<<(19<<1)<<endl;
    cout<<"21<<2 = "<<(21<<2)<<endl;          
    return 0;

}