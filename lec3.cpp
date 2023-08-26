// Write a program to insert an element at a specific position in an array. The program should prompt the user to enter the position and the value to be inserted and then display the updated array.

// Input format :
// The first line of input consists of an integer, which represents the size of the array.

// The second line of input consists of the elements of the array, separated by space.

// The third line of input consists of an integer, which represents the position where they want to insert a new element.

// The last line of input consists of an integer, which represents the value to be inserted at the specified position.

// Output format :
// The output displays the original array before insertion and the updated array after insertion.



// Refer to the sample output for formatting specifications.

// Code constraints :
// Maximum size of the array (MAX_SIZE = 100).

// The size of the array should be a positive integer.

// The position where the user wants to insert the element should be a valid position within the array bounds (between 1 and size + 1, inclusive).

// The elements of the array can be both positive and negative integers.

// Sample test cases :
// Input 1 :
// 5
// 1 2 3 4 5
// 3
// 10
// Output 1 :
// Original array: 1 2 3 4 5 
// Updated array: 1 2 10 3 4 5 
// Input 2 :
// 5
// 1 2 3 4 5
// 8
// 10
 
// Output 2 :
// Original array: 1 2 3 4 5 
// Invalid position!


// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cin>>b;
    cin>>c;
    cout<<"Original array: ";
    for (int i=0;i<a;i++){
        cout<<" " <<arr[i];
    }
    cout<<endl;
    if(b<=a){
        // arr[b-1]=c;
        cout<<"Updated array: ";
        for(int i=a;i>=b;i--){
            // cout<<" "<<arr[i];
            arr[i]=arr[i-1];
            // arr[i]=c;
        }
        arr[b-1]=c;
        for(int i=0;i<=a;i++){
            cout<<arr[i];
        }
    }
    else{
        cout<<"Invalid position!";
    }
    
    
}


// Problem Statement



// You are developing a program for a mathematical research project. The project requires analyzing common elements between two arrays of integers. Your task is to write a program that takes user input for the size and elements of both arrays. The program should identify the common elements between the two arrays and display them as output.



// Note: This kind of question will be helpful in clearing Capgemini recruitment.

// Input format :
// The first line contains an integer, which represents the size of the first array.

// The second line contains the elements of the first array, separated by spaces.

// The third line contains an integer, which represents the size of the second array.

// The fourth line contains the elements of the second array, separated by spaces.

// Output format :
// The program outputs a line displaying the common elements between the two arrays.

// If no common elements are found, it outputs "None".



// Refer to the sample output for formatting specifications.

// Sample test cases :
// Input 1 :
// 4
// 1 2 3 4
// 3
// 3 4 5
// Output 1 :
// Common Elements: 3 4 
// Input 2 :
// 5
// 7 8 9 10 11
// 3
// 12 13 14
// Output 2 :
// Common Elements: None
// Input 3 :
// 10
// -1 -2 -3 -4 -5 0 1 2 3 4
// 5
// 0 -1 3 5 10
// Output 3 :
// Common Elements: -1 0 3 


// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int a,b,c=0;
    cin>>a;
    int arr[a];
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    cin>>b;
    int arr1[b];
    cout<<"Common Elements: ";
    for(int i=0;i<b;i++){
        cin>>arr1[i];
    }
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            if(arr[i]==arr1[j]){
                c=1;
                cout <<arr1[j];
            }
        }
    }
    if(c==0){
        cout<<"None";
        
    }
}





// You are developing a data analysis tool for a statistics company. The company needs a program that can analyze the frequency of elements in an array of integers. Your task is to write a program that takes user input for the size of the array and the elements of the array. The program should calculate the frequency of each element in the array and display the elements along with their frequencies.



// Note: This kind of question will be helpful in clearing AMCAT tests.

// Input format :
// The first line of input consists of an integer that represents the size of the array.

// The second line of input consists of an integer that represents the elements of the array, separated by spaces.

// Output format :
// The program outputs a series of lines, each representing an element and its frequency in the array.



// Refer to the sample output for formatting specifications.

// Sample test cases :
// Input 1 :
// 5
// 1 2 1 3 2
// Output 1 :
// Element   Frequency
// 1         2
// 2         2
// 3         1
// Input 2 :
// 6
// 4 2 4 4 6 2
// Output 2 :
// Element   Frequency
// 4         3
// 2         2
// 6         1



// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int a,b=0,c=0;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
        
    }
    cout<<"Element "<<"Frequency"<<endl;
    for (int i=0;i<a-1;i++){
        c=0;
        int j;
        for(j=i+1;j<a;j++){
            if(arr[i]==arr[j]){
                c=c+1;
                arr[j]=-1;
            
            }
            
        }
        if(arr[i]!=-1){
        cout<<arr[i]<<c+1<<endl;
        
    }


        
    }
}


// Imagine you are developing a text editor application, and you need to implement a feature that allows users to insert a new character at a specified position in an array of characters.



// Write a program that takes input from the user, including the size of the array, the characters for the array, the position for insertion, and the character to be inserted. The program should shift the elements of the array to make space for the new character and insert it at the specified position.



// Finally, the program should display the updated array after the insertion.

// Input format :
// The first line contains an integer representing the size of the array.

// The second line contains the characters for the array, separated by spaces.

// The third line contains an integer representing the position for insertion.

// The fourth line contains a single character representing the character to be inserted.

// Output format :
// The output should display the updated string after the insertion, separated by spaces.

// Code constraints :
// The maximum size of the array is 100.

// The size of the array should be a positive integer.

// The position for insertion should be a valid index in the range from 0 to size - 1.

// Sample test cases :
// Input 1 :
// 5
// a b c d e
// 2
// X
// Output 1 :
// Updated array after insertion: a b X c d e 
// Input 2 :
// 3
// p q r
// 0
// Z
// Output 2 :
// Updated array after insertion: Z p q r 



// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    char arr[a+1],q;
    for (int i=0;i<a;i++){
         cin>>arr[i];
    }
    cin>>b;
    cin>>q;
    for(int i=a;i>=b;i--){
        arr[i+1]=arr[i];
    }
    arr[b]=q;
    cout<<"Updated array after insertion: ";
    for(int i=0;i<=a;i++){
        cout<<arr[i]<<" ";
    }
}




// In a voting booth, voters cast their votes by entering the ID number of their preferred candidate. Your task is to develop a vote-counting system that identifies the majority candidate, i.e., the candidate who receives more than half of the total votes.



// You are provided with an array of integers representing the ID numbers of the candidates in the order they were voted for. Your system needs to determine if a majority candidate exists and, if so, declare them as the winner.



// Note: This kind of question will be helpful in clearing TCS recruitment.

// Input format :
// The first line contains a single integer, N, representing the number of votes cast.

// The second line contains N space-separated integers, representing the ID numbers of the candidates in the order they were voted for.

// Output format :
// The output prints the majority candidate ID.

// If no majority candidate exists, output "No majority candidate found"



// Refer to the sample output for formatting specifications.

// Sample test cases :
// Input 1 :
// 7
// 4 4 2 4 4 3 4
// Output 1 :
// The majority candidate is ID 4
// Input 2 :
// 6
// 1 2 3 4 5 6
// Output 2 :
// No majority candidate found

// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int a,c,d=0,e;
    cin>>a;
    int arr[a];
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    for (int i=0;i<a;i++){
        c=0;
        if(arr[i]>0){
        for(int j=i+1;j<a;j++){
            
            if(arr[i]==arr[j]){
                c=c+1;
                arr[j]=-1;
            }
            
        }
        
        if (d<c){
        d=c;
        e=arr[i];
        }
        }
    }
    if(d==0 or d<a/2){
        cout<<"No majority candidate found";
    }
    else{
        cout<<"The majority candidate is ID "<<e;
    }
    
}




// ﻿You are working on a scheduling application that manages the rotation of employees' shifts in a company. The application receives an array of employee IDs representing the current shift assignment. Your task is to rotate the shifts by a specified number of positions to accommodate changes in work schedules.



// Write a program that takes the size of the employee array, followed by the employee IDs, and the number of positions to rotate. The program should output the updated shift assignment after the rotation.

// Input format :
// The first line of input consists of an integer num, representing the number of employees.

// The second line of input consists of num space-separated integers representing the current shift assignment.

// The third line of input consists of an integer d, representing the number of positions to rotate.

// Output format :
// The output consists of a single line containing num space-separated integers, representing the updated shift assignment after rotation.

// Code constraints :
// The size of the employee array will not exceed 1000.

// The number of positions to rotate will be a non-negative integer.

// Sample test cases :
// Input 1 :
// 5
// 10 20 30 40 50
// 2
// Output 1 :
// 30 40 50 10 20 
// Input 2 :
// 6
// 10 20 30 40 50 60
// 3
// Output 2 :
// 40 50 60 10 20 30 


#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    int arr[a],arr1[a];
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    cin>>b;
    
    for(int i=b;i<a;i++){
         cout<<arr[i]<<" ";
        }
    for(int i=0;i<b;i++){
        cout<<arr[i]<<" ";
    }
  
}



// Write a program to insert an element at the beginning of an array and shift all the existing elements to the right. The program should prompt the user to enter the value to be inserted and then display the updated array.

// Input format :
// The first line of input contains an integer representing the size of the array.

// The second line of input contains the elements of the array, separated by a space.

// The last line of input contains an integer to enter the value to be inserted at the beginning of the array.

// Output format :
// The output displays the original array before insertion and the updated array after insertion.



// Refer to the sample output for formatting specifications.

// Code constraints :
// Maximum size of the array (MAX_SIZE = 100).

// The size of the array should be a positive integer.

// The elements of the array can be any integer.

// The value to be inserted can be any integer.

// Sample test cases :
// Input 1 :
// 5
// 1 2 3 4 5
// 6
// Output 1 :
// Original array: 1 2 3 4 5 
// Updated array: 6 1 2 3 4 5 
// Input 2 :
// 7
// 12 65 34 80 38 51 72
// 10
// Output 2 :
// Original array: 12 65 34 80 38 51 72 
// Updated array: 10 12 65 34 80 38 51 72 
// Input 3 :
// 5
// 8 -2 3 -4 6
// 4
// Output 3 :
// Original array: 8 -2 3 -4 6 
// Updated array: 4 8 -2 3 -4 6 



// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    int arr[a+1];
    for (int i=1;i<a+1;i++){
        cin>>arr[i];
        
    }
    cin>>b;
    arr[0]=b;
    cout<<"Original array: ";
    for(int i=1;i<a+1;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl<<"Updated array: ";
    for(int i=0;i<a+1;i++){
        cout<<arr[i]<<" ";
    }
}



