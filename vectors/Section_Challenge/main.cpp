#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector <int> vector1 {};
    vector <int> vector2 {};

    int add_element {};
    cout<<"Enter element to add\n";
    cin>>add_element;

    vector1.push_back(add_element);

    cout<<"\nEnter one more element to add\n";
    cin>>add_element;

    vector1.push_back(add_element);

    cout<<"Elements in vector1 is: "<<vector1.at(0)<<" "<<vector1.at(1)<<"\nAnd the size of vector1 is:"<<vector1.size()<<endl;

    cout<<"\n Enter the element to add in vector2\n";
    cin>>add_element;

    vector2.push_back(add_element);

    cout<<"\nEnter one more element to add in vector2\n";
    cin>>add_element;

    vector2.push_back(add_element);

    cout<<"\nElements in vector2 is: "<<vector2.at(0)<<" "<<vector2.at(1)<<"\nand the size of vector2 is: "<<vector2.size()<<endl;

    vector <vector<int>> vector_2d {};

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout<<"\nElements in vector2D are:\n";
    cout<<"{\n\t";
    cout<<"{ ";
    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<" }\n";
    cout<<"\t{ ";
    cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<" }";
    cout<<"\n}";

    vector1.at(0) = 1000;//HERE WE ARE MAKING COPY OF VECTOR ELEMENT. SO, ELEMENT IN VECTOR2D AT 0'th INDEX WON'T CHANGE
    
    cout<<"\nChanged elements in vector 1 is: "<<vector1.at(0)<<endl;

    cout<<"\nDisplaying elements in vector2D after the change\n";

    cout<<"\nElements in vector2D are:\n";
    cout<<"{\n\t";
    cout<<"{ ";
    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<" }\n";
    cout<<"\t{ ";
    cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<" }";
    cout<<"\n}";

    cout<<"\nDisplaying elements in vector1 after the change:\n\n";

    cout<<"Elements in vector1 is: "<<vector1.at(0)<<" "<<vector1.at(1)<<"\nAnd the size of vector1 is:"<<vector1.size()<<endl;




}