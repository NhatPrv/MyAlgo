#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int n;  cin >> n;
    long long a[n];
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    int M[n];
    int result = 1;
    fill (M,M+n,1);
    for (int i=1;i<n;i++) {
        for (int j=0;j<i;j++) {
            if (a[i] > a[j]) {
                M[i] = max(M[i], M[j]+1);
            }
            if (result < M[i]) result = M[i];
        }
    }
    cout << result;
}