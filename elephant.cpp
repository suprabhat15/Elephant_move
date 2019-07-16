#include<iostream> // 24th june,2019
#include<cmath>
using namespace std;
int ways(int i,int j)
{// base case
   if(i==0 && j==0)
     return 1;
  // Recursive case
  int ans=0,ans1=0,ans2=0;
  for(int k=0;k<i;k++)
  {
  		ans1 += ways(k,j); 
	  }
	  for(int l=0;l<j;l++)
    {
  		ans2 += ways(i,l); 
	  }
	  return ans1+ans2;
  }
	

int main()
{
	int n,m;
	cin>>n>>m;
	cout<<ways(n,m)<<endl;
	return 0;
}
