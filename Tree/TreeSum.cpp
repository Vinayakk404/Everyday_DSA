/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}

 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}

 *};
 */
class Solution
{
	public:
		int maxLevelSum(TreeNode *root)
		{
			queue<TreeNode*> q1;
			if (root == NULL)
			{
				return 0;
			}

			q1.push(root);
			q1.push(NULL);
			int sum = 0, level = 0, level2 = 0, maxx = -999999;
			while (!q1.empty())
			{
				TreeNode *node = q1.front();
				q1.pop();
				if (node != NULL)
				{
					cout << node->val << "  ";
					sum = sum + node->val;
					if (node->right)
					{
						q1.push(node->right);
					}

					if (node->left)
					{
						q1.push(node->left);
					}

					if (q1.front() == NULL)
					{
						level++;
						if (maxx < sum)
						{
							maxx = sum;
							level2 = level;
						}

						sum = 0;
					}
				}
				else if (!q1.empty())
				{
					q1.push(NULL);
				}
			}

			return level2;
		}
};