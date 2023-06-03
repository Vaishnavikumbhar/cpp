#include <iostream>
#include <algorithm>
//using namespace std;
void s(int arr[])
{
    std::sort(std::begin(arr),std::end(arr));
    for(int i : arr)
    {
        std::cout<<i;
    }
}
int main()
{
    int arr[] = {3,5,1,2,4};
    s(arr);
}
