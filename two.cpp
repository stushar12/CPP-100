#include <bits/stdc++.h>
using namespace std;

int main() {
	priority_queue<int> q1;
	priority_queue<int,vector<int>,greater<int>> q2;
	
	int n;
	cin>>n;
	int median=0;
	int temp;
	while(n--)
	{
	        cin>>temp;
	        if(q1.empty()&&q2.empty())
	            q1.push(temp);
	        
	        else if(q1.top()>=temp)
	        {
	            q2.push(q1.top());
	            q1.pop(); 
	            q1.push(temp);
	            
	        }
	        else 
	            q2.push(temp);
	        

	         if(1+q1.size()<q2.size())
	         {
	               q1.push(q2.top());
	               q2.pop();
	        }
	        if(q1.size()==q2.size())
	        {
	            median=(q1.top()+q2.top())/2;
	        }
	        else
	        {
	            median=(q1.size() > q2.size()) ? q1.top() : q2.top();
	        }
	       cout<<median<<endl; 
	}
	
	return 0;
}