#include <iostream>
#include <string>
#include <algorithm> //reverse 함수가 있는 헤더파일

using namespace std;


int main() {
	string N; // 문자열 저장 변수 
	
    //0이 아니면 무한 반복
    while (N!="0") {
        cin >> N;
        string buf =N;
        reverse(N.begin(), N.end()); // 앞 뒤 바꿈
        if (N=="0") { // 즉시 탈출 ( 0 reverse하면 0)
            break;
        }
        else if(N == buf) { // 비교
            cout <<"yes\n";
        }else {
            cout <<"no\n";
        }
    }  
}
