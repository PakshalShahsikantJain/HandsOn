/*
    Author : Pakshal Jain
    Date : 27/10/2022
    Program : To accept number from user and print numbers till that number
*/
//Function To Print Required Pattern
function Pattern(No) {
    var i = 0;
    //Logic
    console.log("Printing Numbers Till Entered Number..");
    for (i = 1; i <= No; i++) {
        process.stdout.write(i + "\t");
    }
}
//Main Function
function main() {
    var No = 8;
    console.log("Jay Ganesh....");
    //Call To Pattern Function
    Pattern(No);
}
//Call To Main Function
main();
