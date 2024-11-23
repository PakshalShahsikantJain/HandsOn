/*
    Author : Pakshal Shashikant Jain
    Date : 09/04/2023
    Program : To Print Below Given Pattern
    Input : iRow = 4 iCol = 4
    Output : * * * #
             * * # *
             * # * *
             # * * *
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Display Given Pattern 
function Display(No, No2) {
    var i = 0;
    var j = 0;
    //Printing Below Given Pattern
    console.log("Printing Below Given Pattern : ");
    for (i = No; i > 0; i--) {
        for (j = 1; j <= No2; j++) {
            if (i == j) {
                process.stdout.write("#\t");
            }
            else {
                process.stdout.write("*\t");
            }
        }
        console.log();
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var No = 5;
    var No2 = 5;
    console.log("Jay Ganesh...");
    //Call To Display Function
    Display(No, No2);
}
//Call To Main Function
main();
