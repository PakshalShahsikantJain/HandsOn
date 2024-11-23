/*
    Author : Pakshal Jain
    Date : 20/10/2022
    Program : To Calucalte Multiplication of Digits of Entered Number
*/
//Function TO Calucalte Multiplication of Digits
function Multiplication(No) {
    var Digit = 0;
    var Mult = 1;
    //Logic To Calucalte Multiplication of Digits
    while (No != 0) {
        Digit = No % 10;
        if (Digit == 0) {
            Digit = 1;
        }
        Mult = Mult * Digit;
        No = Math.floor(No / 10);
    }
    return Mult;
}
//Main Function
function main() {
    var No = 1018;
    var iret = 0;
    console.log("Jay Ganesh...");
    //Call To Multiplication Function
    iret = Multiplication(No);
    console.log("Multiplication of Digits of Entered Number is : %d", iret);
}
//Call To Main Function
main();
