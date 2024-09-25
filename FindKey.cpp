
#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"Enter the number of elements in row: ";
    cin>>n;
    cout<<"Enter the number of elements in the column: ";
    cin>>m;
    int arr[n][m];
    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            cin<<arr[i][j];
        }
    }
    int key;
    cin>>key;
    return 0;
}
