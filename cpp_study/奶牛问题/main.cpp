//
//  main.cpp
//  奶牛问题
//
//  Created by sulon on 2022/3/29.
//

#include <iostream>
using namespace std;



int* get_cow(int n){
    if(n==0){
        int r[]={0,0,0,0};
        return r;
    }
    else if(n==1){
        int r[]={1,0,0,0};
        return r;
    }
    else{
        int c,s1,s2,s3;
        c= *get_cow(n-1);
        s1=*(get_cow(n-1)+1);
        s2=*(get_cow(n-1)+2);
        s3=*(get_cow(n-1)+3);
        int temp[4];
        temp[0]= c+s3;
        temp[1]= c+s3;
        temp[2]= s1;
        temp[3]= s2;
        return temp;
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int* a;
    int n;
    cin >> n;
    a = get_cow(n);
    int sum = 0;
    for(int i=0 ;i<4;i++){
        sum += *(a+i);
    }
    cout<< sum << endl;
    return 0;
}
