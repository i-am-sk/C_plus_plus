#include<iostream>

#define SIZE 5
using namespace std;

template <class t>
class stack{

    int top;
    public:
    int a[SIZE];
    stack(){
        top= -1;
    }
    void push(int x);
    int pop();
    void display();
};

template <class t>
void stack<t>::push(int x){

    if(top==SIZE-1){
        std::cout<<"Stack Overflow\n";
    }
    else{
        a[++top]= x;
        std::cout<<"Inserted element is "<<x<<"\n";
    }
}

template <class t>

int stack<t>::pop(){

    if(top==-1){
        std::cout<<"Stack is UnderFlow\n";
        return 0;
    }
    else{
            int d=a[top--];
            return d;
    }
}

template <class t>

void stack<t>::display(){

    if(top==-1){
        std::cout<<"\nStack is empty\n";
    }
    else{
        std::cout<<"stack elements are \n";
        for(int i=top;i>=0;i--){
            std::cout<<a[i]<<"\n";
        }
    }
}


int main(){

    int item, x, ch;
    stack<int> s;

    while(1){

        std::cout<<"\n1.push\n";
        std::cout << "2.pop\n";
        std::cout << "3.display\n";
        std::cout << "4.exit";
        std::cout << "\nSelect your choice from the above following\n";
        std::cin >> ch;

        switch(ch){

            case 1:
                std::cout << "Enter the element to insert\n";
                std::cin >> x;
                s.push(x);
                break;
            case 2: item=s.pop();
                    std::cout<<"deleted element is "<<item<<"\n";
                    break;
            case 3: s.display();
            break;
            case 4: exit(0);
            default: std::cout<<"Invalid Response\n";
        }
    }
    return 0;
}