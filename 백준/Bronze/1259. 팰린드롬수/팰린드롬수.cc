#include <iostream>
using namespace std;

int main(){
    int N, A;
    while(true){
        
        cin >> N;
        if(N == 0) break;
        
        int arr[5] = {};
        int i = 0;
        int sum = 0;
        
        while(N>0){
            arr[i] = N % 10;
            N = N / 10;
            A = i;        
            i++;
        }
        for (int i=0; i <= A/2; i++){
            if (arr[i]==arr[A-i]){
                sum = 1;
                continue;
            }
            else{
                sum=0;
                break;
            }
        }
        if (sum!=0) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}