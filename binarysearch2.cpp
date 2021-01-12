#include <iostream>
using namespace std;

int main()
{
int n,a[20], val, beg, last, mid;
cout<<"enter number";
cin>>n;

for (int  i = 0; i < n; i++)
{ 
       cin>>a[i];
}
   char ans='y';
    while (ans=='y')
    {
        cout<<"search";
        cin>>val;
        beg=0; last=n-1;

        if (val>a[0]&&val<a[n-1])
        {
            for (mid=(beg+last)/2; beg<last; mid=(beg+last)/2 )
            {
                if(a[mid]==val)
                {
                    cout<<"element"<<a[mid]<<"found at "<<mid+1;
                    break;
                }
                else if(a[mid]>val)
                last=mid+1;
                else 
                beg=mid+1;

            }
            
        }
        
        else if (a[0]==val)
        {
            cout<<"element at 1st posi";
        }
        else if (a[n-1]==val)
        {
            cout<<"element at last posi";
        }
        else
        {
            cout<<"element is not in the list";
        }
        if (beg>last)
        {
            cout<<"element not in the list";
        }    
        
      cin>>ans;  
        
        
    }
    



}

