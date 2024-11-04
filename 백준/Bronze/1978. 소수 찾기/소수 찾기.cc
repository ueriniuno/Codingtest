#include <iostream>
using namespace std;

int main()
{
    int N, num;
    int sum=0;
    cin >> N;
    
    for(int i=0; i < N; i++){
        cin >> num;
        
        if(num < 2) continue;
        
        bool isPrime = true;
        
        for(int j=2; j <= num/2; j++){
            if (num % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime) sum+=1;
    }
    cout << sum;
    return 0;
}