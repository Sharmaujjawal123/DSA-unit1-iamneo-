

// At a university, two student clubs, "Tech Wizards" and "Creative Minds," have decided to merge and form a new club called "Innovative Thinkers."



// As part of the merger process, the club leaders, Alex and Sarah, need to create a program that merges the member lists of the two clubs and identifies the unique members in the merged list.



// The program takes two arrays, arr1, and arr2, as inputs. Each array represents the member IDs of the respective clubs. Alex and Sarah want to combine the arrays and generate a single array, merged, containing all the unique member IDs.



// To ensure a seamless merger, the program should eliminate any duplicate member IDs and only include unique IDs in the merged array. This way, they can maintain a consolidated member list without repetition.



// Note: This is a sample question asked in Capgemini recruitment.

// Input format :
// The first line of input consists of the number of elements n in the first array.

// The second line of input consists of n-sorted elements, separated by space.

// The third line of input consists of the number of elements m in the second array.

// The fourth line of input consists of m-sorted elements, separated by space.

// Output format :
// The output prints the unique elements in the merged array, separated by space.

// Sample test cases :
// Input 1 :
// 5
// 1 2 3 4 5
// 7
// 4 5 6 6 7 7 8
// Output 1 :
// 1 2 3 4 5 6 7 8 
// Input 2 :
// 3
// 2 2 2
// 4
// 3 4 5 6
// Output 2 :
// 2 3 4 5 6 


// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int a,b,d=a,e=b;
    cin>>a;
    int arr[a];
    
    for (int i=0;i<a;i++){
        cin>>arr[i];
    }
    cin>>b;
    int arr1[b];
    for(int i=0;i<b;i++){
        cin>>arr1[i];
    }
    for (int i=0;i<a;i++){
        for (int j=i+1;j<a;j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;
                // d=d-1;
            }
            
        }
        for(int k=0;k<b;k++){
            if (arr[i]==arr1[k]){
                arr1[k]=-1;
                // e=e-1;
            }
        }
    }
    for(int i=0;i<b;i++){
        for (int j=i+1;j<b;j++){
            if(arr1[i]==arr1[j]){
                arr1[j]=-1;
                // e=e-1;
            }
        }
    }
    for (int i=0;i<a;i++){
        if(arr[i]!=-1){
            cout<<arr[i]<<" ";
        }
    }
        for(int i=0;i<b;i++){
            if(arr1[i]!=-1){
                cout<<arr1[i]<<" ";
            }
        }
    
    
}



// Rajesh wants to add elements of two arrays and display the merged array. Help Rajesh by writing a program to take input for two arrays and add both array elements and display the merged array.



// Note: This is a sample question asked in TCS recruitment.

// Input format :
// The first line of input consists of the number of elements in the first array n.

// The second line of input consists of n elements, separated by space.

// The third line of input consists of the number of elements in the second array m.

// The fourth line of input consists of m elements, separated by space.

// Output format :
// The output prints added and merged array elements, separated by space.

// Code constraints :
// 0 < n,m <= 500

// Sample test cases :
// Input 1 :
// 5
// 2 5 7 44 890
// 3
// 456 3 4
// Output 1 :
// 458 8 11 44 890 
// Input 2 :
// 7
// 23 40 120 70 100 150 220
// 4
// 40 5 10 18
// Output 2 :
// 63 45 130 88 100 150 220 



// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    int k=0,j=0,i=0;
    int q[n+m];
  while(i<n || j<m){
      if(i<n && j<m){
          q[k++]=arr[i++]+arr1[j++];
      }
      else if(i<n){
          q[k++]=arr[i++];
      }
      else{
          q[k++]=arr1[j++];
      }
  }
  for(int z=0;z<k;z++){
      cout<<q[z];
  }
}




// A library has two arrays representing two different sections of books: fiction and non-fiction. Merge the arrays to create a single catalog that includes all the books available in the library.

// Input format :
// The first line of input contains an integer n, which represents the number of fiction books.

// The next n lines of input contain the titles of the fiction books, separated by a line space.

// The next line of input contains an integer m, which represents the number of non-fiction books.

// The next m lines of input contain the titles of the non-fiction books, separated by a line space.

// Output format :
// The output displays the merged catalog, which is a combination of fiction and non-fiction books.



// Refer to the sample output for formatting specifications.

// Code constraints :
// Maximum size of each array (MAX_SIZE = 100).

// The number of fiction and non-fiction books should be non-negative integers.

// The titles of the books can contain any printable character.

// The code assumes that the user will input valid titles for the books.

// Sample test cases :
// Input 1 :
// 3
// Harry Potter and the Sorcerer's Stone
// To Kill a Mockingbird
// Pride and Prejudice
// 2
// A Brief History of Humankind
// A Memoir
// Output 1 :
// Catalog: 
// Harry Potter and the Sorcerer's Stone
// To Kill a Mockingbird
// Pride and Prejudice
// A Brief History of Humankind
// A Memoir
// Input 2 :
// 3
// The Great Gatsby
// Brave New World
// To Kill a Mockingbird
// 3
// A Brief History of Humankind
// A Memoir
// The Immortal Life of Henrietta Lacks
// Output 2 :
// Catalog: 
// The Great Gatsby
// Brave New World
// To Kill a Mockingbird
// A Brief History of Humankind
// A Memoir
// The Immortal Life of Henrietta Lacks


// You are using GCC
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin.ignore();
    char arr[n][100];
    for(int i=0;i<n;i++){
       cin.getline(arr[i],100);
    }
    cin>>m;
    cin.ignore();
    char arr1[m][100];
    for(int i=0;i<m;i++){
       cin.getline(arr1[i],100);
    }
    cout<<"Catalog:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    for(int i=0;i<m;i++){
        cout<<arr1[i]<<endl;
    }
}




// Rajesh wants to add elements of two arrays and display the merged array. Help Rajesh by writing a program to take input for two arrays and add both array elements and display the merged array in reverse order.



// Note: This is a sample question asked in HCL recruitment.

// Input format :
// The first line of input consists of the size of the array n.

// The second line of input consists of n elements inside the first array.

// The third line of input consists of the size of the array m.

// The fourth line of input consists of m elements inside the second array.

// Output format :
// The output prints the added and merged array elements, space-separated in reverse order.

// Sample test cases :
// Input 1 :
// 5
// 2 5 7 44 890
// 3
// 456 3 4
// Output 1 :
// 890 44 11 8 458 
// Input 2 :
// 7
// 23 40 120 70 100 150 220
// 4
// 40 5 10 18
// Output 2 :
// 220 150 100 88 130 45 63 


#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
cin>>m;
int arr1[m];
for(int i=0;i<m;i++){
    cin>>arr1[i];
    
}
int i=0,j=0,k=0;
int c[n+m];
while(i<n || j<m){
    if(i<n && j<m){
        c[k++]=arr[i++]+arr1[j++];
    }
    else if(i<n){
        c[k++]=arr[i++];
    }
    else{
        c[k++]=arr1[j++];
    }
}
    for(int q=(k-1);q>=0;q--){
        cout<<c[q]<<" ";
    }

}



// You have multiple arrays containing student grades for different subjects. You want to merge these arrays and calculate the average grade for each student. Write a function that takes these arrays as input and returns an array with the average grades.

// Input format :
// The first line of input contains the number of students (numStudents).

// The second line of input contains the number of subjects (numSubjects).

// The next numStudents lines contain numSubjects, space-separated grades for each student.

// Output format :
// The output displays the average grades for each student.

// Each line of output contains the average grade for a student in the format "Student [student_number]: [average_grade]" with a round off one digit.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 <= numStudents <= 100 (maximum number of students)

// 1 <= numSubjects <= 100 (maximum number of subjects)

// The grades are real numbers.

// Sample test cases :
// Input 1 :
// 2
// 4
// 70 80 90 100
// 60 80 100 70
// Output 1 :
// Average grades:
// Student 1: 85.0
// Student 2: 77.5
// Input 2 :
// 3
// 4
// 80 90 75 85
// 70 65 80 75
// 90 85 95 92
// Output 2 :
// Average grades:
// Student 1: 82.5
// Student 2: 72.5
// Student 3: 90.5


// You are using GCC
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double average(int arr[],int n,int s){
    double t=0;
    for(int i=0;i<n;i++){
        t=t+arr[i];
    }

    return round((t/n)*10)/10;
}
int main(){
    int s,n;
    // int avg[n]
    cin>>s;
    cin>>n;
    int arr[n];
    double avg[s];
    
//     int arr[n][s];
    for(int i=0;i<s;i++){
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        avg[i]=average(arr,n,s);
//         }
//         // cout<<endl;
    }
    cout<<"Average grades:"<<endl;
    for(int i=0;i<s;i++){
//         double t=0;
//         for(int j=0;j<s;j++){
//             t=(t+arr[i][j]);
//         }
        cout<<"Student"<<i+1<<":"<<fixed<<setprecision(1)<<avg[i]<<endl;;
    }
}



#include <iostream>
#include <iomanip> // Required for setprecision

// Function to merge and calculate average grades
void mergeAndCalculateAverage(const double gradeArrays[][100], int numStudents, int numSubjects, double averageGrades[]) {
    // Calculate the maximum number of subjects
    int maxSubjects = 0;
    for (int i = 0; i < numStudents; i++) {
        if (numSubjects > maxSubjects) {
            maxSubjects = numSubjects;
        }
    }

    // Initialize the averageGrades array
    for (int i = 0; i < numStudents; i++) {
        averageGrades[i] = 0;
    }

    // Merge and calculate average grades
    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numSubjects; j++) {
            averageGrades[i] += gradeArrays[i][j];
        }
        averageGrades[i] /= numSubjects;
    }
}




// Main function
int main() {
    const int MAX_STUDENTS = 100;
    const int MAX_SUBJECTS = 100;

    double gradeArrays[MAX_STUDENTS][MAX_SUBJECTS];
    double averageGrades[MAX_STUDENTS];
    int numStudents, numSubjects;

    // Read the number of students and subjects
    std::cin >> numStudents;
    std::cin >> numSubjects;

    // Read the grades for each student and subject
    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numSubjects; j++) {
            std::cin >> gradeArrays[i][j];
        }
    }

    // Merge and calculate average grades
    mergeAndCalculateAverage(gradeArrays, numStudents, numSubjects, averageGrades);

    // Display the average grades
    std::cout << "Average grades:\n";
    for (int i = 0; i < numStudents; i++) {
        std::cout << "Student " << i + 1 << ": " << std::fixed << std::setprecision(1) << averageGrades[i] << std::endl;
    }

    return 0;
}



// Pooja is an aspiring chef who loves experimenting with different recipes. She is currently working on a program that merges two arrays representing ingredients and prints the minimum ingredient required in the resulting array.



// Pooja often combines different ingredients from multiple recipes to create unique dishes. To keep track of the ingredients, she has created two arrays, arr1, and arr2, where each element represents a specific ingredient, and the value indicates the quantity required.



// To streamline her cooking process, Pooja wants to create a program that merges the two ingredient arrays and identifies the minimum ingredient required in the resulting array. By knowing the minimum ingredient, Pooja can ensure that she has enough of that ingredient on hand for her culinary experiments.



// Note: This is a sample question asked in Capgemini recruitment.

// Input format :
// The first line of input consists of the number of elements n in the first array.

// The second line of input consists of n elements, separated by space.

// The third line of input consists of the number of elements m in the second array.

// The fourth line of input consists of m elements, separated by space.

// Output format :
// The output prints the minimum element in the merged array.

// Sample test cases :
// Input 1 :
// 6
// 1 2 3 4 5 2
// 7
// 4 5 6 7 8 6 6
// Output 1 :
// 1
// Input 2 :
// 3
// 2 2 2
// 4
// 3 4 5 6
// Output 2 :
// 2



// You are using GCC#

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
        
    }
    cin>>b;
    int arr1[b];
    for(int j=0;j<b;j++){
        cin>>arr1[j];
    }
    int c=arr1[0];
    for(int j=0;j<b;j++){
        if(c>arr1[j]){
            c=arr1[j];
        }
    }
    for(int i=0;i<a;i++){
        if(c>arr[i]){
            c=arr[i];
        }
    }
        cout<<c;
    
}



// You are given two arrays of strings, and your task is to write a program that merges them into a single array, sorted alphabetically. The program should take two arrays as input, merge them, sort the merged array in alphabetical order, and output the sorted merged array.

// Input format :
// The input will be provided as follows:

// The first line contains an integer, size1, representing the size of the first array.

// The second line contains size1 space-separated strings, representing the elements of the first array.

// The third line contains an integer, size2, representing the size of the second array.

// The fourth line contains size2 space-separated strings, representing the elements of the second array.

// Output format :
// The output displays a single line containing the merged and alphabetically sorted array of strings, separated by spaces.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ size1, size2 ≤ 100: The sizes of both arrays

// Each string in the arrays will consist of lowercase or uppercase alphabetical characters and will have a length of at most 100.

// Sample test cases :
// Input 1 :
// 3
// Apple Banana Orange
// 2
// Grapes Mango
// Output 1 :
// Merged and sorted array: Apple Banana Grapes Mango Orange 
// Input 2 :
// 4
// cat dog elephant giraffe
// 3
// lion monkey tiger
// Output 2 :
// Merged and sorted array: cat d


// You are using GCC
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
int a,b;
cin>>a;
cin.ignore();
string arr[a+b];
for(int i=0;i<a;i++){
    cin>>arr[i];
}
cin>>b;
cin.ignore();
string arr1[b];
for(int i =0;i<b;i++){
    cin>>arr1[i];
}
int k=0;
string m[a+b];
cout<<"Merged and sorted array:";
for(int i=0;i<a;i++){
    m[i] = arr[i];
    
        
    }
    for(int i=0;i<b;i++){
        m[a+i]=arr1[i];
    }
    sort(m,m+a+b);
    for(int i=0;i<a+b;i++){
    
        cout<<m[i]<<" ";
    }

}