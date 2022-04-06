//
//  main.cpp
//  买不到的数目
//
//  Created by sulon on 2022/4/6.
//

#include <iostream>
using namespace::std;
int get_num(){
    int m,n,a,b;
    cin >> m;
    cin >> n;
    a = max(m,n);
    b = min(m,n);
    int tag = 0;
    // 当出现连续b个数目时，退出循环并返回这个值减b
    for(int val=1;tag<b;val++)
    {
        int tag1 = 0;
        for(int i=0; i*b<=val; i++)
        {
            if ((val-i*b)%a==0)
            {
                tag++;
                tag1 = 1;
                break;
            }
        }
        if(tag==b){
            return val-b;
        }
        if(tag1==0){
            tag = 0;
        }
    }
    return 0;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << get_num()<<endl;
    return 0;
}
