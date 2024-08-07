/*
    Author : Pakshal Shashikant Jain
    Date : 7/08/2024
    Program : Write a program which accept matrix and reverse the contents of each column.
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function to Reverse each columns of the matrix 
function ReverseColumn(arr, rows, cols) {
    var i = 0;
    var j = 0;
    //Logic to reverse each columns of the matrix
    console.log("Updated matrix is as follows : ");
    for (i = rows - 1; i > -1; i--) {
        for (j = 0; j < cols; j++) {
            process.stdout.write(arr[i][j] + "\t");
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
    //Call to ReverseColumn function
    ReverseColumn(arr, row, col);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//call to main function
main();
