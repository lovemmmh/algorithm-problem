#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int temp = b;
    b = a;
    a = temp;
}

void sort(int n, int num[]){
    //冒泡排序
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(num[j]>num[j+1])
                swap(num[j],num[j+1]);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int num[n];
    int i = 0;
    while(i<n){
        cin>>num[i];
        i++;
    }
    sort(n,num);
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<' ';
    }
   return 0;
}
