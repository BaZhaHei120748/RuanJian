#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<time.h>
#include<cmath>
#include<fstream>
int num; //算式数量
int imax;  //最大数
int nums;  //因子个数
int symbol;  //用户输入的运算符
int kuohao; //是否有括号
int xiaoshu;  //是否有小数
int shuchu;//输出形式
char fuhao[4]={'+','-','*','/'};  //运算符
using namespace std;
ofstream outfile;//数据写入文件

void intno(int n)//整形数无括号
{
    int i,a;
    a=(rand()%imax)+1;//得到一个1到imax的随机数a
    cout<<a;
    outfile<<a;
    for(i=1;i<nums;i++)
    {
        a=(rand()%imax)+1;//得到一个1到imax的随机数a
        cout<<fuhao[n-1]<<a;
        outfile<<fuhao[n-1]<<a;
    }
    cout<<"="<<endl;
    outfile<<"="<<endl;
}
void intyes(int n)//整形数有括号
{
    int k,i,a;
    n--;
    k=rand()%2;//随机生成"0"或"1"
    a=(rand()%imax)+1;//得到一个1到imax的随机数a
    if(k==0)
    {
        cout<<a;
        outfile<<a;
        a=(rand()%imax)+1;
        for(i=1;i<nums;i++)
        {
            a=(rand()%imax)+1;
            cout<<fuhao[n];
            outfile<<fuhao[n];
            k=rand()%2;
            if(k==1)
            {
                if(nums-i==1)
                {
                    cout<<a;
                    outfile<<a;
                    continue;
                }
                cout<<"("<<a<<fuhao[n];
                outfile<<"("<<a<<fuhao[n];
                a=(rand()%imax)+1;
                cout<<a<<")";
                outfile<<a<<")";
                i++;
            }
            else
            {
                cout<<a;
                outfile<<a;
            }
        }
        cout<<"="<<endl;
        outfile<<"="<<endl;
    }
    else
    {
        cout<<"("<<a<<fuhao[n];
        outfile<<"("<<a<<fuhao[n];
        a=(rand()%imax)+1;
        cout<<a<<")";
        outfile<<a<<")";
        for(i=2;i<nums;i++)
        {
            a=(rand()%imax)+1;
            cout<<fuhao[n];
            outfile<<fuhao[n];
            k=rand()%2;
            if(k==1)
            {
                if(nums-i==1)
                {
                    cout<<a;
                    outfile<<a;
                    continue;
                }
                cout<<"("<<a<<fuhao[n];
                outfile<<"("<<a<<fuhao[n];
                a=(rand()%imax)+1;
                cout<<a<<")";
                outfile<<a<<")";
                i++;
            }
            else
            {
                cout<<a;
                outfile<<a;
            }
        }
        cout<<"="<<endl;
        outfile<<"="<<endl;
    }
}
void intys()//生成整数四则运算
{
	int a;
	int x,i;
	if(kuohao==1)//不需要括号
	{
		if(symbol==1||symbol==2||symbol==3||symbol==4)//执行"+"运算
		{
		    intno(symbol);
		}
		else if(symbol==5)//执行混合运算
		{
		    a=(rand()%imax)+1;//得到一个1到imax的随机数a
		    cout<<a;
            for(i=1;i<nums;i++)
            {
                x=rand()%4;//随机得到"+" "-" "*" "/"中的一个
                a=(rand()%imax)+1;//得到一个1到imax的随机数a
                cout<<fuhao[x]<<a;
                outfile<<fuhao[x]<<a;
            }
            cout<<"="<<endl;
            outfile<<"="<<endl;
		}
	}
	else
	{
	    if(symbol==1||symbol==2||symbol==3||symbol==4)
        {
            intyes(symbol);
        }
        else if(symbol==5)
        {
            int k,i,a;
            k=rand()%2;//随机生成"0"或"1"
            a=(rand()%imax)+1;//得到一个1到imax的随机数a
            if(k==0)
            {
                cout<<a;
                outfile<<a;
                a=(rand()%imax)+1;
                for(i=1;i<nums;i++)
                {
                    x=rand()%4;//随机得到"+" "-" "*" "/"中的一个
                    a=(rand()%imax)+1;
                    cout<<fuhao[x];
                    outfile<<fuhao[x];
                    k=rand()%2;
                    if(k==1)
                    {
                       if(nums-i==1)
                       {
                           cout<<a;
                           outfile<<a;
                           continue;
                       }
                       x=rand()%4;//随机得到"+" "-" "*" "/"中的一个
                       cout<<"("<<a<<fuhao[x];
                       outfile<<"("<<a<<fuhao[x];
                       a=(rand()%imax)+1;
                       cout<<a<<")";
                       outfile<<a<<")";
                       i++;
                     }
                     else
                     {
                         cout<<a;
                         outfile<<a;
                     }
                 }
                 cout<<"="<<endl;
                 outfile<<"="<<endl;
             }
             else
             {
                 x=rand()%4;//随机得到"+" "-" "*" "/"中的一个
                 cout<<"("<<a<<fuhao[x];
                 outfile<<"("<<a<<fuhao[x];
                 a=(rand()%imax)+1;
                 cout<<a<<")";
                 outfile<<a<<")";
                 for(i=2;i<nums;i++)
                 {
                     a=(rand()%imax)+1;
                     x=rand()%4;//随机得到"+" "-" "*" "/"中的一个
                     cout<<fuhao[x];
                     outfile<<fuhao[x];
                     k=rand()%2;
                     if(k==1)
                     {
                         if(nums-i==1)
                         {
                            cout<<a;
                            outfile<<a;
                            continue;
                     }
                     x=rand()%4;//随机得到"+" "-" "*" "/"中的一个
                     cout<<"("<<a<<fuhao[x];
                     outfile<<"("<<a<<fuhao[x];
                     a=(rand()%imax)+1;
                     cout<<a<<")";
                     outfile<<a<<")";
                     i++;
                     }
                     else
                     {
                         cout<<a;
                         outfile<<a;
                     }
                  }
                  cout<<"="<<endl;
                  outfile<<"="<<endl;
              }
        }
    }
}
void floatno(int n)//小数无括号
{
    int i;
    float a;
    a=(float)rand()/RAND_MAX*imax+1.0;
    cout<<a;
    outfile<<a;
    for(i=1;i<nums;i++)
    {
        a=(float)rand()/RAND_MAX*imax+1.0;
        cout<<fuhao[n-1]<<a;
        outfile<<fuhao[n-1]<<a;
    }
    cout<<"="<<endl;
    outfile<<"="<<endl;
}
void floatyes(int n)//小数有括号
{
    int k,i;
    float a;
    n--;
    k=rand()%2;//随机生成"0"或"1"
    a=(float)rand()/RAND_MAX*imax+1.0;
    if(k==0)
    {
        cout<<a;
        outfile<<a;
        a=(float)rand()/RAND_MAX*imax+1.0;
        for(i=1;i<nums;i++)
        {
            a=(float)rand()/RAND_MAX*imax+1.0;
            cout<<fuhao[n];
            outfile<<fuhao[n];
            k=rand()%2;
            if(k==1)
            {
                if(nums-i==1)
                {
                    cout<<a;
                    outfile<<a;
                    continue;
                }
                cout<<"("<<a<<fuhao[n];
                outfile<<"("<<a<<fuhao[n];
                a=(float)rand()/RAND_MAX*imax+1.0;
                cout<<a<<")";
                outfile<<a<<")";
                i++;
            }
            else
            {
                cout<<a;
                outfile<<a;
            }
        }
        cout<<"="<<endl;
        outfile<<"="<<endl;
    }
    else
    {
        cout<<"("<<a<<fuhao[n];
        outfile<<"("<<a<<fuhao[n];
        a=(float)rand()/RAND_MAX*imax+1.0;
        cout<<a<<")";
        outfile<<a<<")";
        for(i=2;i<nums;i++)
        {
            a=(float)rand()/RAND_MAX*imax+1.0;
            cout<<fuhao[n];
            outfile<<fuhao[n];
            k=rand()%2;
            if(k==1)
            {
                if(nums-i==1)
                {
                    cout<<a;
                    outfile<<a;
                    continue;
                }
                cout<<"("<<a<<fuhao[n];
                outfile<<"("<<a<<fuhao[n];
                a=(float)rand()/RAND_MAX*imax+1.0;
                cout<<a<<")";
                outfile<<a<<")";
                i++;
            }
            else
            {
                cout<<a;
                outfile<<a;
            }
        }
        cout<<"="<<endl;
        outfile<<"="<<endl;
    }
}
void doubleys()//生成小数四则运算
{
	float a;
	int x,i;
	x=rand()%4;
	if(kuohao==1)
	{
		if(symbol==1||symbol==2||symbol==3||symbol==4)
		{
			floatno(symbol);
		}
		else if(symbol==5)
		{
		    a=(float)rand()/RAND_MAX*imax+1.0;
		    cout<<a;
		    for(i=1;i<nums;i++)
            {
                x=rand()%4;
                a=(float)rand()/RAND_MAX*imax+1.0;
                cout<<fuhao[x]<<a;
                outfile<<fuhao[x]<<a;
            }
            cout<<"="<<endl;
            outfile<<"="<<endl;
		}
	}
	else
	{
		if(symbol==1||symbol==2||symbol==3||symbol==4)
		{
			floatyes(symbol);
		}
		else if(symbol==5)
		{
		    int k;
			k=rand()%2;//随机生成"0"或"1"
            a=(float)rand()/RAND_MAX*imax+1.0;
            if(k==0)
            {
               cout<<a;
               outfile<<a;
               a=(float)rand()/RAND_MAX*imax+1.0;
               for(i=1;i<nums;i++)
               {
                   a=(float)rand()/RAND_MAX*imax+1.0;
                   x=rand()%4;//随机得到"+" "-" "*" "/"中的一个
                   cout<<fuhao[x];
                   outfile<<fuhao[x];
                   k=rand()%2;
                   if(k==1)
                   {
                      if(nums-i==1)
                      {
                         cout<<a;
                         outfile<<a;
                         continue;
                      }
                      x=rand()%4;//随机得到"+" "-" "*" "/"中的一个
                      cout<<"("<<a<<fuhao[x];
                      outfile<<"("<<a<<fuhao[x];
                      a=(float)rand()/RAND_MAX*imax+1.0;
                      cout<<a<<")";
                      outfile<<a<<")";
                      i++;
                   }
                   else
                   {
                      cout<<a;
                      outfile<<a;
                  }
               }
               cout<<"="<<endl;
               outfile<<"="<<endl;
            }
            else
            {
                x=rand()%4;//随机得到"+" "-" "*" "/"中的一个
                cout<<"("<<a<<fuhao[x];
                outfile<<"("<<a<<fuhao[x];
                a=(float)rand()/RAND_MAX*imax+1.0;
                cout<<a<<")";
                outfile<<a<<")";
                for(i=2;i<nums;i++)
                {
                    a=(float)rand()/RAND_MAX*imax+1.0;
                    x=rand()%4;//随机得到"+" "-" "*" "/"中的一个
                    cout<<fuhao[x];
                    outfile<<fuhao[x];
                    k=rand()%2;
                    if(k==1)
                    {
                       if(nums-i==1)
                       {
                           cout<<a;
                           outfile<<a;
                           continue;
                       }
                       x=rand()%4;//随机得到"+" "-" "*" "/"中的一个
                       cout<<"("<<a<<fuhao[x];
                       outfile<<"("<<a<<fuhao[x];
                       a=(float)rand()/RAND_MAX*imax+1.0;
                       cout<<a<<")";
                       outfile<<a<<")";
                       i++;
                   }
                   else
                   {
                       cout<<a;
                       outfile<<a;
                   }
                }
                cout<<"="<<endl;
                outfile<<"="<<endl;
             }
		}
	}
}
int main()
{
    cout<<"-----小学生四则运算练习系统-----"<<endl;
	cout<<"******************************** "<<endl;
	cout<<"      1: 请输入算式数量: "<<endl;
	cin>>num;
	cout<<"      2: 请输入最大数: "<<endl;
	cin>>imax;
	cout<<"      3: 请输出运算个数："<<endl;
	cin>>nums;
	cout<<"      4: 请输入运算符: "<<endl;
	cout<<"      1代表+ 2代表- 3代表* 4代表/ 5代表混合:"<<endl;
	cin>>symbol;
	cout<<"      5: 请选择数字类型: "<<endl;
	cout<<"      1代表整数 2代表小数"<<endl;
	cin>>xiaoshu;
	cout<<"      6: 请选择是否需要括号 "<<endl;
	cout<<"      1代表不需要括号 2代表需要括号"<<endl;
	cin>>kuohao;
	cout<<"      7: 请选择输出形式 "<<endl;
	cout<<"      1代表输出到文件 2代表打印机或打印到屏幕"<<endl;
	cin>>shuchu;
	if(shuchu==1)
    {
        outfile.open("test.txt");//数据写入文件
    }
	if(xiaoshu==1)
	{
		srand(time(NULL));//设置一个随机种子，每次运行都能保证随机种子不同
		for(int i=0;i<num;i++)
		{
			intys();
		}
	}
	else
	{
		srand(time(NULL));
		for(int i=0;i<num;i++)
		{
			doubleys();
		}
	}
	outfile.close();
	cout<<"******************************** "<<endl;
	return 0;
}
