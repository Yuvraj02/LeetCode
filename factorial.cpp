#include <iostream>

using namespace std;


int leastFrequent(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);
 
    // find the min frequency using linear traversal
    int min_count = n+1, res = -1, curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count < min_count) {
                min_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }
  
    // If last element is least frequent
    if (curr_count < min_count)
    {
        min_count = curr_count;
        res = arr[n - 1];
    }
 
    return res;
}

int getMaxRepeatingElement(int array[], int n) 
{
    int i, j, maxElement, count;
     int maxCount = 0;
    /* Frequency of each element is counted and checked.If it's greater than the utmost count element we found till now, then it is updated accordingly  */  
    for(i = 0; i< n; i++)   //For loop to hold each element
    {
        count = 1;
        for(j = i+1; j < n; j++)  //For loop to check for duplicate elements
        {
            if(array[j] == array[i])
            {
                count++;
                if(count > maxCount)
                {
                    maxElement = array[j];
                }
            }
        }
    }
    return maxElement;
}


int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){

   long long int res = factorial(10);

    cout<<res;

    return 0;
}