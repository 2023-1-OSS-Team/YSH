#include <stdio.h>
#include <stdlib.h>
#include "BibleDiary.h"

int main(void)
{
    int choice;
    BibleDiary diary;
    // 다이어리 초기화 등 필요한 초기화 작업 수행
    
    while (1)
    {
        printf("다이어리 관리 프로그램\n");
        printf("1. 다이어리 작성\n");
        printf("2. 다이어리 제거\n");
        printf("3. 다이어리 검색\n");
        printf("4. 다이어리 수정\n");
        printf("5. 오늘의 추천 성경 보기\n");
        printf("6. 종료\n");
        printf("원하는 작업을 선택하세요: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addDiary(&diary); // 다이어리 작성 함수 호출
                break;
            case 2:
                deleteDiary(&diary); // 다이어리 제거 함수 호출
                break;
            case 3:
                searchDiary(&diary); // 다이어리 검색 함수 호출
                break;
            case 4:
                modifyDiary(&diary); // 다이어리 수정 함수 호출
                break;
            case 5:
                showRecommendedBible(); // 오늘의 추천 성경 보기 함수 호출
                break;
            case 6:
                // 프로그램 종료
                printf("프로그램을 종료합니다.\n");
                exit(0);
            default:
                printf("잘못된 선택입니다. 다시 선택하세요.\n");
                break;
        }
    }

    return 0;
}
