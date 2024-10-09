#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  
    while (T--) {
        int N;
        cin >> N;  
        int maxArea = 0;
        
        
        for (int l = 1; l <= N / 2; ++l) {
            int b = (N / 2) - l;  
            if (b > 0) {
                int area = l * b;  
                if (area > maxArea) {
                    maxArea = area;  
                }
            }
        }
        
        cout << maxArea << endl;  
    }
    
    return 0;
}
