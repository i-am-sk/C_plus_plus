#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector <vector<int>> matrix_A {
        {1,2,3},
        {5,6,7},
        {9,10,11}
    };

    cout<<"Elements in Matrix A is \n";
    cout<<matrix_A.at(0).at(0)<<endl;
    cout<<matrix_A.at(0).at(1)<<endl;
    cout<<matrix_A.at(0).at(2)<<endl;

    cout<<matrix_A.at(1).at(0)<<endl;
    cout<<matrix_A.at(1).at(1)<<endl;
    cout<<matrix_A.at(1).at(2)<<endl;

    cout<<matrix_A.at(2).at(0)<<endl;
    cout<<matrix_A.at(2).at(1)<<endl;
    cout<<matrix_A.at(2).at(2)<<endl;
}