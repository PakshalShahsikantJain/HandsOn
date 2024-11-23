/*
    Author : Pakshal Jain
    Date : 04/11/2022
    Program : To Print Numberd Between Entered Range
*/
//Function To Display Numbers
function Display(No, No2) {
    var i = 0;
    if (No > No2) {
        console.log("Invalid Range");
        return;
    }
    //Logic
    console.log("Printing Numbers In Betweeen Entered Range");
    for (i = No; i <= No2; i++) {
        console.log(i);
    }
}
//Main Function
function main() {
    var No = 5;
    var No2 = 15;
    console.log("Jay Ganesh...");
    //Call To Display Function
    Display(No, No2);
}
//Call To Main Function
main();
