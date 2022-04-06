//
//  main.cpp
//  进制转换
//
//  Created by sulon on 2022/3/30.
//

#include <iostream>
#include <string>
using namespace std;

// 十进制转二进制
string hexadecimal_10to2(int num)
{
    int val[10000];
    cin>> num;
    int i=0;
    while(num!=0){
        val[i]=num%2;
        num = num/2;
        i++;
//        cout<< i <<endl;
    }
    string a = "";
    while(i>0){
        i--;
//        cout << val[i]<< endl;
        // 真有你的c++
        a = a + char(val[i]+'0');
    }
    return a;
}

// 16进制转8进制
void hexadecimal_16to8()
{
    int n;
    cin >> n;
    string val[100];
    for (int k=0;k<n;k++)
    {
        string b;
        cin >> b;
        val[k] = b;
    }
    for(int i=0; i<n; i++)
    {
        string a = val[i];
        if(a=="0")
        {
            cout << 0 << endl;
            continue;
        }
        string t;
        for (int j=0; j<a.length();j++){
            switch(a[i])
            {
                case '0': t+="0000";
                    break;
                case '1': t+="0001";
                    break;
                case '2': t+="0010";
                    break;
                case '3': t+="0011";
                    break;
                case '4': t+="0100";
                    break;
                case '5': t+="0101";
                    break;
                case '6': t+="0110";
                    break;
                case '7':t+="0111";break;
                case '8':t+="1000";break;
                case '9':t+="1001";break;
                case 'A':t+="1010";break;
                case 'B':t+="1011";break;
                case 'C':t+="1100";break;
                case 'D':t+="1101";break;
                case 'E':t+="1110";break;
                case 'F':t+="1111";break;
                default:
                    cout<< "输入值有误！"<< endl;
                    return;
            }
        }
        int len = t.length();
        if(len%3==1){
            t= "00"+t;
        }
        else if(len%3==2)
        {
            t = "0"+t;
        }
        string res;
        int temp;
        // tag用来去首位0，也就是在第一个不为零的数字出现时再开始录入。显然此时要么第一位不为零，要么第二位不为零，只有这两种情况。但是如果输入0则不会返回0；所以要加点东西。
        int tag=0;
        for(int m=0;m<t.length();m=m+3)
        {
            temp = int(t[m]-'0')*4+int(t[m+1]-'0')*2+int(t[m+2]-'0');
            if(temp!=0)
                tag=1;
            if(tag==1)
                res = res + char(temp+'0');
        }
        cout << res <<endl;
    }
}
// 本程序不支持负数
int main(int argc, const char * argv[]) {
    hexadecimal_16to8();
    return 0;
}
