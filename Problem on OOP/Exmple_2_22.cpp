# include <iostream >
using namespace std;
# define SIZE 10
// Declare a stack class for characters .
class stack
{
    char stck [ SIZE ];
    int tos ;
    char who ;
    public :
    stack ( char c);
    void push ( char ch);
    char pop ();
};

stack :: stack ( char c)
{
    tos = 0;
    who = c;
    cout << " Constructing stack " << who <<endl;
}

void stack :: push ( char ch)
{
    if(tos == SIZE )
    {
    cout << " Stack " << who << " is full"<<endl;
    return ;
    }
    stck [tos ] = ch;
    tos ++;
}
char stack :: pop ()
{
    if(tos ==0)
    {
    cout << " Stack " << who << " is empty"<<endl;
    return 0;
    }
    tos --;
    return stck [ tos ];
}
int main ()
{
    stack s1('A'), s2('B');
    int i;
    s1. push ('a');
    s2. push ('x');
    s1. push ('b');
    s2. push ('y');
    s1. push ('c');
    s2. push ('z');

    for (i=0; i <5; i++)
    cout << "Pop s1: " << s1.pop () <<endl;
    for (i=0; i <5; i++)
    cout << "Pop s2: " << s2.pop () <<endl;

    return 0;
}



