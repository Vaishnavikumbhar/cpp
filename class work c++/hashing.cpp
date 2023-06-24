#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int>umap;
    umap["prince"] = 44;
    umap["gfg"] = 56;
    umap["helloworld"] = 90;

    for(auto x : umap)
        cout<<x.first<<" "<<x.second<<endl;

    for(auto itr = umap.begin();itr!=umap.end();itr++)

        cout<<itr->first<<" "<<itr->second<<endl;

    string key = "prince";
    if(umap.find(key)!=umap.end())
        cout<<"key found";
    else
        cout<<"key is not found";
    int arr[] = {1,2,3,4,54,3,1,2,3,4,53,2,6,7,8,98,6,7,89,7,6,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int>umap1;
    for(int i=0;i<n;i++)
    {

        int key = arr[i];
        umap1[key]++;
    }

    for(auto itr = umap1.begin();itr!=umap1.end();itr++)
        cout<<itr->first<<" "<<itr->second<<endlnode;

    return 0;
}
