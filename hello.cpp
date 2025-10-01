#include <iostream>
using namespace std;
int yjx(int a,int b)
{while (b!=0)
   { int x=b;
     b=a%b;
     a=x;
    /* code */
   }
   return a;
    

}

int lcm(int a,int b)
{
  return a*b/yjx(a,b); 
}
int main()
{
  int a,b;
  cout<<"请输入两个数:"<<endl;
  cin>>a>>b; 
  cout<<""<<lcm(a,b)<<endl;
  return 0;
}







