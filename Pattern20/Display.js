/*
    Author : Pakshal Shashikant Jain
    Date : 18/03/2023
    Program : To Print Below Given Pattern
    
    Input : iRow = 4 iCol = 4
    Output : 1 2 3 4
             2 3 4 5
             3 4 5 6
             4 5 6 7
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Display Pattern 
function Pattern(No, No2) {
    var i = 0;
    var j = 0;
    var k = 1;
    //Logic To Print Pattern 
    console.log("Printing Below Given Pattern : ");
    for (i = 0; i < No; i++) {
        for (j = 0; j < No2; j++) {
            process.stdout.write(k + "\t");
            k++;
            if (j == No2 - 1) {
                k = k - 3;
            }
        }
        console.log();
    }
}
///////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var No = 4;
    var No2 = 4;
    console.log("Jay Ganesh....");
    //Call To Pattern Function
    Pattern(No, No2);
}
//////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
