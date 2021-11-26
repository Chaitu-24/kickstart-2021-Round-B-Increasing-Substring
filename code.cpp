#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
 {
    int n;
    cin>>n;
    int arr[n];
    string name;
    cin>>name;
    cout<<"Case #"<<j<<": ";
    arr[0]=1;
    for(int i=1;i<name.length();i++)
    {
        if(name[i]>name[i-1])
        arr[i]=arr[i-1]+1;
        else
        arr[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }
    return 0;
}
