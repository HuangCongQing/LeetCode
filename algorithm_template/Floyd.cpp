/*
 * @Description: 
 * @Author: HCQ
 * @Company(School): UCAS
 * @Email: 1756260160@qq.com
 * @Date: 2021-09-12 14:44:32
 * @LastEditTime: 2021-09-12 14:44:33
 * @FilePath: /LeetCode/algorithm_template/Floyd.cpp
 */

// i是起点，k是中间节点，j中终点
void floyd(vector<vector<double>> &matrix){
    int n = matrix.size();
    for(int k=0;k<n;k++){ // 遍历k个中间节点
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j] = min(matrix[i][j], matrix[i][k]*matrix[k][j]); // 最短
                } 
            }    
    }
}