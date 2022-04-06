//
//  main.cpp
//  能量项链
//
//  Created by sulon on 2022/3/31.
//

#include <iostream>
using namespace::std;

int caculate(int j, int num[],int n)
{
    int res=0;
    int p=(j+1)%n,k=((j+n)-1)%n;
    int max = num[j];
    while(p!=k)
    {
        if(num[p]<num[k])
        {
            res+= num[p]*max*num[(p+1)%n];
            p = (p+1)%n;

        }
        else
        {
            res+= num[k]*max*num[((k+n)-1)%n];
            k=((k+n)-1)%n;
        }
    }
    res += max*max*num[p];
    return res;
}


void max_power()
{
    int n,res;
    cin >> n;
    if(n<2)
        return;
    int num[n];
    for(int i=0; i<n; i++)
    {
        cin>>num[i];
    }
    int max=0;
    int tag=-1;
    for(int j=0; j<n; j++)
    {
        if(max<num[j])
        {
            max = num[j];
            tag = j;
        }
    }
    res = caculate(tag, num, n);
    cout<< res;
    return;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    max_power();
    return 0;
}
