#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i = 0;i<n;i++) {
        for(int j=0;j<i;j++){
            cout<<j+1<<" ";
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
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5