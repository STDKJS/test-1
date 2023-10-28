#include <stdio.h>
void main()
{
    // 올리기
    printf("1. git init -> 처음에 무조건 해야함");
    printf("2. git add . -> (.)은 파일을 전부 올린다는 뜻(ex.git add index.html)도 가능");
    printf("3. git commit -m (큰)'first commit'(큰) -> commit은 히스토리 알려줌");
    printf("4. git remote -v -> 연결고리 확인");
    printf("5. git push origin master -v -> 마지막");

    // 올리고 동기화 하는 법
    printf("1. git clone https://github.com/STDKJS/test-1.git freshman -> 어떤 폴더에? freshman 폴더(새로만듦)");
    printf("2. 폴더로 cd 해서 들어간 후");
    printf("3. 폴더로 cd 해서 들어간 후");
    printf("4. code . -> freshman 파일에 복사.");

    // 신입이 만든 파일 넣기 (master X )
    printf("1. git add .");
    printf("2. git add .");
    printf("3. git commit -m (큰)'freshman firtst commit'(큰)");
    printf("4. git push origin master -> 하면 XXXXXXXXXXX");
    printf("4. git checkout -b freshman -> freshman에 대한 공간을 새로 파준다(master -> freshman)");
    printf("5. git push origin freshman .");



}