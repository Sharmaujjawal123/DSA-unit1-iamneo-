// Arsh, an enthusiastic student with a passion for numbers, is preparing for a coding competition. He wants to master the art of solving problems related to arrays and algorithms.



// To sharpen his skills, he decides to create a program that helps users find the closest elements to a target value in a sorted array of integers. This program utilizes the power of binary search, ensuring efficient and accurate results.



// Arsh's program will be beneficial in various scenarios, such as finding the closest price to a given value in a stock market dataset or identifying the nearest location based on geographical coordinates.



// By implementing this feature, Arsh aims to enhance user experiences by providing quick and precise solutions to problems involving proximity and similarity within sorted arrays.



// Note: This is a sample question asked in Wipro recruitment.

// Input format :
// The first line of input consists of an integer n, representing the size of the array.

// The second line of input consists of n space-separated integers, representing the elements of the array in ascending order.

// The third line of input consists of an integer x, representing the target value.

// The fourth line of input consists of an integer k, representing the number of closest elements to find.

// Output format :
// The output displays k space-separated integers representing the k closest elements to the target value.

// Code constraints :
// 1 <= n <= 10

// -100 <= Array elements <= 100

// Array elements are given in ascending order.

// 1 <= k <= n (number of closest elements to find)

// Sample test cases :
// Input 1 :
// 5
// 2 4 6 8 10
// 5
// 3
// Output 1 :
// 6 4 8 
// Input 2 :
// 8
// 1 3 5 7 9 11 13 15
// 10
// 1
// Output 2 :
// 11 



#include <iostream>
using namespace std;

int findCrossOver(int arr[], int low, int high, int x)
{
    if (arr[high] <= x)
        return high;
    if (arr[low] > x)
        return low;

    int mid = (low + high) / 2;

    if (arr[mid] <= x && arr[mid + 1] > x)
        return mid;

    if (arr[mid] < x)
        return findCrossOver(arr, mid + 1, high, x);

    return findCrossOver(arr, low, mid - 1, x);
}

void printKclosest(int arr[], int x, int k, int n)
{
    int l = findCrossOver(arr, 0, n - 1, x);
    int r = l + 1;
    int count = 0;

    if (arr[l] == x)
        l--;

    while (l >= 0 && r < n && count < k)
    {
        if (x - arr[l] < arr[r] - x)
            cout << arr[l--] << " ";
        else
            cout << arr[r++] << " ";
        count++;
    }

    while (count < k && l >= 0)
        cout << arr[l--] << " ", count++;

    while (count < k && r < n)
        cout << arr[r++] << " ", count++;
}

int main()
{
    int n;
    std::cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int x;
    cin >> x;

    int k;
    cin >> k;

    printKclosest(arr, x, k, n);

    delete[] arr;

    return 0;
}




// You are developing a search feature for an online shopping platform. As part of the system, you need to implement a functionality that allows users to check if a specific item is available in the inventory.



// Write a program that prompts the user to enter the size of the inventory array and its respective elements. The program should use the linear search algorithm to determine if a target number is present in the array. If the target number is found, the program should display a message indicating its availability. Otherwise, it should display a message indicating that the target number is not available in the inventory.



// This feature will assist online shoppers in quickly checking if a specific item is available for purchase. It simplifies the search process and enables users to make informed decisions based on the availability of desired items.



// Note: This is a sample question asked in Infosys recruitment.

// Input format :
// The first line of input consists of the number of elements n in the array.

// The second line of input consists of n array elements, separated by space.

// The third line of input consists of the target value.

// Output format :
// The output prints whether the given target value is present in the array or not.



// Refer to the sample output for the exact format.

// Sample test cases :
// Input 1 :
// 5
// 6 8 7 4 2
// 2
// Output 1 :
// The target value 2 is present in the array.
// Input 2 :
// 5
// 6 8 7 4 2
// 1
// Output 2 :
// The target value 1 is not present in the array.


// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int a,b,c=0;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cin>>b;
    for(int i=0;i<a;i++){
        if(arr[i]==b){
            c=b;
        }
    }
    if(c==b){
            cout<<"The target value "<<b<<" is present in the array.";
        
    }
    else{
        cout<<"The target value "<<b<<" is not present in the array.";
    }
}



// Geetha is a researcher working on a data analysis project. She has been provided with a two-dimensional array that represents a dataset.



// Geetha needs to search for a specific target element in the dataset and determine all occurrences of the target element along with their respective indices.



// Write a program that prompts Geetha to enter the dimensions of the dataset and its elements. The program should perform a linear search on the dataset and identify all occurrences of the target element. It should then display the indices (row and column) of each occurrence of the target element in the dataset.



// This feature will greatly assist Geetha in analyzing and processing the dataset, enabling her to identify the specific locations of the target element. It streamlines the search process and allows for effective data exploration and manipulation.



// Note: This is a sample question asked in Deloitte recruitment.

// Input format :
// The first line of input consists of an integer, m, representing the number of rows in the 2D array.

// The second line of input consists of an integer, n, representing the number of columns in the 2D array.

// The next m lines contain n space-separated integers, representing the elements of the 2D array.

// The last line of input consists of an integer, target, representing the element to be searched in the array.

// Output format :
// If the target element is found in the array, output the indices of all occurrences of the target element in the format [m][n].

// If the target element is not found in the array, output the message "Element [target] not found."



// Refer to the sample output for the exact format.

// Code constraints :
// 1 <= m, n <= 10

// -100 <= Array elements <= 100

// Sample test cases :
// Input 1 :
// 3
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// 5
// Output 1 :
// [1][1]
// Input 2 :
// 3
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// 10
// Output 2 :
// Element 10 not found.


#include <iostream>
using namespace std;

void linearSearch2D(int** arr, int rows, int cols, int target) {
    bool found = false;


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == target) {
                cout << "[" << i << "][" << j << "]";
                found = true;
            }
        }
    }

    if (!found) {
        cout << "Element " << target << " not found.";
    }
}

int main() {
    int maxRows, maxCols;

    cin >> maxRows;
    cin >> maxCols;

    int** arr = new int*[maxRows];


    for (int i = 0; i < maxRows; i++) {
        arr[i] = new int[maxCols];
        for (int j = 0; j < maxCols; j++) {
            cin >> arr[i][j];
        }
    }

    int target;
    cin >> target;

    linearSearch2D(arr, maxRows, maxCols, target);

    // Free dynamically allocated memory
    for (int i = 0; i < maxRows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}


// another way

int main(){
    int a,b,t;
    cin>>a;
    cin>>b;
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
        
    }
    cin>>t;
    int r=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i][j]==t){
                r=1;
                cout<<"["<<i<<"]"<<"["<<j<<"]";
                
            }
        }
    }
    // int r=search(b,t,a,arr);
    if(r==(0)){
        cout<<"Element "<<t<<"not found.";
        
    }
    
}








// You are a participant in a treasure hunt game. The organizer of the game has hidden several treasure chests in a row, each containing a different amount of gold coins. The chests are arranged in ascending order of the number of gold coins they hold.



// You are given a list of integers called nums, which represents the number of gold coins in each treasure chest from left to right. The list nums is sorted in ascending order.



// Additionally, you are given a target number of gold coins that you need to find.



// Your task is to write a function that helps you search for the target number of gold coins in the treasure chests using binary search.



// The function should return the index of the chest that contains the target number of gold coins. If the target number exists in the list nums, return its index. Otherwise, if the target number does not exist in the list nums, return -1 to indicate that the target cannot be found.



// For example,



// Let's say the list nums represent the number of gold coins in each chest as [10, 20, 30, 40, 50].



// If the target is 30, the function should return 2 because the chest at index 2 contains 30 gold coins.
// If the target is 25, the function should return -1 because there is no chest with exactly 25 gold coins.
// Input format :
// The first line of input consists of the number of elements N in the array.

// The second line of input consists of N array elements, separated by space.

// The third line of input consists of the target value.

// Output format :
// The output prints the index value if the given target is found in the array.

// Otherwise, print -1.

// Code constraints :
// 0 < N <= 100

// Sample test cases :
// Input 1 :
// 5
// 10 20 30 40 50
// 30
// Output 1 :
// Target found at index: 2
// Input 2 :
// 5
// 10 20 30 40 50
// 25
// Output 2 :
// -1



// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int a,t,c=0;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cin>>t;
    int l=0,h=a-1;
    

    while( l<=h){
      int  m=(l+h)/2;
        if(arr[m]==t){
            cout<<"Target found at index:"<<m;
            c=1;
            break;
        }
        else if(arr[m]<t){
            l=m+1;
        }
        else{
            h=m-1;
        }
        
    }
    if(c==0){
        cout<<"-1";

}

}




// You are working on a data analysis project that involves analyzing a two-dimensional matrix representing data measurements. Each row and column of the matrix corresponds to a specific data point, and the matrix is sorted in ascending order both row-wise and column-wise.



// As a part of the data analysis process, you need to implement a function that finds the median value of the data represented by the sorted matrix using binary search.



// Write a function findMedian() that takes in the sorted matrix of integers, the number of rows, and the number of columns as inputs. The function should use binary search to find the median value of the data in the matrix.



// Assume that the number of elements in the matrix is always odd, so there is a definite median value. The function should return the median value found.



// Note: This is a sample question asked in Capgemini recruitment.

// Input format :
// The first line of input consists of the number of rows m and columns n, separated by space.

// The following lines of input consist of m*n elements.

// Output format :
// The output prints the median value in the given array.

// Sample test cases :
// Input 1 :
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1 :
// 5
// Input 2 :
// 5 5
// 10 11 12 13 15
// 21 22 26 29 31
// 32 34 36 38 40
// 41 42 43 44 45
// 56 57 58 59 60
// Output 2 :



#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int findMedian(int matrix[][100], int rows, int cols) {
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    // Find the minimum and maximum elements in the matrix
    for (int i = 0; i < rows; i++) {
        min_val = min(min_val, matrix[i][0]);
        max_val = max(max_val, matrix[i][cols - 1]);
    }

    int desired_count = (rows * cols + 1) / 2;  // Median position

    while (min_val < max_val) {
        int mid_val = min_val + (max_val - min_val) / 2;
        int count = 0;

        // Count the number of elements less than or equal to mid_val
        for (int i = 0; i < rows; i++) {
            count += upper_bound(matrix[i], matrix[i] + cols, mid_val) - matrix[i];
        }

        if (count < desired_count) {
            min_val = mid_val + 1;
        } else {
            max_val = mid_val;
        }
    }

    return min_val;
}

int main() {
    int rows, cols;
    cin >> rows;
    cin >> cols;

    int matrix[100][100];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int median = findMedian(matrix, rows, cols);
    cout << median ;

    return 0;
}




// Shyam is participating in a coding competition and has encountered a problem related to counting the occurrences of a given number in an array. He needs your help to solve this problem efficiently using binary search.



// The problem is as follows: Shyam is given an array of integers and a specific number. He wants to count the continual number of occurrences that result from this given number in the array. However, the array is sorted, which makes it easier to count the occurrences efficiently.



// Write a program that takes the number of elements, the array elements, and the target number as input, and returns the count of occurrences of the target number in the array using a binary search approach.



// Your task is to assist Shyam by providing a solution to the problem.



// Example



// Shyam wants to count the occurrences of the number 5 in the given array.



// Input:

// Number of elements: 10

// Array elements: [1, 4, 5, 5, 5, 8, 9, 9, 10, 15 ]

// Target number: 5



// Output:

// The number of occurrences of 5 in the array is 3.



// Explanation:

// The number of elements is 10, and the array of elements is [1, 4, 5, 5, 5, 8, 9, 9, 10, 15 ]. Shyam wants to count the occurrences of the number 5 in this array. The program uses binary search to efficiently count the occurrences and returns the result as 3, indicating that the number 5 appears three times in the array.

// Input format :
// The first line of input consists of the number of array elements, N.

// The second line of input consists of N elements separated by a space.

// The third line of input consists of the target element to find its continually occurring frequency.

// Output format :
// The output prints the frequency of the given target element.

// Code constraints :
// 0 < N <= 800

// Sample test cases :
// Input 1 :
// 10
// 1 4 5 5 5 8 9 9 10 15
// 5
// Output 1 :
// 3
// Input 2 :
// 10
// 1 2 2 2 2 3 4 7 8 8
// 10
// Output 2 :
// 0


#include <iostream>
using namespace std;

int countOccurrences(int arr[], int n, int target)
{
    int count = 0;

    // Perform binary search to find the first and last occurrences of the target number
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            count++;

            // Check for more occurrences towards the left side of the array
            int left = mid - 1;
            while (left >= 0 && arr[left] == target)
            {
                count++;
                left--;
            }

            // Check for more occurrences towards the right side of the array
            int right = mid + 1;
            while (right < n && arr[right] == target)
            {
                count++;
                right++;
            }

            break;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;

    cin >> target;

    int occurrences = countOccurrences(arr, n, target);

        cout << occurrences << std::endl;

    return 0;
}


