#include<iostream>
using namespace std;
#define n 5
//Linear Search codes..
int arr[n];

void Linear(int key) {
    for(int i = 0; i < n ; i++) {
        if(arr[i] == key) {
            cout << "The index is : " << i << endl;
            break;
        }
        if(i == n-1) {
            cout << "Not in list " << endl;
            
        }
    }
}

//driver main
int main()
{
    int key ;
    cout <<"Enter the elements : " << endl;
    for(int i =0 ; i< n ; i++){
        cin >> arr[i] ;
    }
    cout <<  "Enter key : " << endl;
    cin >> key ;
    Linear(key);

 return 0;
}
/*
NOTE:
There are  two types of Searching Techniques
 1. Linear :
            It is a searching technique which is possible either sorted orr unsorted list...
            "  "     "          "        "        "         on small amount datas
            It is less faster than Binary Search because key is compared to each elements present in list
            Its time complexity is O(n)...
            Space Complexity : 
 2. Binary search :
            It

*/