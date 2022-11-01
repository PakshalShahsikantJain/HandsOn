/*
    Author : Pakshal Jain
    Date : 20/09/2022
    Program : To Display Even Factors of Entered number
*/
//Function To Display EvenFact
function Display(No) {
    var i = 0;
    console.log("Printing Even Factors of Entered number....");
    for (i = 1; i <= No; i++) {
        if ((No % i == 0) && (i % 2 == 0)) {
            console.log("%d", i);
        }
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
function main() {
    var no = 36;
    console.log("Jay Ganesh.....");
    //Call To Display Function
    Display(no);
}
//Call To Main Function
main();
