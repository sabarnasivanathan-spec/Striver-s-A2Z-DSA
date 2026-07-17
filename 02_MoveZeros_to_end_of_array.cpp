#include<iostream>
#include<vector>
using namespace std;
void moveZeros(vector<int> &arr)
{
    int n=arr.size();
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }
    if(j==-1)
    return;
for(int i=j+1;i<n;i++)
{
    if(arr[i]!=0)
    {
        swap(arr[i],arr[j]);
        j++;
    }
}
}
int main()
{
    vector<int>arr={1,0,2,0,4,5};
    moveZeros(arr);
    cout<<"Array after moving zeros";
    for(int num:arr){
        cout<<num<<"";
    }
    return 0;
}
