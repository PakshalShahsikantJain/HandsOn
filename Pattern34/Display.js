/*
    Author : Pakshal Shashikant Jain
    Date : 13/04/2023
    Program : To Print Below Given Pattern
    Input : iRow = 6 iCol = 6
    Output : * * * * * *
             *       * *
             *     *   *
             *   *     *
             * *       *
             * * * * * *
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To print Given Pattern 
function Pattern(No, No2) {
    var i = 0;
    var j = 0;
    //Logic To Print Given Pattern 
    console.log("Printing Below Given Pattern....");
    for (i = No; i > 0; i--) {
        for (j = 1; j <= No2; j++) {
            if ((i == j) || (i == 1) || (j == 1) || (i == No) || (j == No2)) {
                process.stdout.write("*\t");
            }
            else {
                process.stdout.write(" \t");
            }
        }
        console.log();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var No = 6;
    var No2 = 6;
    console.log("Ganapati Bappa Morya...");
    //Call To Pattern Function
    Pattern(No, No2);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
