/*
    Author : Pakshal Jain
    Date : 14/01/2023
    Program : To Calculate OddFactorial of Entered Number
*/
//////////////////////////////////////////////////////////////////////////////////////////////
//Function to Calculate OddFactorial of Entered Number
function OddFactorial(No) {
    var fact = 1;
    var i = 0;
    if (No < 0) {
        No = -No;
    }
    //Logic
    for (i = No; i > 0; i--) {
        if (i % 2 != 0) {
            fact = fact * i;
        }
    }
    return fact;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var No = -5;
    var iret = 0;
    console.log("Jay ganesh...");
    //Call To OddFactorial Function
    iret = OddFactorial(No);
    //Printing Result Obtained
    console.log("Odd Factorial of Entered Number is :", iret);
}
/////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
