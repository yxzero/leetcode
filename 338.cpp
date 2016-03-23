class Solution {
public:
    vector<int> countBits(int num) {
        int edge = 1;
		int edge2 = 2;
		vector<int> result;
		result.push_back(0);
		if (num == 0)
			return result;
		else if(num == 1)
		{
			result.push_back(1);
			return result;
		}
		else
		{
			result.push_back(1);
			for(int i=2;i<=num;i++)
			{
				if(i >= edge2)
				{
					edge *= 2;
					edge2 *= 2;
				}
				result.push_back(result[i-edge]+1);
			}
			return result;
		}
    }
};