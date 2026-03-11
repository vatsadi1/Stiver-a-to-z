#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i = 0;i<n;i++) {
        for(int j=0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;
    printPattern(n);

    return 0;
}


// output 


// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5