/*
    Author : Pakshal Jain
    Date : 10/03/2022
    Program : To Print Factors of Entered Number in Reverse Order
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////
function Fact(No) {
    var i = 0;
    console.log("Factors of Entered Number in Reverse is : ");
    for (i = No - 1; i > 0; i--) {
        if (No % i == 0) {
            console.log("%d", i);
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
function main() {
    var no = 45;
    console.log("Jay Ganesh....");
    //Call To Fact Function
    Fact(no);
}
//Call To main Function
main();
