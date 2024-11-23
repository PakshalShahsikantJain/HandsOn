/*
    Author : Pakshal Shashikant Jain 
    Date : 06/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
              check whether NO is present or not.

              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : TRUE

              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : FALSE 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Entered Number is Present or Not in Entered N Numbers
function Check(isize : number,arr : number[],NO : number) : boolean
{
    var i : number = 0;

    //Logic To Check
    for(i = 0;i < isize;i++)
    {
        if(arr[i] == NO)
        {
            break;
        }
    }

    if(arr[i] == NO)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main() 
{
    var isize : number = 6;
    var NO : number = 112;
    var arr : number[] = [85,66,11,23,85,74];
    var bret : boolean = false;

    console.log("Gnapati Bappa Morya : ");

    //Call To Check Function
    bret = Check(isize,arr,NO);

    //Hadeling Conditions according To Return Value
    if(bret == true)
    {
        console.log("Entered Number %d is Present in Entered N Numbers ",NO);
    }
    else
    {
        console.log("Entered Number %d is Not Present in Entered N Numbers",NO);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main function
main();