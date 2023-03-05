/*
    Author : Pakshal Shashikant Jain
    Date : 05/03/2023
    Program : To Print Below Given Pattern
    Input : iRow = 4 iCol = 4
    Output : A B C D
             a b c d
             A B C D
             a b c d

*/
///////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Print Pattern
function Pattern(No, No2) {
    var i = 0;
    var j = 0;
    //Logic To Print Pattern 
    console.log("Printing Below Given Pattern");
    for (i = 0; i < No; i++) {
        for (j = 0; j < No2; j++) {
            if (i % 2 == 0) {
                process.stdout.write(String.fromCharCode(j + 65) + "\t");
            }
            else {
                process.stdout.write(String.fromCharCode(j + 97) + "\t");
            }
        }
        console.log();
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var No = 4;
    var No2 = 4;
    console.log("Jay Ganesh....");
    //Call To Pattern Function
    Pattern(No, No2);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
