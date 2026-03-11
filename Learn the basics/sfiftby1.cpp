# include <iostream>
using namespace std;

void ShiftBy1(int arr[],int n){
   

    // step 1 : store last element

    int temp = arr[n-1];
    cout<<"temi value is:"<<temp<<"" <<endl;
    // step 2 : shift elements to the right
    for(int i = n; i>0; i--){
        arr[i]=arr[i-1];
        
    }
    arr[0]=temp;
}

int main(){

int arr[]={10,20,30,40,50};
int n=5;

ShiftBy1(arr,n);
for(int i =0;i<n;i++){
    cout << arr[i] << " ";
}
}
