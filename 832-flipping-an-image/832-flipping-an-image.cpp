class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int k=0;k<image.size();k++){
    
    auto v = image[k];
    
    int i = 0;
    int j = v.size()-1;
    
    while(i<=j){
      
      if(v[i]==v[j]){
        if(v[i]){
          v[i]=0;
          v[j]=0;
        }
        else{
          v[i]=1;
          v[j]=1;
        }
        
      }  
      i++;
      j--;
      
    }  
    image[k] = v;
    
  }
  
  return image;
    }
};