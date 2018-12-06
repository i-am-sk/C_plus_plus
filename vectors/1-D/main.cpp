#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <char> vowels {'a','e','i','o','u'};

    cout<<"Accessing elements using array\n";
    cout<<"======================================\n";
    cout<<vowels[0]<<endl;
    cout<<vowels[1]<<endl;
    cout<<vowels[2]<<endl;
    cout<<vowels[3]<<endl;
    cout<<vowels[4]<<endl;
    cout<<"======================================\n";

    cout<<"Accessing elements using vector\n";
    cout<<"======================================\n";

    cout<<vowels.at(0)<<endl;
    cout<<vowels.at(1)<<endl;
    cout<<vowels.at(2)<<endl;
    cout<<vowels.at(3)<<endl;
    cout<<vowels.at(4)<<endl;
    
    cout<<"======================================\n";
    cout<<"======================================\n";

    cout<<"\nASCII values of AEIOU\n";
    vector <int> vowel_s {'a','e','i','o','u'};



    cout<<"Accessing elements using array\n";
    cout<<"======================================\n";
    cout<<vowel_s[0]<<endl;
    cout<<vowel_s[1]<<endl;
    cout<<vowel_s[2]<<endl;
    cout<<vowel_s[3]<<endl;
    cout<<vowel_s[4]<<endl;
    cout<<"======================================\n";

    cout<<"Accessing elements using vector\n";
    cout<<"======================================\n";

    cout<<vowel_s.at(0)<<endl;
    cout<<vowel_s.at(1)<<endl;
    cout<<vowel_s.at(2)<<endl;
    cout<<vowel_s.at(3)<<endl;
    cout<<vowel_s.at(4)<<endl;
    
    cout<<"======================================\n";

    cout<<"There are "<<vowels.size()<<" elements in the vector";


    char add_alphabates {0};

    cout<<"\nEnter an alphabet to push or insert\n";
    cin>>add_alphabates;

    vowels.push_back(add_alphabates);

    cout<<"\nNow the combinations of vowels and alphabets are\n";

    cout<<"======================================\n";

    cout<<"Accessing elements using vector\n";
    cout<<"======================================\n";

    cout<<vowels.at(5)<<endl;
    vowels.pop_back();

    // cout<<vowels.at(5)<<endl;
     /*terminate called after throwing an instance of 'std::out_of_range'
    what():  vector::_M_range_check: __n (which is 5) >= this->size() (which is 5) */
}