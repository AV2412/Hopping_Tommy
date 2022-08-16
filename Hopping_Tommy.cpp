#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
void fn (int n, int * count){
    (*count)++;
    if (n==1 || n==2) { return;}
    else {
        if (n%2 == 0) fn(n/2,count);
        else fn(n/3,count);
    }
    return;
}
int main(){

    int n,curr,i,sum,num,steps,t;
    cin >> t;
    while(t--){
    int *count;
    map<int,int> m;
    for (i=0;i<n;i++) {cin >> curr;
    m[curr] = 0;
    }
    sum = (m.begin()->first) + (m.rbegin()->first);
    num = sum/n;
    *count = 0;
    fn(num,count);
    cout << *count << endl;
    }
}