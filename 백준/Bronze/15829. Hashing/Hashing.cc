#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int L;
    char arr[50];
    int result=0;
    cin >> L;
    for (int i=0; i<L; i++){
        cin >> arr[i];
        result += (char(arr[i])-96) * pow(31, i);
    }
    
    cout << result;
    return 0;
}