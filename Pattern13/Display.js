/*
    Author : "Pakshal Shashikant Jain"
    Date : 04/03/2023
    Program  : To PRint Below Given Pattern
    Input : iRow = 4 iCol = 4
    Output : A B C D
             A B C D
             A B C D
             A B C D
*/
//Function To Print Pattern 
function Pattern(No, No2) {
    var i = 0;
    var j = 0;
    //Logic To Print Pattern 
    console.log("Printing Given Pattern");
    for (i = 0; i < No; i++) {
        for (j = 0; j < No2; j++) {
            process.stdout.write(String.fromCharCode(j + 65) + "\t");
        }
        console.log();
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var No = 4;
    var No2 = 4;
    console.log("Jay Ganesh....");
    //Call To Pattern Function
    Pattern(No, No2);
}
//Call To Main Function
main();
