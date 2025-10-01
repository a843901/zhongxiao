#include <iostream>
int main(void)
{
int duration;
cout<<"请输入时长:"<<endl;
cin>>duration;
 int hours,minutes,seconds;
 hours= duration/3600;

 int r;
 r= duration%3600;
 minutes=r/60;
 seconds=r%60;


 cout<<"时长为"<<hours<<"小时"<<minutes<<"分"<<seconds<<"秒"<<endl;
 return 0;





}







