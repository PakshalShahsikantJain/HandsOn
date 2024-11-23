/*
    Author : Pakshal Shashikant Jain
    Date : 04/08/2024
    Program : Write a program which accept matrix and display addition of elements From each
              column  
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to Add Columns Elements of Matrix
function AddColumns(arr : number[][],rows : number,cols : number)
{
    var i : number = 0;
    var j : number = 0;
    var isum : number = 0;

    //Logic to add Columns Elements
    console.log("Addition of elements of each columns is as follows : ");
    for(i = 0;i < rows;i++)
    {
        for(j = 0;j < cols;j++)
        {
            isum = isum + arr[j][i];
        }
        process.stdout.write(isum+"\t");

        isum = 0;
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

    //Call to add columns function
    AddColumns(arr,row,col);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//call to main function
main();