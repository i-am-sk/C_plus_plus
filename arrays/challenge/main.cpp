#include<iostream>
#include<array>
#include<bits/stdc++.h>

#define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))

using namespace std;

int main(){

    int array1[] = {2,3,4,5,6,7,8,9};
    int size = my_sizeof(array1)/my_sizeof(array1[0]);
    
    cout<< "the array elements are\n" ;
    for(int i = 0; i< size - 1; i++){
       cout <<array1[i] <<"\n"; 
    }
    return 0;
}
