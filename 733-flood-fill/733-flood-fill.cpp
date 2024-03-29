class Solution {
public:
    void dfs(int i, int j, int icolour, int ncolour, vector<vector<int>>& image) {
	int n = image.size();
	int m = image[0].size();

	if (i < 0 || j < 0)	return;
	if (i >= n || j >= m)  return;
	if (image[i][j] != icolour)	return;

	image[i][j] = ncolour;

	dfs(i - 1, j, icolour, ncolour, image);
	dfs(i + 1, j, icolour, ncolour, image);
	dfs(i, j - 1, icolour, ncolour, image);
	dfs(i, j + 1, icolour, ncolour, image);
}
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    int icolour = image[sr][sc];
	if (icolour != newColor)
		dfs(sr, sc, icolour, newColor, image);
	return image;
    }
};