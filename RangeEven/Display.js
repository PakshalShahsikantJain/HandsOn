/*
    Author : Pakshal Jain
    Date : 06/11/2022
    Program : To Print Even Numbers in Entered Range
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Print Even Number in Range
function RangeEven(No, No2) {
    var i = 0;
    //Logic To Print Even Numbers in Range
    console.log("Printing Even Numbers in Entered Range");
    for (i = No; i <= No2; i++) {
        if (i % 2 == 0) {
            console.log(i);
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var No = 23;
    var No2 = 35;
    console.log("Jay Ganesh...");
    //Call To RangeEven Function
    RangeEven(No, No2);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
