/*
    Author : Pakshal Shashikant Jain
    Date : 22/03/2023
    Program  : To Print Below Given Pattern
    
    Input : iRow = 4 iCol = 4
    Output : * # # #
             * * # #
             * * * #
             * * * *
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Print Pattern
function Pattern(No, No2) {
    var i = 0;
    var j = 0;
    //Logic To print Pattern
    console.log("Printing Given Pattern : ");
    for (i = 0; i < No; i++) {
        for (j = 0; j < No2; j++) {
            if ((i == j) || (i > j)) {
                process.stdout.write("*\t");
            }
            else {
                process.stdout.write("#\t");
            }
        }
        console.log();
    }
}
//Main Function
function main() {
    var No = 4;
    var No2 = 4;
    console.log("Jay Ganesh....");
    //Call To Pattern Function
    Pattern(No, No2);
}
main();
