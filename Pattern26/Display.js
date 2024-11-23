/*
    Author : Pakshal Shashikant Jain
    Date : 02/04/2023
    Program : To Print Below Given Pattern

    Input : iRow = 6 iCol = 5
    Output : 1 2 3 4
             1 * * 4
             1 * * 4
             1 2 3 4
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Print Pattern
function Pattern(No, No2) {
    var i = 0;
    var j = 0;
    //Logic To Print Pattern
    console.log("Printing Below Given Pattern");
    for (i = 1; i <= No; i++) {
        for (j = 1; j <= No2; j++) {
            if ((i == 1) || (j == 1) || (i == No) || (j == No2)) {
                process.stdout.write(j + "\t");
            }
            else {
                process.stdout.write("*" + "\t");
            }
        }
        console.log();
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var No = 5;
    var No2 = 4;
    console.log("Ganapati Bappa Morya...");
    //Call To Pattern Function
    Pattern(No, No2);
}
main();
