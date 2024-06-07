#include <iostream>
using namespace std;
class arrayListType 
{
    public:
    int arr[5];
    arrayListType(int a[])
    {
        for(int i=0;i<5;i++)
        arr[i]=a[i];
    }
    virtual int max() = 0;
};
class unorderedArrayListType : public arrayListType 
{
    public:
    unorderedArrayListType(int a[]): arrayListType(a){}
    int max()
    {
        int large=0;
        for(int j=0;j<5;j++){
            if(large<arr[j])
            large=arr[j];
        }
        return large;
    }
};

int main()
{
    int arr[5]={10,20,54,76,1};
    unorderedArrayListType al(arr);
    cout<<al.max()<<endl;
}