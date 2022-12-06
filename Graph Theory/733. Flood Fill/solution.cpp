class Solution {
public:
    void floodFill(vector<vector<int>>& image, int sr, int sc, int color, int prevColor, int r, int c)
    {
        if(image[sr][sc] == prevColor)
        {
            image[sr][sc] = color;
            if(sr+1<r)
                floodFill(image, sr+1, sc, color, prevColor, r, c);
            if(sr>0)
                floodFill(image, sr-1, sc, color, prevColor, r, c);
            if(sc>0)
                floodFill(image, sr, sc-1, color, prevColor, r, c);
            if(sc+1<c)
                floodFill(image, sr, sc+1, color, prevColor, r, c);
        }

        // return image;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        // int i = sr, j = sc;
        int r = image.size(), c = image[0].size(), prevColor = image[sr][sc];
        // cout << r << " " << c << " " << prevColor << "\n";
        if(color != prevColor) // Special line, without this line, TLE
            floodFill(image, sr, sc, color, prevColor, r, c);
        return image;
    }
};
