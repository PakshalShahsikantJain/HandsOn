/*
    Author : Pakshal Shashikant Jain
    Date : 05/08/2024
    Program : Write a program which accept matrix and swap the contents of consecutive rows.  
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to Swap Rows Elements of Matrix
function SwapRows(arr : number[][],rows : number,cols : number)
{
    var i : number = 0;
    var j : number = 0;
    var temp : number = 0;

    //Logic to swap rows
    for(i = 0;i < rows;i+=2)
    {
        for(j = 0;j < cols;j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[i + 1][j];
            arr[i + 1][j] = temp;
        }
    }

    console.log("Matrix after swapping rows is as follows : ");
    for(i = 0;i < rows;i++)
    {
        for(j = 0;j < cols;j++)
        {
            process.stdout.write(arr[i][j] + "\t");
        }
        console.log();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main() 
{
    var arr: number[][];
    var row : number = 4;
    var col : number = 4;
    var i : number = 0;
    var j : number = 0;

    console.log("Jay Ganesh....");

    //Allocating memory for matrix 
    arr = new Array(row);

    for(i = 0;i < row;i++)
    {
        arr[i] = new Array(col);
    }

    //Inserting elements in matrix
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            arr[i][j] = (i * col) + j + 10;
        }
    }

    //Printing Elements of matrix
    console.log("Elements of Matrix are : ");
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            process.stdout.write(arr[i][j]+"\t");
        }
        console.log();
    }

    //Call to swap rows
    SwapRows(arr,row,col);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//call to main function
main();