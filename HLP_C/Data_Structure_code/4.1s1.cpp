//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//
//using namespace std;
//#define Ok 1
//#define Error 0
//typedef int Status;
//
//typedef struct {
//    char* ch;
//    int length;
//}HString;
//
//Status InitString(HString& T);
//int lenth(char* chars);
//Status StrAssign(HString& T, char* chars);
//void StrPrint(HString T);
//void StrWrite(HString& S, char c);
//HString Tongji(HString& T);
//
//
//Status InitString(HString& T) {
//    T.ch = NULL;
//    T.length = 0;
//    return Ok;
//}
//int lenth(char* chars) {
//    int i = 0;
//    for (i; chars[i]; i++);
//    return i;
//}
//
//Status StrAssign(HString& T, char* chars) {
//    int i, len = lenth(chars);
//    if (T.ch)
//        free(T.ch);
//    T.ch = (char*)malloc(len * sizeof(char));
//    if (!T.ch)
//        exit(Error);
//    for (i = 0; i < len; i++)
//        T.ch[i] = chars[i];
//    T.length = len;
//    return Ok;
//}
//
//
//void StrPrint(HString T) {
//    int i = 0;
//    while (i < T.length) {
//        cout << T.ch[i];
//        i++;
//    }
//    cout << endl;
//}
//
//
//void StrWrite(HString& S, char c) {
//    S.ch = (char*)realloc(S.ch, (S.length + 1) * sizeof(char));
//    if (!S.ch) {
//        exit(Error);
//    }
//    S.ch[S.length] = c;
//    S.length++;
//}
//
//HString Tongji(HString& T) {
//    HString S;
//    InitString(S);
//    int i, j, k;
//    char ch = '_';
//    for (i = 0; i < T.length; i = j) {
//        StrWrite(S, T.ch[i]);
//        j = i + 1;
//        char count = '1';
//        while (T.ch[i] == T.ch[j]) {
//            count = count + 1;
//            j++;
//        }
//        if (count > 0) {
//            //count=(char)count;
//            StrWrite(S, count);
//        }
//        StrWrite(S, ch);
//
//    }
//    return S;
//}
//
//int main() {
//    int i = 0;
//    HString T, S;
//    char chars[100];
//    printf("«Î ‰»Î£∫\n");
//    gets_s(chars);
//    InitString(T);
//    StrAssign(T, chars);
//    StrPrint(T);
//    S = Tongji(T);
//    StrPrint(S);
//}
//
