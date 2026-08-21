#include <iostream>
int main(){
    // declare an int and the array of 10 integers
    
    
    int numbers[10];

    // let the user enter 10 integers and store them in the array
    
    
    for (int i=0; i<10; i++){
        std::cout <<"enter number: ";
        std::cin >> numbers[i];
    }

    // print the numbers in reverse order

    std::cout << "reverse numbers: ";
    for (int i=9; i>=0; i--){
        std::cout << numbers[i] << " ";
    }

    // count the number of even numbers in the array and print it

    int count=0;
    for (int i=0; i<10; i++){
        if (numbers[i]%2==0){
            count ++;
        }
    }
    std::cout<<"even number: "<<count;
}