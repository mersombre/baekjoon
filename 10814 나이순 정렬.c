#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int age;
    char name[101];
} member;

int compare(member* a, member* b);

int main() {

    int n;
    scanf("%d", &n);

    // 구조체 포인터
    member* arr = (member*)malloc(n * sizeof(member));

    for (int i = 0; i < n; i++) {
        scanf("%d %s", &arr[i].age, &arr[i].name); // 구조체 포인터에 input 넣어줌
    }


    // 정렬할 배열, 요소 개수, 요소 크기, 비교 함수
    qsort(arr, n, sizeof(member), compare);

    for (int i = 0; i < n; i++) {
        printf("%d %s\n", arr[i].age, arr[i].name);
    }
    
    free(arr);
    
    return 0;
}

int compare(member* a, member* b) {

    // 구조체 포인터의 멤버에 접근할 때에는 ->를 사용  
    if (a->age > b->age) {
        return 1;
    }
    else if (a->age < b->age) {
        return -1;
    }
    else return 0;

    // 오름차순: a > b일 때 1, a == b일 때 0, a < b일 때 -1 반환

    // return (a->age > b->age ? 1 : (a->age < b->age ? -1: 0));
}
