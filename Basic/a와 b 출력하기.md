# a와 b 출력하기

### **문제 설명**

정수 `a`와 `b`가 주어집니다. 각 수를 입력받아 입출력 예와 같은 형식으로 출력하는 코드를 작성해 보세요.

---

### 제한사항

- 100,000 ≤ `a`, `b` ≤ 100,000

---

### 입출력 예

**입력**

> `4 5`
> 

**출력**

> `a = 4 
 b = 5`
> 

---

### 소스 코드

```cpp
#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
```

---

문제 출처 : 프로그래머스 코딩테스트 연습