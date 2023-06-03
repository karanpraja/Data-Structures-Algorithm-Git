int possible(vector<int> &stalls/*vector*/, int k,int m)
{
    int lastpos=stalls[0];//vector doubles its size when an element is added
    int cowcount=1;//into it .
    for(int i=0;i<stalls.size();i++)//it is compulsory to use brackets in this 
    {
        if(stalls[i]-lastpos>=m)//in this we are trying to satisfy mid to get
        {//answer!!
            cowcount++;//this code is applicable for 4 cows 6 cows and so on
            if(cowcount==k)
            {
                return true;
                }
                lastpos=stalls[i];// we are using this to get the largest mini
        }//mum distance between 4 cows ,for this,it is compulsory 
    }
    return false;//then end shifts to left 
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());//c++ stl statement to sort a array
    int s=0;
    int maxi=-1;
    for(int i=0;i<stalls.size();i++)
    {
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int ans=-1,mid=s+(e-s)/2;
    while(s<=e)//what are we trying to do? We are trying to find answer by //matching it to mid.
    {
        if(possible(stalls,k,mid))//if it is true then this stat. works and if not 
        {//then it goes to next statement.
            s=mid+1;
            ans=mid;
        }
        else
        {
            e=mid-1; if mid goes out of threshold val. This happens in case
        }of more than one cows
        mid=s+(e-s)/2;

    }
    return ans;
}
