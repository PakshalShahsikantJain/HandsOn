/*
    Author : Pakshal Jain
    Date : 11/12/2022
    Program : To Calculate Summation of Even Numbers in Entered Range 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Summation of Even Numbers
function SumEven(No : number,No2 : number) : number {
    //Required Varibles
    var i : number = 0;
    var Sum : number = 0;
    
    //Logic
    for(i = No;i <= No2;i++) {
            if(i % 2 == 0) {
                Sum = Sum + i;
            }
    }

    return Sum;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() {
    var No : number = 18;
    var No2 : number = 90;  
    var iret : number = 0;

    console.log("Jay Ganesh...");

    //Handling Condition if Entered Number is Negative or Starting Number is Greater Than Ending Number
    if((No < 0)||(No > No2)) {
        console.log("Invalid Range");
        return;
    }   

    //Call To SumEven Function 
    iret  = SumEven(No,No2);

    //Printing Obtained Output
    console.log("Summation of Even Number in Entered Range is :",iret);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();