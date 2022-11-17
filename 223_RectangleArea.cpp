class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
            int area;
            //sum of area of both triangles 
            area = (abs(ax1-ax2))*(abs(ay1-ay2)) + (abs(bx1-bx2))*(abs(by1-by2)); 
            if (ax1 == bx1 && ay1 == by1 && ax2 == bx2 && ay2 == by2) {return area /= 2;}
            else if (bx1 >= ax2 || by1 >= ay2 || bx2 <= ax1 || by2 <= ay1) return area;
            // when thre is over lap sybtract overlap area from area
            area -= (abs(max(ay1,by1) - min(ay2,by2))) * (abs(max(ax1,bx1)-min(ax2,bx2)));
            return area;
    }
};