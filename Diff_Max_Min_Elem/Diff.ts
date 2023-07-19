/*
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the difference between largest
              and smallest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 90 (93 -3) 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Call Difference Function
function Difference(isize : number,arr : number[])
{
    var i : number = 0;
    var imax : number = 0;
    var imin : number = 0;
    var diff : number = 0;

    //Logic
    imax = arr[0];
    imin = arr[0];
    for(i = 0;i < isize;i++)
    {
        if(arr[i] > imax)
        {
            imax = arr[i];
        }
        else if(arr[i] < imin)
        {
            imin = arr[i];
        }
    }

    diff = imax - imin;

    return diff;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main() 
{
    var iret : number = 0;
    var isize : number = 6;
    var arr : number[] = [85,66,3,66,93,88];

    console.log("Jay Ganesh.....");

    //Call To Difference Function
    iret = Difference(isize,arr);

    //Printing Difference Calculated
    console.log("Difference Between Max and Minimum Element is :",iret);
}

//Call To Main function
main();