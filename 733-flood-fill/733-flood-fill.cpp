class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        if(image[sr][sc]==newColor)
            return image;
       
        vector<vector<int>>moves = {{1,0},{-1,0},{0,1},{0,-1}};
        queue<vector<int> >q;
        q.push({sr,sc});
        int sourceColor=image[sr][sc];
        image[sr][sc]=newColor;
        while(!q.empty())
        {
            auto front=q.front();
            q.pop();
            for(auto move:moves)
            {
                int newX=move[0]+front[0];
                int newY=move[1]+front[1];
                if(isCellValid(image,newX,newY))
                {
                    if(image[newX][newY]==sourceColor)
                    {
                        image[newX][newY]=newColor;
                        q.push({newX,newY});
                    }
                }
            }
        }
        return image;
    }
    bool isCellValid(vector<vector<int>>& image, int sr, int sc)
    {
        if(sr<0||sr>=image.size() ||sc<0||sc>=image[0].size())
            return false;
        return true;
    }
};