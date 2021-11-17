#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,k;
	n=5;
	m=3;
	int alloc[5][3]={{5,7,4},
	   					   {7,4,0},
	   					   {1,2,3}};
	int max[5][3]={{5,7,3},
	   					   {0,4,0},
	   					   {1,6,3}};	
	 int avail[3]={4,5,6};
	 int f[n],ans[n],ind=0;
	 for(k=0;k<n;k++)
	 {
	 	f[k]=i;
	 	}
	 	int need[n][m];
	 	for(i=0;i<n;i++)
	 	{
	 		for(j=0;j<m;j++)	
	 		need[i][j]=max[i][j]-alloc[i][j];
	 		}
	 		int y=0;
	 		for(k=0;k<5;k++)	
	 		{
	 			for(i=0;i<n;i++)
	 			{
	 				if(f[i]==0)
	 				{
	 					int flag=0;
	 					for(j=0;j<m;j++)
	 					{
	 						if(need[i][j]>avail[j])
	 						{
	 						flag=1;
	 						break;
	 						}
	 				}
	 				if(flag==0)
	 				{
	 					ans[ind++]=i;
	 					for(y=0;y<m;y++)
	 					avail[y]+=alloc[i][y];
	 					f[i]=0;
	 				}
	 				}
	 			}
	 		}
	 		cout<<"following the safe sequence\n";
	 		for(i=0;i<n-1;i++)
	 		cout<<"p"<<ans[i]<<"->";
	 		cout<<"p"<<ans[n-1]<<endl;
	 		return 0;
}
