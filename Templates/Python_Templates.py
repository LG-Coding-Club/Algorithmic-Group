import sys

#! Week 1 - Binary Search

#Recursive Binary Search

def binarySearch(arr, l, r, x): 
    if r >= l: 
        mid = l + (r - l) // 2
        if arr[mid] == x: 
            return mid 
        elif arr[mid] > x: 
            return binarySearch(arr, l, mid-1, x) 
        else: 
            return binarySearch(arr, mid + 1, r, x) 
    else: 
        return -1

#Iterative Binary Search

def binary_Search(arr, l, r, x): 
    while l <= r:   
        mid = l + (r - l) // 2; 
        if arr[mid] == x: 
            return mid 
        elif arr[mid] < x: 
            l = mid + 1 
        else: 
            r = mid - 1
    return -1


#! Sorting
A = [64, 25, 12, 22, 11] 

#Selection Sort
def selectionSort():
    for i in range(len(A)): 
        min_idx = i 
        for j in range(i+1, len(A)): 
            if A[min_idx] > A[j]: 
                min_idx = j
        A[i], A[min_idx] = A[min_idx], A[i]