/*
    Author : Pakshal Shashikant Jain
    Date : 22/03/2023
    Program : To Print Below Given Pattern
    Input : iRow = 5 iCol = 5
    Output : 1  2  3  4  5
            -1 -2 -3 -4 -5
             1  2  3  4  5
            -1 -2 -3 -4 -5
             1  2  3  4  5
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Print Pattern 
function Pattern(No, No2) {
    var i = 0;
    var j = 0;
    //Logic To Print Given Pattern
    console.log("Printing Below Given Pattern : ");
    for (i = 0; i < No; i++) {
        for (j = 1; j <= No2; j++) {
            if (i % 2 == 0) {
                process.stdout.write(" " + j + "\t");
            }
            else if (i % 2 != 0) {
                process.stdout.write((-j) + "\t");
            }
        }
        console.log();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var No = 5;
    var No2 = 5;
    console.log("Jay Ganesh.....");
    //Call To Pattern Function
    Pattern(No, No2);
}
//Call To Main Function
main();
