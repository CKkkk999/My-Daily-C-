#include <iostream>
using namespace std;

int main(){
int a,b,c;
int max = a;
cin >> a >> b >> c;
if (b > max) max = b;
if (c > max) max = c;
cout << "最大值是 " << max;
return 0;
}