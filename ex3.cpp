#include <iostream>
int main(){
    // declare an array of 5 integers

    int arr[5]={1,2,5,8,1};


    // implement your logic to find max and min of the array and print them
    int min=arr[0],max=arr[0];
    for (int i=0; i<5; i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }

    for (int i=0; i<5; i++){
        if (min>arr[i]){
            max=arr[i];
        }
    }   
    std::cout << "Max: "<<max <<"\n";
    std::cout << "Min: "<<min;

}