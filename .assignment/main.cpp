#include ".assignment/test.h"
using namespace std;

// 比较三个数的大小
//创建结构体Result 
struct Result
{
    int min;  //最小值
    int mid;  //中间值
    int max;  //最大值
};
//创建结构体变量result
struct Result result;
//创建函数Compare 接受三个参数abc，比较大小后返回结构体Result
//在函数中给结构体变量

void Compare(int array[], int len, Result& result)
{
    //我的算法

    
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int tem = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tem;
            }


        }


    }


    result.min = array[0];
    result.mid = array[1];
    result.max = array[2];
}
int main() {
    //输入abc
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "请输入三个数" << endl;
    cin >> a; 
    cin >> b;
    cin >> c;
    int array[] = { a,b,c };  //创建数组abc
    cout << "您输入的三个数分别为" << a << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;
    
    int len = sizeof(array) / sizeof(array[0]);
    //调用Compare函数
    Compare(array,len, result);
        //打印结果
        cout << "三个数中最大值是" << result.max << endl;
    cout << "三个数中中间值是" << result.mid << endl;
    cout << "三个数中最小值是" << result.min << endl;
    system("pause");

    return 0;
}