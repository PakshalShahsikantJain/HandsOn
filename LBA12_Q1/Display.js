/*
    Author : Pakshal Jain
    Date : 15/12/2022
    Program : To Display Below Pattern

    Input : 5
    Output : * * * * * # # # # #

    Input : 6
    Output : * * * * * * # # # # # # #
    
    Input : -5
    Output : * * * * * # # # # #
    
    Input : 2
    Output : * * # #
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Print Given Pattern
function Pattern(No) {
    var i = 0;
    //Handeling Condition if Enterd Number is Negative
    if (No < 0) {
        No = -No;
    }
    //Logic
    for (i = 0; i < No; i++) {
        process.stdout.write("*\t");
    }
    for (i = 0; i < No; i++) {
        process.stdout.write("#\t");
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    //Variable
    var No = -6;
    console.log("Jay ganesh...");
    //Call To pattern Function
    Pattern(No);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
