/*
    Author : Pakshal Jain
    Date : 11/12/2022
    Program : To Calculate Summation of Even Numbers in Entered Range
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Calculate Summation of Even Numbers
function SumEven(No, No2) {
    //Required Varibles
    var i = 0;
    var Sum = 0;
    //Logic
    for (i = No; i <= No2; i++) {
        if (i % 2 == 0) {
            Sum = Sum + i;
        }
    }
    return Sum;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var No = 18;
    var No2 = 90;
    var iret = 0;
    console.log("Jay Ganesh...");
    //Handling Condition if Entered Number is Negative or Starting Number is Greater Than Ending Number
    if ((No < 0) || (No > No2)) {
        console.log("Invalid Range");
        return;
    }
    //Call To SumEven Function 
    iret = SumEven(No, No2);
    //Printing Obtained Output
    console.log("Summation of Even Number in Entered Range is :", iret);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
