#include <iostream>
using namespace std;
#define MAX 10
class Stack
{
    int top;
    
    public:
    int a[MAX];
    
    Stack(){ top=-1;};
    
    bool push(int n);
    int pop();
};

bool Stack::push(int n)
{
    if(top>=MAX)
    {
        cout<<"Stack over flow";
        return false;
    }
    else
    {
        a[++top]=n;
        cout<<n<<" got pushed\n";
        return true;
    }
}
int Stack::pop()
{
    if(top<0)
    {
        cout<<"Stack underflow";
    }
    else
    {
        return a[top--];
    }
}
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    
    cout<<s.pop()<<" got poped\n";
    

}