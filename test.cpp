#include <iostream>
using namespace std;

class Stack
{
    private:
        char stack[100];
        int topstack;
        bool abc;

    public:
        Stack()
        {
            topstack = 0;
        }
        int empty()
        {
            if(topstack==-1){
                return 1;
            }else{
                return 0;
            }
        }
        int full()
        {
            if(topstack==9)
            return 1;
            else
            return 0;
        }
        void push(char a)
        {
            if (!full())
            {
                topstack++;
                stack[topstack] = a;
            }else{
                cout<<"Stack is Full"<<endl;
            }
        }

        char pop()
        {
            char a;
            if(!empty())
            {
                a = stack[topstack];
                topstack--;
                return a;
            }else{
                cout<<"Stack is Empty"<<endl;
                return 0;
            }
        }
};


int main()
{
    char s;
    Stack st;
    cout << "Key in five characters : ";
    //cin >> s[0] >> s[1] >> s[2] >> s[3] >> s[4];
    for(int i=0; i<5; i++){
        cin >> s;
        st.push(s);  
    }
    cout << "The reverse order is " << endl;

    while(!st.empty()){
        cout << st.pop() << " ";  
    }
    // st.push(s[0]);
    // st.push(s[1]);
    // st.push(s[2]);
    // st.push(s[3]);
    // st.push(s[4]);
    // cout<<st.pop()<<endl;
    // cout<<st.pop()<<endl;
    // cout<<st.pop()<<endl;
    // cout<<st.pop()<<endl;
    return 0;
}