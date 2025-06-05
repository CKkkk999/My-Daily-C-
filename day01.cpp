#include <iostream>
using namespace std;

int main(){
int age;
cout << "請輸入你的年齡";
cin >> age;
if(age<13){
    cout << "你是兒童";
  }
  else if(age<18){
      cout <<"你是青少年";
  }
  else{
      cout << "你是成年人";
  }
    return 0;
}