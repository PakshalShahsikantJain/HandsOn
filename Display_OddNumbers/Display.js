/*
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept Number From User And Print Odd Numbers Till Entered Number
*/
//Function To Print Odd number
function OddNumbers(No) {
    var i = 0;
    console.log("Printing Odd Numbers Till Entered Number..");
    for (i = 1; i <= No; i++) {
        if (i % 2 != 0) {
            process.stdout.write(i + "\t");
        }
    }
}
//Main Function
function main() {
    var No = 10;
    console.log("Jay Ganesh....");
    OddNumbers(No);
}
main();
