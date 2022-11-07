#include <iostream>
using namespace std;
int main()
{
    int n;
    int maxSum=0;
    int nowSum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int num;
        scanf("%d",&num);
        nowSum+=num;
        if(nowSum>maxSum)maxSum=nowSum;
        if(nowSum<0)nowSum=0;

    }

    printf("%d",nowSum);
    return 0;
}

