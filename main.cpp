#include "accounts.h" 
#include <iostream>
#include<fstream>
#include<iomanip>
#include <algorithm> 

using namespace std;

void bubbleSort(int arr[], int n){
for(int i = 0 ; i < n-1; i++){
    for(int j = 0; j < n - 1 - i; j++){
        if(arr[j] < arr[j+1]){
        double temp = arr[j] ;
        arr[j] = arr[j+1] ;
        arr[j+1] = temp ;
            }
        }   
    }
}
void printArray(int[], int);
void sortArrAsc(int[], int);

    int main(){

      fstream myFile;
      myFile.open("Results.txt", ios::app);//write
      if(myFile.is_open()) {
        myFile << "\nStart time for program 2: " << cpuTime() << endl;
        myFile.close();
      }
      
      std::cout << std::fixed;
      std::cout << std::setprecision(3);

      bubbleSort(accountBalances, maxAccounts);

      void printArray(int arrayVals[], int size); 
        cout << "\nPrinted Values in Array Descending: " << endl; 
        for(int i = 0; i < maxAccounts; i++) { 
        cout <<  " " << accountBalances[i] << ",";
        }

    myFile.open("Results.txt", ios::app);//append
      if(myFile.is_open()) {
        myFile << "\nEnd time for program 2: " << cpuTime() << endl;
        myFile.close();
      }
      

    return 0;
}