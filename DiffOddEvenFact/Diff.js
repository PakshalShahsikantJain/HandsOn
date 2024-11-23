/*
    Author : Pakshal Jain
    Date : 17/01/2023
    Program : To Calculate Differnce Between Even and Odd Factorial of Entered Number
*/
//Function To calculate Difference 
function Difference(No) {
    var i = 0;
    var EvenFact = 1;
    var OddFact = 1;
    var Diff = 0;
    if (No < 0) {
        No = -No;
    }
    //Logic To Calculate Difference
    for (i = No; i > 0; i--) {
        if (i % 2 != 0) {
            OddFact = OddFact * i;
        }
        else {
            EvenFact = EvenFact * i;
        }
    }
    //Calculating Difference
    Diff = EvenFact - OddFact;
    return Diff;
}
//Main Function
function main() {
    var No = -5;
    var iret = 0;
    console.log("Jay Ganesh....");
    //Call To Differnce Function 
    iret = Difference(No);
    //Printing Obtatined Output
    console.log("Difference Between Even and Odd Fact is :", iret);
}
//Call To main Function
main();
