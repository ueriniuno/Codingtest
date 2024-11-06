#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int L;
    char arr[50];
    int result=0;
    long long M = 1234567891;
    long long r=1;
    cin >> L;
    
    for (int i=0; i<L; i++){
        cin >> arr[i];
        result = (result + (arr[i]-96) * r) % M;
        r = (r * 31) % M;
    }
    
    cout << result;
    return 0;
}