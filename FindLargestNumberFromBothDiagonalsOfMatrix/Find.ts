/*
    Author : Pakshal Shashikant Jain
    Date : 04/08/2024
    Program : Write a program which accept matrix and return largest number from both the
              diagonals 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to Find largest no from both the diagonals of matrix
function MaxDiagonal(arr : number[][],rows : number,cols : number) : number 
{
    var i : number = 0;
    var j : number = 0;
    var imax : number = 0;

    //Logic to find largest no
    for(i = 0;i < rows;i++)
    {
        for(j = 0;j < cols;j++)
        {
            if((i == j)||(i + j)==(cols - 1))
            {
                if(arr[i][j] > imax)
                {
                    imax = arr[i][j];
                }    
            }
        }
    }

    return imax
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

    //Call to Max Diagonal
    iret = MaxDiagonal(arr,row,col);

    //Printing Largest no from both the diagonals of matrix
    console.log("Largest no from both the diagonals is : %d",iret);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//call to main function
main();