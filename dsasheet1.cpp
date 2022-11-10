
// ************CONVERT DECIMAL INTO BINARY************
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Hello"<<endl;
//     cin>>n;

//     float ans = 0;
//     int i = 0;

//     while (n != 0) {
//         int bit = n&1;

//         ans = (bit * pow(10,i)) + ans;

//         n = n>>1;
//         i++;
//     }

//     cout<<"Answer is "<<ans<<endl;

// }


// ***********CONVERT BINARY INTO DECIMAL***************
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Hello"<<endl;
//     cin>>n;

//     float ans = 0;
//     int i = 0;


//     while (n!=0) {
//         int digit = n%10;

//         if (digit==1) {
//             ans = ans + pow(2, i);
//         }

//         n = n/10;
//         i++;
//     }

//     cout<<"Answer is "<<ans<<endl;


//     return 0;
// }


// **************REVERSE THE INTEGER************
// #include <iostream>
// #include<math.h>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Hello"<<endl;
//     cin>>n;

//     int ans = 0;
//     // int INT_MIN = pow(-2,31);
//     // int INT_MAX = pow(2,31);

//     while (n!=0) {
//         int digit;
//         digit = n%10;

//         if ((ans > INT64_MAX/10) || (ans < INT64_MIN/10)) {
//             return 0;
//         }

//         ans = (ans*10) + digit;
//         n = n/10;
//     }

//     cout<<ans<<endl;

//     return 0;
// }


// ***********FIND UNIQUE VALUE IN AN ARRAY**************
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {5,9,6,9,6};

//     int ans = 0;

//     for (int i=0; i<5;i++){
//         ans = ans^arr[i];
//     }

//     cout<<ans<<endl;

//     return 0;
// }


// *********FIND 3 NUMBER IN ARRAY WHICH IS EQUAL TO 7*********
// #include <iostream>
// using namespace std;

// int main() {
    
//     int arr[5]={1,2,3,4,5};

//     for (int i=0;i<5;i++) {
//         for (int j=i+1;j<5;j++) {
//             for (int k=j+1;k<5;k++) {
//                 if ((arr[i] + arr[j] + arr[k]) == 7) {
//                     cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//                 }
//             }
//         }
//     }


//     return 0;
// }


// ************SEARCH INDEX BY USING BINARY SEARCH************
// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key) {
//     int start = 0;
//     int end = size-1;

//     int mid = start + (end-start)/2;

//     while (start<=end) {
//         if (arr[mid]==key) {
//             return mid;
//         }
        
//         if (key>arr[mid]) {
//             start = mid + 1;
//         }

//         else {
//             end = mid-1;
//         }

//         mid = start + (end-start)/2;
//     }

//     return -1;
// }

// int main() {
//     int evenarr[6] = {6,8,23,56,98,100};

//     int evenIndex = binarySearch(evenarr,6,100);

//     cout<<" The Index is "<< evenIndex<<endl;


//     return 0;
// }


// ********BOOK ALLOCATION PROBLEM - LECTURE 15***********

// #include <iostream>
// using namespace std;

// bool isPossible(int arr[], int n, int m, int mid) {

//     int studentCount = 1;
//     int pageSum = 0;

//     for(int i=0;i<n;i++) {
//         if (pageSum + arr[i] <= mid) {
//             pageSum += arr[i];
//         }

//         else {
//             studentCount++;

//             if (studentCount>m || arr[i]>mid) {
//                 return false;
//             }
//             pageSum=arr[i];
//         }
//     }
//     return true;
// }


// int allocateBooks(int arr[], int n, int m) {
//     int s=0;
//     int sum=0;
//     for(int i=0;i<n;i++) {
//         sum+=arr[i];
//     }
//     int e=sum;
//     int ans = -1;

//     int mid = s + (e-s)/2;

//     while(s<=e) {
//         if(isPossible(arr,n,m,mid)) {
//             ans = mid;
//             e = mid-1;
//         }
//         else {
//             s = mid+1;
//         }
//         mid = s + (e-s)/2;
//     }

//     return ans;
// }

// int main() {
//     int arr[4]={10,20,30,40};

//     cout<<(allocateBooks(arr,4,2))<<endl;


//     return 0;
// }


// **********DELECTION SORT************
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {10,50,30,40,20};
//     int n=5;

//     for(int i=0;i<n-1;i++) {
//         int minIndex=i;

//         for(int j=i+1;j<n;j++) {
//             if (arr[j]<arr[minIndex]) {
//             minIndex = j;
//             }
//         }
//         int temp;
//         temp=arr[i];
//         arr[i]=arr[minIndex];
//         arr[minIndex]=temp;
//     }

//     for(int i=0;i<5;i++) {
//         cout<<arr[i];
//     }

//     return 0;
// }

// ************BUBBLE SORT*************

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[6] = {8,3,6,5,4,2};

//     int n = 6;

//     for (int i=1;i<n;i++) {

//         bool swapped= false;
//         for(int j=0;j<n-i;j++) {
//             if (arr[j]>arr[j+1]) {
//                 int temp;
//                 temp = arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 swapped = true;
//             }
//         }
//         if (swapped == false) {
//         break;
//         }
//     }

//     for (int i=0;i<6;i++){
//         cout<<arr[i]<<endl;
//     }

//     return 0;
// }


// **********INSERTION SORT**************

// #include <iostream>
// using namespace std;

// int main() {
    
//     int arr[]={10,1,7,4,8,2,11};
//     int n=7;

//     for (int i=1;i<n;i++) {

//         int temp=arr[i];
//         int j=i-1;
//         for(;j>=0;j--) {

//             if(arr[j]>temp) {
//                 arr[j+1]=arr[j];
//             }
//             else {
//                 break;
//             }
//         }
//         arr[j+1] = temp;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }

//     return 0;
// }


// ***********REVERSE A VECTOR*************
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> reverse(vector<int> v) {
//     int s = 0, e = v.size()-1;

//     while(s<=e) {
//         swap(v[s],v[e]);

//         s++;
//         e--;
    
//     }

//     return v;
// }

// void print(vector<int> v) {
//     for(int i=0;i<v.size();i++) {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main() {
//     vector<int> v;

//     v.push_back(11);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);

//     cout<<"Original vector: ";
//     print(v);

//     vector<int> ans = reverse(v);

//     cout<<"Reversed vector: ";
//     print(ans);

//     return 0;
// }


// *************MERGE 2 ARRAYS AND CREATE 3RD SORTED ARRAY***************
// #include <iostream>
// using namespace std;

// void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {

//     int i=0,j=0;
//     int k=0;

//     while(i<n && j<m) {
//         if(arr1[i]<arr2[j]) {
//             arr3[k++]=arr1[i++];
//         }
//         else {
//             arr3[k++]=arr2[j++];
//         }
//     }

//     while(i<n) {
//         arr3[k++]=arr1[i++];
//     }

//     while(j<m) {
//         arr3[k++]=arr2[j++];
//     }

// }

// void print(int arr[], int n) {
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


// int main() {
    
//     int arr1[5] = {1,3,5,7,9};
//     int arr2[3] = {2,4,6};

//     int arr3[8] = {0};

//     merge(arr1, 5, arr2, 3, arr3);

//     print(arr3, 8);


//     return 0;
// }


// ***********ROTATE ARRAY FOR K NUMBER OF POSITION***************
// #include <iostream>
// using namespace std;

// void rotate(int arr[], int n, int k) {
//     int temp[n];

//     for(int i=0; i<n;i++) {
//         temp[(i+k)%n] = arr[i];
//     }

//     for(int i=0;i<n;i++) {
//         cout<<temp[i]<<" ";
//     }cout<<endl;
// }

// int main() {
    
//     int arr[5] = {1,2,3,4,5};

//     rotate(arr, 5, 2);

//     return 0;
// }

// **********CHECK WHEATHER THE ARRAY IS SORTED AND ROTATED****************
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5]={4,5,1,2,3};
//     int n=5;

//     int count = 0;

//     for (int i=1;i<n;i++) {
//         if (arr[i-1]>arr[i]) {
//         count++;
//         }
//     }

//     if (arr[n-1]>arr[0]) {
//         count++;
//     }

//     if (count<=1) {
//         cout<<"Valid array"<<endl;
//     }
//     else {
//         cout<<"Invalid array"<<endl;
//     } 

//     return 0;
// }


// 
