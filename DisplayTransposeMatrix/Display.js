/*
    Author : Pakshal Shashikant Jain
    Date : 5/08/2024
    Program : Write a program which accept matrix from user and display transpose of the
              matrix.

              The transpose of a given matrix is formed by interchanging the rows and
              columns of a matrix.
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function to Display Transpose Matrix
function TransposeMatrix(arr, rows, cols) {
    var i = 0;
    var j = 0;
    //Logic to  Display transpose of matrix
    console.log("Transpose of matrix is as follows : ");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            process.stdout.write(arr[j][i] + "\t");
        }
        console.log();
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
function main() {
    var arr;
    var row = 4;
    var col = 4;
    var i = 0;
    var j = 0;
    console.log("Jay Ganesh....");
    //Allocating memory for matrix 
    arr = new Array(row);
    for (i = 0; i < row; i++) {
        arr[i] = new Array(col);
    }
    //Inserting elements in matrix
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            arr[i][j] = (i * col) + j + 10;
        }
    }
    //Printing Elements of matrix
    console.log("Elements of Matrix are : ");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            process.stdout.write(arr[i][j] + "\t");
        }
        console.log();
    }
    //Call to Transpose matrix function
    TransposeMatrix(arr, row, col);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//call to main function
main();
