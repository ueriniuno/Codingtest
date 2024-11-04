#include <iostream>
using namespace std;

int main()
{
    int N, sum=0, result;
    cin >> N;
    
    for(int i=0; i<N; i++){
        sum += i;
        if(N <= sum*6 + 1){
            result = i+1;
            break;
        }
    }
    cout << result;
    return 0;
}