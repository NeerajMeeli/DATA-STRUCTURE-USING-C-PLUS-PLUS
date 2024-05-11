// Quick sort in C++

#include <iostream>
using namespace std;

// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] <<endl;
  cout << endl;
}

int partition(int array[], int low, int high) {
    
  int pivot = array[high];
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
     
      i++;

      swap(&array[i], &array[j]);
    }
  }
  
  swap(&array[i + 1], &array[high]);
  
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
      
   
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);

    
    quickSort(array, pi + 1, high);
  }
}

// Driver code
int main() {
    int n;
    cout<<"Enter the size of an array :";
    cin>>n;
    int data[n];
    cout<<"Enter the value of Queck sort :";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
  cout << "The Queck sort Unsorted Array: \n";
  printArray(data, n);
  
  
  quickSort(data, 0, n - 1);
  
  cout << "Sorted array in ascending order: \n";
  printArray(data, n);
}