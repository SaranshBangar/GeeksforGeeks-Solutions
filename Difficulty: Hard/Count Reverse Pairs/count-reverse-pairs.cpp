class Solution {
  public:
void  mergesort(int l,int mid,int r,vector<int> &arr){
        int n1=mid-l+1;//  l se mid tk
        int n2=r-(mid+1)+1;// mid+1 se r tk
        int k=l;
        vector<int>nums1(n1),nums2(n2);
        for(int i=0;i<n1;i++){
            nums1[i]=arr[k++];
        }
        for(int j=0;j<n2;j++){
            nums2[j]=arr[k++];
        }
        k=l;
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(nums1[i]<=nums2[j]){
                arr[k]=nums1[i];
                i++,k++;
            }
            else{
                arr[k]=nums2[j];
                k++,j++;
            }
        }
        while(i<n1){
            arr[k]=nums1[i];
            i++,k++;
        }
        while(j<n2){
            arr[k]=nums2[j];
            j++,k++;
        }
    }
    int inversion(int low,int mid,int high,vector<int> &arr){
        int cnt=0;
        int right=mid+1;
        for(int i=low;i<=mid;i++){
            while(right<=high && arr[i]>2*arr[right])right++;
            cnt+=(right-(mid+1));
        }
        return cnt;
    }
   int merge(int l,int r,vector<int> &arr){
        int cnt=0;
        if(l>=r)return cnt;
        int mid=l+(r-l)/2;
        cnt+=merge(l,mid,arr);
        cnt+=merge(mid+1,r,arr);
        cnt+=inversion(l,mid,r,arr);
        mergesort(l,mid,r,arr);
        return cnt;
    }
    int countRevPairs(vector<int> &arr) {
        // Code here
        int n=arr.size();
        return merge(0,n-1,arr);
    }
};