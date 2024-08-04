/*
    Author : Pakshal Shashikant Jain 
    Date : 03/08/2024
    Program : Write a program which accept matrix and one number from user and return
              frequency of that number. 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to count frequency of entered no
function CountFrequency(arr : number[][],irow : number,icol : number,ino : number) 
{
    var i : number = 0;
    var j : number = 0;
    var icnt : number = 0;

    //Logic to count frequency
    for(i = 0;i < irow;i++)
    {
        for(j = 0;j < icol;j++)
        {
            if(arr[i][j] == ino)
            {
                icnt++;
            }
        }
    }

    return icnt;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main()
{
    var arr : number[][];
    var irow : number = 3;
    var icol : number = 3;
    var i : number = 0;
    var j : number = 0;
    var ino : number = 12;
    var iret : number = 0;

    console.log("Jay Ganesh...");

    //Allocating memory to matrix
    arr = new Array(irow); 
    for(i = 0;i < irow;i++)
    {
        arr[i] = new Array(icol);
    }

    //Inserting elements in matrix
    for(i = 0;i < irow;i++)
    {
        for(j = 0;j < icol;j++)
        {
            arr[i][j] = (i + j) + 10;
        }
    }

    //Printing elements of matrix
    console.log("Element of matrix are : ");
    for(i = 0;i < irow;i++)
    {
        for(j = 0;j < icol;j++)
        {
            process.stdout.write(arr[i][j] + "\t");
        }
        console.log();
    }

    //Call to CountFrequency function
    iret = CountFrequency(arr,irow,icol,ino);

    //Printing count of entered number
    console.log("Frequencny of entered no %d is : %d",ino,iret);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call to main function
main();