/*
    Author : Pakshal Shashikant Jain
    Date : 06/04/2023
    Program : To Print Below Given Pattern
    Input : iRow = 4 iCol = 4
    Output : *
             * *
             * * *
             * * * *
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Print Pattern
function Pattern(No, No2) {
    var i = 0;
    var j = 0;
    console.log("Printing Below Given Pattern : ");
    for (i = 1; i <= No; i++) {
        for (j = 1; j <= No2; j++) {
            if (i >= j) {
                process.stdout.write("*\t");
            }
            else {
                process.stdout.write(" \t");
            }
        }
        console.log();
    }
}
////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var No = 4;
    var No2 = 4;
    //Call To Pattern Function
    Pattern(No, No2);
}
main();
