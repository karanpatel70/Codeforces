#include<bits/stdc++.h>
using namespace std;
int find(vector<int>& array,int element)
{
    int cnt=0;
    for(int i=0;i<array.size();i++)
    {
        if(array[i]==element)
        {
            return cnt++;
        }
        cnt++;
    }
    return cnt;
}
int findback(vector<int>& array,int element)
{
    int cnt=0;
    reverse(array.begin(),array.end());
    for(int i=0;i<array.size();i++)
    {
        if(array[i]==element)
        {
            return cnt++;
        }
        cnt++;
    }
    return cnt;
}
int main ()
{
    int n;
    cin>>n;
    vector<int> array(n);
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        array.push_back(element);
    }
    int m;
    cin>>m;
    vector<int> findelements(m);
    for(int i=0;i<m;i++)
    {
        int melement;
        cin>>melement;
        findelements.push_back(melement);
    }
    int fcnt=0;
    int bcnt=0;
    for(int i=0;i<m;i++)
    {
        fcnt+=find(array,findelements[i]);
        bcnt+=findback(array,findelements[i]);
    }
    cout<<fcnt<<' '<<bcnt<<endl;
    return 0;
}