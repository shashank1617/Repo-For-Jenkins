#include<bits/stdc++.h>
using namespace std;

//                                      ?? An Element is called Majority Element if it occurs more than n/2+1 times  ??

void PrintMajority(vector<int> &A)
{
  int majority=0,count=1;
  for(int i=1;i<A.size();i++)         //This for loop code of choosing a Candidate is called Boye-Moore's Voting Algorithm 
  {
    if(A[majority]==A[i])
        count++;
        
    else count --;
    
    if(count==0)
    {
      majority=i;
      count=1;
    }
  }
  
  int candidate=A[majority];
  count=0;
  
  for(int i=0;i<A.size();i++)
  {
     if(A[i]==candidate)
        count++;
  }
  
  if(count>(A.size()/2)+1)
    cout<<endl<<"Majority Element is="<< candidate;
    
  else
    cout<<endl<<"No Majority Element present";
}

int main()
{
  vector<int>A;
  int n;
  cout<<"Enter as many i/p u want to give & enter 0 to stop"<<endl;
  cin>>n;
  
  while(n!=0)
  {
    A.push_back(n);
    cin>>n;
  }
 
 PrintMajority(A);
 return 0;
}

