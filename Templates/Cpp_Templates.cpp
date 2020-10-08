#include <bits/stdc++.h>
using namespace std;


//! Week 1 - Binary Search

//Recursive Binary Search
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

//Iterative Binary Search
int binary_Search(int arr[], int l, int r, int x) { 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
        if (arr[m] == x) 
            return m; 
        if (arr[m] < x) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
    return -1; 
} 


//! Sorting

//Selection Sort
void selectionSort(int arr[], int n) {  
    int i, j, min_idx;  
    for (i = 0; i < n-1; i++) {   
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;    
        swap(&arr[min_idx], &arr[i]);  
    }
}

void swap(int *xp, int *yp) {  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}

