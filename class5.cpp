#include <iostream>
#include <conio.h>
using namespace std;

class Matrix{
private:
    int matrix[2][2];
public:
    Matrix(){

    }
    Matrix(int d){
      for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
          matrix[i][j]=d;
        }
      }

    }
    void showData(){
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
          cout<<"\n"<<matrix[i][j]<<"\n";
          /* code */
        }
        /* code */
      }
    }
    friend Matrix operator + (Matrix &M, Matrix &M2);
    friend Matrix operator - (Matrix &M, Matrix &M2);
    friend Matrix operator * (Matrix &M, Matrix &M2);
};

Matrix operator + (Matrix &M, Matrix& M2){
  Matrix M1;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      M1.matrix[i][j]=M.matrix[i][j]+M2.matrix[i][j];
      cout<<"\nm1\n"<<M1.matrix[i][j];
    }
  }
  return M1;
}

Matrix operator - (Matrix &M, Matrix&M2){
  Matrix M1;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      M1.matrix[i][j]=M.matrix[i][j]-M2.matrix[i][j];
      cout<<"\nm1\n"<<M1.matrix[i][j];
    }
  }
  return M1;
}

Matrix operator * (Matrix& M , Matrix& M2){
  Matrix M1;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      M1.matrix[i][j]=0;
      for(int k=0;k<2;k++){
        M1.matrix[i][k]=M1.matrix[i][j] + (M.matrix[i][k] * M2.matrix[k][j]);
        cout<<"\nm1\n"<<M1.matrix[i][j];
      }
    }
  }
  return M1;
}

int main() {
  /* code */
  Matrix M1(2);
  Matrix M2(3);
  Matrix M3;
  M3=M1+M2;
  M3=M1-M2;
  M3.showData();
  M3=M1*M2;

  getch();
  return 0;
}
