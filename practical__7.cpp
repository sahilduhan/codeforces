#include<iostream>
using namespace std;
class operations
{
    int i , j;
    public :
    void get_data(int a , int b)
    {
        i = a;
        j = b;
        return;
    }
    void put_data()
    {
        cout<<"a = "<<i<<endl;
        cout<<"b = "<<j<<endl;
        return;
    }
    inline int add()
    {
        return i+j;
    }
    inline int subtract()
    {
        return i-j;
    }
    inline int multiply()
    {
        return i*j;
    }
    inline int divide()
    {
        return i/j;
    }
    inline int modulus()
    {
        return i%j;
    }
};
int main()
{
    operations op;
    cout<<"Enter the numbers - ";
    int a , b;
    cin>>a>>b;
    op.get_data(a,b);
    op.put_data();
    cout<<"MENU - "<<endl;
    fn1 : 
    int x;
    cout<<"1. Add"<<endl;
    cout<<"2. Subtract"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide"<<endl;
    cout<<"5. Modulus"<<endl;
    cout<<"6. Exit"<<endl;
    cout<<"Enter your choice - ";
    cin>>x;
    switch (x)
    {
        case 1 :
        {
            cout<<"a + b = "<<op.add()<<endl;
            goto fn1;
        }
        case 2 :
        {
            cout<<"a - b = "<<op.subtract()<<endl;
            goto fn1;
        }
        case 3 :
        {
            cout<<"a * b = "<<op.multiply()<<endl;
            goto fn1;
        }
        case 4 :
        {
            cout<<"a / b = "<<op.divide()<<endl;
            goto fn1;
        }
        case 5 :
        {
            cout<<"a % b = "<<op.modulus()<<endl;
            goto fn1;
        }
        case 6 :
        {
           return 0;
        }
    }
}