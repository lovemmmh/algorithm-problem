//
//  main.cpp
//  KMP
//
//  Created by sulon on 2022/3/14.
//
#include <typeinfo>
#include <iostream>
#include <cstring>
using namespace std;

int get_len(char a[]){
    cout << &a << endl;
    cout<< sizeof(a)<<endl;
    cout<< sizeof(a[0]);
    return sizeof(a)/sizeof(a[0]);
}

int* get_next(char a[]){
    cout << a << endl;
    cout << sizeof(a) << endl;
    int len = get_len(a);
    int next[len];
    next[0] = -1;
    int i=-1, j=0;
    while (j<len-1){
        if(a[i]==a[j]||i==-1){
            next[++j]=++i;
        }
        else{
            i = next[i];
        }
    }
    return next;
}

int main() {
    char s[] = "ababadasdasdas";
    cout << s << endl;
    cout << sizeof(s) << endl;
    int* value = get_next(s);
    for (int i=0; i<4; i++){
        cout << *(value+i) <<endl;
    }
    return 0;
}
