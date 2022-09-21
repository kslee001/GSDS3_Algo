/*
카잉달력
네 개의 정수 M, N, x와 y가 주어질 때, 
<M:N>이 카잉 달력의 마지막 해라고 하면 
<x:y>는 몇 번째 해를 나타내는지 구하는 프로그램

<1:1>로 표현하고, 두 번째 해를 <2:2>로 표현하였다. 
<x:y>의 다음 해를 표현한 것을 <x':y'>이라고 하자. 
만일 x < M 이면 x' = x + 1이고, 그렇지 않으면 x' = 1이다. 
같은 방식으로 만일 y < N이면 y' = y + 1이고, 그렇지 않으면 y' = 1이다.

input :
네 개의 정수 M, N, x와 y (1 ≤ M, N ≤ 40,000, 1 ≤ x ≤ M, 1 ≤ y ≤ N) 

*/

#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int M, int N){
    int smaller = min(M, N);
    int bigger = max(M, N);
    int gcd = 0;
    if (bigger % smaller == 0) return smaller;
    else return GCD(bigger % smaller, smaller);
}

int LCM(int M, int N){
    return 0;

}

int WhatYear(int M, int N, int x, int y){

}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--){
        int M, N, x, y;
        cin >> M >> N >> x >> y;
        cout << WhatYear(M, N, x, y) << '\n';
    }
    return 0;
}