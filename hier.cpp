#include <isotream>
using namespace std;
int mian(void)
{
  int a,b;
  cout<<"请输入第一个整数"<<endl;
  cin>>a;
  cout<<"请输入第二个整数"<<endl;
  cin>>b;

  int avg=(a+b)/2;
  int max=a>b?a:b;
  int res1=(a%2)==(b%2)?avg:max;
  cout<<"结果是"<<endl;
  return 0;




}







