#include<iostream>
using namespace std;
int main()
{
int n,bt[20],wt[20],tat[20],avtat=0,avwt=0,i,j;
cout<<"enter the total no of process (maximum=20)"<<endl;
cin>>n;


cout<<"enter process burst time"<<endl;
for(i=0;i<n;i++)
  {
	cout<<"p["<<i+1<<"]:"<<endl;
	cin>>bt[i];
  } 
  wt[0]=0;  //waiting time the first process is zero
  //calculating the waiting time
  for(i=1;i<n;i++)
  {
  	wt[i]=0;
  	for(j=0;j<i;j++)
  	wt[i]+=bt[j];
  }	
  cout<<"process time"<<"burst time"<<"turning around time"<<endl;
  //calculating turn around time
  for(i=0;i<n;i++)
  {
  	tat[i]=bt[i]+wt[i];
  	avwt+=wt[i];
  	avtat+=tat[i];
  	cout<<"[p"<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
  }
  avwt/=i;
  avtat/=i;
  cout<<"average waiting time :"<<avwt<<endl;
  cout<<"average turn around time :"<<avtat<<endl;
  return 0;
  
}
