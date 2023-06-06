
 bool checkStraightLine(vector<vector<int>>& coordinates) {
        int point;
         if(coordinates.size()==2)
         {
             return true;
         }
         int x1 = coordinates[0][0];
         int y1 = coordinates[0][1];
         int x2 = coordinates[1][0];
         int y2 = coordinates[1][1];

         int dx = x2-x1;
         int dy = y2-y1;

         for( point = 2;point<coordinates.size();point++)
         {
             int x = coordinates[point][0];
             int y = coordinates[point][1];
             if(((x-x1)*dx)!=((y-y1)*dy))
             {
                 return false;
             }
         }
        return true;
    }
