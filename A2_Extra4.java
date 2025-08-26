class Solution {
    public void sortColors(int[] nums) {

        int z=0,o=0,t=0;
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]==0) z++;
            if(nums[i]==1) o++;
            if(nums[i]==2) t++;
        }

        int start=0,end=nums.length-1;
        while(z!=0 || o!=0 || t!=0)
        {
            if(t!=0)
            {
                nums[end--]=2;
                t--;
                continue;
            }
            if(z!=0)
            {
                nums[start++]=0;
                z--;
            }
            else
            {
                nums[start++]=1;
                o--;
            }
        }

    }
}
