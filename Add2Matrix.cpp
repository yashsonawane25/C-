#include <iostream>
using namespace std;
void addMatrices(const int mat1[][3],const int mat2[][3],int result[][3],int rows,int cols){
    for(int i;i<rows;i++){
        for(int j;j<cols;j++){
            result[i][j]=mat1[i][j] + mat2[i][j];
        }
    }
}
void displayMatrix(const int matrix[][3],int rows,int cols){
    for(int i=0;i<rows;++i){
        for(int j=0;j<cols;++j){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    const int rows =3;
    const int cols =3;
    int matrix1[rows][cols],matrix2[rows][cols],resultMatrix[rows][cols];
    cout<<"Enter elements of the first matrix:"<<endl;
    for(int i=0;i<rows;++i){
        for(int j=0;j<cols;++j){
            cout<<"Eelement at position("<<i+1<<","<<j+1<<"):";
            cin>>matrix1[i][j];
        }
    }
    // int matrix1[rows][cols],matrix2[rows][cols],resultMatrix[rows][cols];
    cout<<"Enter elements of the second matrix:"<<endl;
    for(int i=0;i<rows;++i){
        for(int j=0;j<cols;++j){
            cout<<"Eelement at position("<<i+1<<","<<j+1<<"):";
            cin>>matrix2[i][j];
        }
    }
    addMatrices(matrix1,matrix2,resultMatrix,rows,cols);
    cout<<"\nResultant Matrix(Sum of the two matrices):\n";
    displayMatrix(resultMatrix,rows,cols);
    return 0;
}