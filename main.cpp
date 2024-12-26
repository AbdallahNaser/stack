#include <iostream>

using namespace std;

const int MAX_SIZE=100;
template <class t>

class stack
{
    int top;
    t item[MAX_SIZE];

public:
    stack()
    {
        top=-1;
    }
    void push(t Element)
    {
        if(top>=MAX_SIZE-1)
        {
            cout<<"STACK full on Push";
        }
        else
        {
            top++;
            item[top]=Element;
        }
    }

    bool isEmpty()
    {
        return top<0;
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack empty on pop";
        }
        else
        {
            top--;
        }
    }
    void pop( t&Element)
    {
        if(isEmpty())
        {
            cout<<"Stack empty on pop";
        }
        else
        {
            Element=item[top];
            top--;
        }
    }
    void getTop( t&stackTop)
    {
        if(isEmpty())
        {
            cout<<"Stack empty on getTop";
        }
        else
        {
            stackTop=item[top];
            cout<<stackTop<<endl;
        }
    }

    void print()
    {
        cout<<"[";
        for(int i=top; i>=0; i--)
        {
            cout<<item[i]<<" ";

        }
        cout<<"]";
        cout<<"\n";


    }


};
int main()
{

stack<double> s;
s.push(5.2);
s.push(10);
s.push(15);
s.push(20);
s.print();

s.pop();
s.push(7);
s.print();






    return 0;
}
