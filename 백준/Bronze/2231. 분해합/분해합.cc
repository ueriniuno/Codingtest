#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    bool flag=0;
    
    for(int i=1; i < N; i++){
        int sum=0;
        int temp = i;
        
        while(temp!=0){
            sum += temp % 10;
            temp = temp/10;
        }
        
        sum += i;
        
        if(sum == N){
            flag=1;
            cout << i;
            break;
        }
    }
    if(!flag) cout << 0;
    
}