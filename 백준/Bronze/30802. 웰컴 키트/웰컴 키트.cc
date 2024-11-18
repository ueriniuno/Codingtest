#include <iostream>
using namespace std;

int main(){
    int N, T, P;
    int arr[6];
    int A=0;
    cin >> N;
    for(int i=0; i<6; i++){
        cin >> arr[i];
    }
    cin >> T >> P;
    for(int i=0; i<6; i++){
            A += (arr[i] + T -1) / T;
    }
    cout << A << endl;
    cout << N / P << " " << N % P;
    return 0;
}