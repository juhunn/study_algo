#include <bits/stdc++.h> 
using namespace std;


// 알고리즘 : 완전 탐색
// [문제 요약]
// 양의 정수가 적힌 N장의 카드 중 3장을 골라 숫자의 합이 M을 넘지 않으면서 M과 가까워야 함
// [입력 예]
// 5 21 (N, M)
// 5 6 7 8 9 (N장의 카드에 적힌 숫자)
int main() {
  int n, m;
  int arr[100];

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int result = 0;
  int tmp = 0;

  for (int i = 0; i < n-2; i++)
    for (int j = i+1; j < n-1; j++)
      for (int k = j+1; k < n; k++) {
        tmp = arr[i] + arr[j] + arr[k];
        if (tmp > result && tmp <= m)
          result = tmp;
      }
  cout << result;
  return 0;
}