/*
    Author : Pakshal Jain
    Date : 15/10/2022
    Program : To Printing Digits of Entered Number in Reverse Order
*/
//Function To Display
function Display(No) {
    var Digit = 0;
    console.log("Printing Digits in Reverse Order : ");
    while (No != 0) {
        Digit = No % 10;
        console.log("%d", Digit);
        No = Math.floor(No / 10);
    }
}
function main() {
    var No = 252871;
    console.log("Jay Ganesh....");
    Display(No);
}
main();
