#include<iostream>
using namespace std;

int main(){

    //Arrays of NUMBERS

    int array_numbers[5] = {1 ,2 ,3 ,4 ,5};

    cout<<array_numbers[0]<<endl;

    cout<<"\n=== Assign INDEX of 0 to 10 ======\n";

    array_numbers[0] = 10;

    cout<<"\n================ _INITIALIZER_LIST =========="<<endl;

    cout<<"\n"<<array_numbers[0]<<endl;
    cout<<array_numbers[1]<<endl;
    cout<<array_numbers[2]<<endl;
    cout<<array_numbers[3]<<endl;
    cout<<array_numbers[4]<<endl;
    
    //ARRAY OF STRINGS

    cout<<endl<<"====ARRAY OF STRINGS====="<<endl;
    
    string fruits[5] = {"Apple", "Orange", "Grapes" , "Mango", "Banana"};

    for(int i=0; i<5; i++){
        cout<<endl<<fruits[i]<<endl;
    }
}