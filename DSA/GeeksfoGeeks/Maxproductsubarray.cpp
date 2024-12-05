class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
         int n = arr.size();
    int maxProduct = arr[0];  
    int currentMax = arr[0];  
    int currentMin = arr[0];  

    for (int i = 1; i < n; i++) {
        if (arr[i] < 0) {
            swap(currentMax, currentMin); 
            }

       
        currentMax = max(arr[i], currentMax * arr[i]);
        currentMin = min(arr[i], currentMin * arr[i]);

        
        maxProduct = max(maxProduct, currentMax);
    }

    return maxProduct;
    }
};
