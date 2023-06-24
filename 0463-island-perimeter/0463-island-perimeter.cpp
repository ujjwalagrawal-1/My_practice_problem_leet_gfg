class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int gridsize = row*col;
        int peri = 0;
        for(int i = 0;i<=gridsize-1;i++){
            int rowi = i/col;
            int coli = i%col;
            // if(gridsize - 1 == 0){
            //     grid[rowi][coli] == 1{
            //         return 4;
            //     }
            //     else{
            //         return 0;
            //     }
            // }
            if(grid[rowi][coli] == 1/*matlab ya to iceland hai*/){
                                    // if(rowi-1>=0){
                                    // if(grid[rowi - 1][coli] == 0){
                                    //     peri++;
                                    // }
                                    // }
                                    // if(rowi+1 <= row-1){
                                    // if(grid[rowi+1][coli] == 0){
                                    //     peri++;
                                    // }
                                    // }
                                    // if(coli-1>=0){
                                    // if(grid[rowi][coli-1] == 0){
                                    //     peri++;
                                    // }
                                    // }
                                    // if(coli+1 <= col-1){
                                    // if(grid[rowi][coli + 1] == 0){
                                    //     peri++;
                                    // }
// thisis avoiding four cases of corner one                                     // }
                if(rowi - 1<0 || grid[rowi-1][coli] == 0){
                    peri++;
                }
                if(rowi + 1>= row || grid[rowi+1][coli] == 0){
                    peri++;
                }
                if(coli + 1>=col || grid[rowi][coli + 1] == 0){
                    peri++;
                }
                if(coli - 1<0 || grid[rowi][coli -1] == 0){
                    peri++;
                }
            }
        }
        return peri;
    }
};