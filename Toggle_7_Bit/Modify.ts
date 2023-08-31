/*
    Author : Pakshal Shashikant Jain 
    Date : 01/09/2023
    Program : Write a program which accept one number from user and off 7th and 10th
              bit of that number. Return modified number.  
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Off Entered Bit
function OffBit(iNo : number) 
{
    var iResult : number = 0;           // 0    0    0    0    0    2    4    0
    var iMask : number = 0X00000240;   // 0000 0000 0000 0000 0000 0010 0100 0000

    iResult = iNo & iMask;
    
    if(iResult == iMask)
    {
        iResult = iMask ^ iNo;
    }

    return iResult;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main()
{
    var iNo : number = 45674;
    var iret : number = 0;

    console.log("Jay Ganesh....");

    //Call To OffBit Function
    iret = OffBit(iNo);
    
    //Printing Modified Number
    console.log("Modified Number is :",iret);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main function
main();