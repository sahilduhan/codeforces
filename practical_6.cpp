#include<iostream>
using namespace std;
class student
{
    int x , y , z;
    string s;
    public : 
    void get_data( int a, int b , int c , string k)
    {
        x = a;
        y = b;
        z = c;
        s = k;
        return;
    }
    void put_data()
    {
        cout<<"The name of the student is - "<<s<<endl;
        cout<<"The marks of the student are - "<<x<<" , "<<y<<" , "<<z<<endl;
    }
    friend float mark_avg( student m);
};
float mark_avg( student n)
{
    return (n.x + n.y + n.z)/3.0;
}
int main()
{
    student stu;
    int a, b ,c;
    string name;
    cout<<"Enter the name of the student - ";
    cin>>name;
    cout<<"Enter the marks of the student - ";
    cin>>a>>b>>c;
    stu.get_data(a,b,c,name);
    stu.put_data();
    cout<<"The average marks of "<<name<<" are - "<<mark_avg(stu);
    return 0;
}