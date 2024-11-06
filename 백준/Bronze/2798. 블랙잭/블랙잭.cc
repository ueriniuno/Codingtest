#include <iostream>
using namespace std;

int main()
{
    int N, M, sum=0;
    int min_sum=-1;
    cin >> N >> M;
    int arr[N];
    for (int i=0; i<N; i++){
        cin >> arr[i];
    }
    
    for (int i=0; i<N-2; i++){
        for (int j=i+1; j<N-1; j++){
            for (int k=j+1; k<N; k++){
                sum=arr[i]+arr[j]+arr[k];
                if(sum>min_sum && sum<=M) min_sum=sum;
            }
        }
    }
    cout << min_sum;
    return 0;
}