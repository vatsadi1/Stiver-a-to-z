//Q-1 Largest in Array

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n = arr.size();
         int largest = 0;
if(n==0) return -1;
if(n==1)return arr[0];
    for(int i = 0;i<n;i++){
       
        if(largest <= arr[i]){
            largest = arr[i];
        }
         
    }
    return largest;
    
    }
};


// Q-2 Second Largest number in array

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n= arr.size();
        
        int largest = -1; int second = -1;
        
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                // ab tk ka jo larget value hoga usko second ko assign kro 
                second = largest;
                
                //arr[i] largest se bada hai to usko largest me daalo
                largest=arr[i];
            }
            
            // nahi to arr[i] chota hai largest se lakin second se to bada hi hoga 
            else if(arr[i] < largest && arr[i]>second){
                second = arr[i];
                
            }
            
        }
        return second;
    }
};