/*
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the Smallest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 3 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Smallest Number from Entered N Numbers
function Minimum(isize : number,arr : number[]) : number
{
    var i : number = 0;
    var imin : number = 0;

    imin = arr[i];
    for(i = 0;i < isize;i++)
    {
        if(arr[i] < imin) 
        {
            imin = arr[i];
        }
    }

    return imin;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main() 
{
    var isize : number = 6;
    var arr : number[] = [85,66,66,93,88,-9154];
    var iret : number = 0;

    console.log("Jay ganesh....");

    //Call To Minimum function
    iret = Minimum(isize,arr);

    console.log("Printing Element Which is Smallest in Entered N Numbers %d",iret);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main function
main();