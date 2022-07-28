//Single element in sorted array
class Solution
{
	public:
		int singleNonDuplicate(vector<int> &nums)
		{
			int low = 0, high = nums.size() - 1;
			if (nums.size() == 1)
			{
				return nums[0];
			}
			else if (nums[0] != nums[1])
			{
				return nums[0];
			}

			while (low <= high)
			{
				int mid = low + (high - low) / 2;
				if (nums[mid + 1] != nums[mid] and nums[mid - 1] != nums[mid])
				{
					return nums[mid];
				}

				if (mid % 2 == 0 and nums[mid + 1] == nums[mid] or mid % 2 != 0 and nums[mid - 1] == nums[mid])
				{
					low = mid + 1;
				}
				else
				{
					high = mid - 1;
				}
			}

			return 0;
		}
};