#include<iostream>
using namespace std;
class arraysfn
{
	public:
	int a[20];
	int beg,end,mid;
	int n;
		int ew;
	
	void getdata()
	{
		cout<<"enter size\n";
	cin>>n;
	cout<<"enter number of elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    }
    void algo()
    {
	int ch;
	cout<<"enter 1 to insert\n enter 2 to delete\nenter 3 to search\nenter 4 for binary search\n";
	cin>>ch;
	if(ch==1)
	{
		cout<<"enter the number you want to add\n";
	
		cin>>ew;
		cout<<"enter the position you want to add\n";
		int pos;
		cin>>pos;
		for(int i=n-1;i>=pos;i--)
		{
			a[i+1]=a[i];
			
		}
		a[pos]=ew;
		
		for(int i=0;i<n+1;i++)
		{
			cout<<a[i];
		}
	}
	else if(ch==2)
	{
		cout<<"enter the position you want to delete\n";
		int pos;
		cin>>pos;
		for(int i=pos;i<=n-1;i++)
		{
			a[i]=a[i+1];
			
		}
	
		
		for(int i=0;i<n-1;i++)
		{
			cout<<a[i];
		}
	}
	else if(ch==3)
	{
		cout<<"enter the number you want to search\n";
		int s;
		cin>>s;
		for(int i=0;i<n;i++)
		{
			if(s==a[i])
			{
				cout<<"number found at position--"<<i;
				break;
			}
		
		}
	}
	else if(ch==4)
	{
		cout<<"enter the number you want to search\n";
		int s;
		cin>>s;
		int flag=0;
		beg=0;
		end=n;
		while(beg<=end)
		{
		mid=((beg+end)/2);
		if(a[mid]==s)
		{
			cout<<"found at position-"<<mid;
			flag=1;
			//cout<<"elemenmt found"<<s;
			break;
		}
		else
		{
			if(a[mid]>s)
			{
				end=mid-1;
			}
			else
			{
				beg=mid+1;
			}
		}
		
	}
	if(flag==0)
	{
		cout<<"element not found\n"<<s;
	}
	
}
}
};

int main()
{
	arraysfn ar;
	ar.getdata();
	ar.algo();
}
