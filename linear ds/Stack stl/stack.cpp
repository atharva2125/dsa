#include <iostream>
#include<stack>
using namespace std;


int main()
{
  stack<int>S;
  S.push(4);
  S.push(5);
  S.push(6);
  cout<<S.size()<<endl;
  S.pop();
  cout<<S.top()<<endl;
  cout<<S.empty()<<endl;
}