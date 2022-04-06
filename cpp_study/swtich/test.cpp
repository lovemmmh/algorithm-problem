//
//  main.cpp
//  switch
//
//  Created by sulon on 2022/3/8.
//

#include <iostream>
#include <ctime>
#include <string>
using namespace::std;

struct student{
    int number;
    string name;
    int score;
};
// 结构体嵌套结构体
struct teacher{
    int number;
    string name;
    struct student stu;
};


int main(int argc, const char * argv[]) {
/* switch用法 */
//    int a;
//    cin >> a;
//    switch(a){
//        case 1: cout<< "有点生气"<< endl;
//            break;
//        case 2: cout<< "很生气" << endl;
//            break;
//        case 3: cout << "出离愤怒" << endl;
//    }
// game 猜数字
//    // 生成随机数种子
//    srand((unsigned int)time(NULL));
//    int a = rand()%201+(0);
//    int b;
//    cout << "请猜一个数字，在 0 到 200 之间" << endl;
//    do{
//        cin >> b;
//        if(b < a){
//            cout << "猜小了" << endl;
//        }
//        if(b > a){
//            cout << "猜大了" << endl;
//        }
//    }while(a != b);
//    cout << "恭喜你猜对了！答案就是" << b << endl;
//// 生成图形※
//    for(int i=0;i < 10; i++){
//        for(int j = 0; j < 10; j++){
//            cout << "* ";
//        }
//        cout << endl;
//    }
//    // 乘法口诀表
//    int value;
//    for (int j = 1; j < 10; j++){
//        for (int i = 1; i <= j; i++){
//            value = i*j ;
//            cout << i << "*" << j << "=" << value << "  ";
//        }
//            cout << endl;
//    }
//    // 测试指针数组的用法
//    double arr[] = {1,2,3,4,5,6,7,8,9,10};
////    cout << sizeof(arr);
//    double *p = arr;
//    cout << sizeof(p) << endl;
//    cout << p << endl;
//    cout << (p+1) << endl;
    // 测试字符串加减
    char a = '0';
    char b = '1';
    string c = "01";
    string d  = "1";
    int x = 5;
    char e = (char)(x%10+48);
    cout << e << endl;
    cout << a+b<<endl;
    cout << c+d<<endl;
    cout << c[0]-'0'<<endl;
    cout << b-'0'<<endl;
    cout << c+b+a+char(x) <<endl;
    cout << char(48) <<endl;
    //cout << c-d << endl; 报错

    return 0;
    
    
}

