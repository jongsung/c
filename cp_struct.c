#include <stdio.h>
#include <string.h>
#define  STR_LEN    50
#define  BOOK_INFO_NUM   3

typedef struct bookInfo{
    char bookTitle[STR_LEN];
    char bookPub[STR_LEN];
    int bookPrice;
}bookInfo;

int numOfData=0;
bookInfo bookInfoList[BOOK_INFO_NUM];

int InsertList(bookInfo* bookPtr);

int main(void)
{
    int i, num;
    bookInfo book;
    
    puts("********* 도서 정보 입력 *********");
    for(i=0; i<BOOK_INFO_NUM; i++)
    {
        printf("%d번째 도서 정보 입력. \n", (i+1));
        
        fputs("도서 제목: ", stdout);
        gets(book.bookTitle);
        
        fputs("출판사 명: ", stdout);
        gets(book.bookPub);
        
        fputs("도서 가격: ", stdout);
        scanf("%d", &(book.bookPrice));
        fflush(stdin);
        
        num=InsertList(&book);
        if(num==-1)
            printf("입력에 실패하였습니다. \n");
        else
            printf("%d번째 입력 완료.......\n\n", num);
    }
    
    puts("********* 도서 정보 출력 *********");
    for(i=0; i<BOOK_INFO_NUM; i++)
    {
        printf("%d번째 도서 정보 출력. \n", (i+1));
        printf("도서 제목: %s \n", bookInfoList[i].bookTitle);
        printf("출판사 명: %s \n", bookInfoList[i].bookPub);
        printf("도서 가격: %d \n\n", bookInfoList[i].bookPrice);
    }
    
    return 0;
}

int InsertList(bookInfo* bookPtr)
{
    int idx;
    int inputIdx=numOfData;
    
    if(numOfData >= BOOK_INFO_NUM)
        return -1; // -1은 입력 실패를 의미
        
    /** 입력 위치 찾기 **/
    for(idx=0; idx<numOfData; idx++)
    {
        if(strcmp(bookInfoList[idx].bookTitle, bookPtr->bookTitle) >0) 
        {
            inputIdx=idx;
            break;
        }
    }
    
    /** 입력이 가능하도록 자리를 마련 **/
    for(idx=numOfData; idx>inputIdx; idx--)
        bookInfoList[idx]=bookInfoList[idx-1];
    
    /** 새로운 데이터 입력 **/
    bookInfoList[inputIdx]=(*bookPtr);
    
    /** 입력 성공 시 입력된 데이터 개수 반환 **/
    return ++numOfData;
}
