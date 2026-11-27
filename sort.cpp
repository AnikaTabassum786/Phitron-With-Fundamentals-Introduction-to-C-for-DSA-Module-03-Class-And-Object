#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    // sort(a,a+n); //ascending
    // sort(a+1,a+5);//  middle 3 digits 
    // sort(a+3,a+n);   last 3 digits
    // sort(a,a+4);// first 3 digits
    sort(a,a+n, greater<int>());
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }

    return 0;
}