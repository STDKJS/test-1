#include <stdio.h>
void main()
{
    // 올리고 동기화 하는 법
    printf("1. git init -> 처음에 무조건 해야함");
    printf("2. git add . -> (.)은 파일을 전부 올린다는 뜻(ex.git add index.html)도 가능");
    printf("3. git commit -m (큰)'first commit'(큰) -> commit은 히스토리 알려줌");
    printf("4. git remote -v -> 연결고리 확인");
    printf("5. git push origin master -v -> 마지막");
}