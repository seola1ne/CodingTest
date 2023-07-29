// 1074 : [기초-반복실행구조] 정수 1개 입력받아 카운트다운 출력하기1
// https://codeup.kr/problem.php?id=1074&rid=0

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n) {
        cout << n-- << endl;
    }
	return 0;
}