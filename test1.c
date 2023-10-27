#include <stdio.h>
void main()
{
    // 1. Upload
    printf("1. git init -> 처음에 무조건 해야함");
    printf("2. git add . -> (.)은 파일을 전부 올린다는 뜻(ex.git add index.html)도 가능");
    printf("3. git status -> 상태 알려줌");
    printf("4. git commit -m (큰)'first commit'(큰) -> commit은 히스토리 알려줌");
    printf("5. git remote -v -> 연결고리 확인");
    printf("6. git push origin master -v -> 마지막");

    // 2. remake
    printf("1. git add . -> 올리고");
    printf("2. git status . -> 바뀐 것 확인하고");
    printf("3. git commit -m (큰)'second commit'(큰). -> 히스토리 만들어주기");
    printf("4. git push origin master . -> 보내버리기");
}
