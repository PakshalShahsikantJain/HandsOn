/*
    Author : Pakshal Jain
    Date : 23/10/2022
    Program : To Calculate Factorial of Entered Number
*/
//////////////////////////////////////////////////////////////////////////////////////////////
//Function To Calculate Factorial
function Factorial(No) {
    var i = 0;
    var fact = 1;
    //Handeling Condition if Entered Number is Negative
    if (No < 0) {
        No = -No;
    }
    //Logic
    for (i = No; i > 0; i--) {
        fact = fact * i;
    }
    return fact;
}
////////////////////////////////////////////////////////////////////////////////////////////////
function main() {
    var no = -5;
    var iret = 0;
    console.log("Jay Ganesh....");
    //Call To Factorial Function
    iret = Factorial(no);
    //Printing Factorial
    console.log("Factorial of Entered Number is : %d", iret);
}
//Call To Main Function
main();
