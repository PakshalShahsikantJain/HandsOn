/*
    Author : Pakshal Shashikant Jain 
    Date : 7/08/2024
    Program : Write a program which accept matrix and reverse the contents of each row. 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to Reverse each row of the matrix 
function ReverseRow(arr : number[][],rows : number,cols : number)
{
    var i : number = 0;
    var j : number = 0;

    //Logic to reverse each row of the matrix
    console.log("Updated matrix is as follows : ");
    for(i = 0;i < rows;i++)
    {
        for(j = cols - 1;j > -1;j--)
        {
            process.stdout.write(arr[i][j]+"\t");
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

    //Call to Reverse Row function
    ReverseRow(arr,row,col);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//call to main function
main();