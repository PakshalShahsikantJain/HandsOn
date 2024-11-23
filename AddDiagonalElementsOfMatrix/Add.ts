/*
    Author : Pakshal Shashikant Jain
    Date : 01/08/2024
    Program : Write a program which accept matrix from user and return addition of diagonal
              elements.
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to Add Diagonal Elements of Matrix
function AddDiagonal(arr : number[][],rows : number,cols : number) : number 
{
    var i : number = 0;
    var j : number = 0;
    var isum : number = 0;

    //Logic to add Diagonal Elements
    for(i = 0;i < rows;i++)
    {
        for(j = 0;j < cols;j++)
        {
            if(i == j)
            {
                isum = isum + arr[i][j];
            }
        }
    }

    return isum 
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main() 
{
    var arr: number[][];
    var row : number = 3;
    var col : number = 3;
    var i : number = 0;
    var j : number = 0;
    var iret : number = 0;

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

    //Call to add diagonal function
    iret = AddDiagonal(arr,row,col);

    //Printing addition of diagonal elements
    console.log("Addition of Diaognal Elements is : %d",iret);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//call to main function
main();